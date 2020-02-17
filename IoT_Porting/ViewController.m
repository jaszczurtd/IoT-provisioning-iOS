//
//  ViewController.m
//  IoT_Porting
//
//  Created by Marcin Kielesiński on 21/01/2020.

//

#import "ViewController.h"
#include "IoT_all.h"


@interface ViewController ()

@end

@implementation ViewController

static const char IOT_SCOPE_DEV[] = "0ne <your scope>";

static char keyStorage[4096] = {0};
static char crtStorage[4096] = {0};

static const char GLOBAL_IOT_ENDPOINT[] = "global.azure-devices-provisioning.net";

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *keyObject = [NSString stringWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"key" ofType:@""] encoding:NSUTF8StringEncoding error:nil];
    NSString *crtObject = [NSString stringWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"cert" ofType:@""] encoding:NSUTF8StringEncoding error:nil];
    
    if(keyObject != NULL && crtObject != NULL) {
        strcpy(keyStorage, keyObject.UTF8String);
        strcpy(crtStorage, crtObject.UTF8String);

        bool result = [self IoTProvisioningClient:crtStorage key:keyStorage];
        
        NSLog(@"IoT result: %d", result);
    } else {
        
        NSLog(@"Certificate and key is needed");
        
    }
}

static void registation_status_callback(PROV_DEVICE_REG_STATUS reg_status, void* user_context) {
    (void)user_context;
    NSLog(@"Provisioning Status: %d\r\n", reg_status);
}

static void register_device_callback(PROV_DEVICE_RESULT register_result, const char* iothub_uri, const char* device_id, void* user_context) {
    (void)user_context;
    if (register_result == PROV_DEVICE_RESULT_OK) {
        NSLog(@"Registration Information received from service: %s, deviceId: %s\r\n", iothub_uri, device_id);
    } else {
        NSLog(@"Failure registering device: %d\r\n", register_result);
    }
   
}

-(int) IoTProvisioningClient: (const char*) certificate key: (const char*) key {
    
    const char *iot_scope = IOT_SCOPE_DEV;
    
    PROV_DEVICE_HANDLE prov_device_handle = NULL;
    PROV_DEVICE_RESULT prov_device_result = PROV_DEVICE_RESULT_ERROR;
    
    NSLog(@"Provisioning API Version: %s\r\n", Prov_Device_GetVersionString());
    NSLog(@"global endpoint: %s scope: %s", GLOBAL_IOT_ENDPOINT, iot_scope);
    NSLog(@"%s", STRING_c_str(platform_get_platform_info()));
    
    (void)prov_dev_security_init(SECURE_DEVICE_TYPE_X509);
    
    Prov_Device_LL_Set_x509_cert(certificate);
    Prov_Device_LL_Set_x509_key(key);
    
    if ((prov_device_handle = Prov_Device_Create(GLOBAL_IOT_ENDPOINT, iot_scope, Prov_Device_MQTT_WS_Protocol)) == NULL) {
        NSLog(@"failed calling Prov_Device_Create\r\n");
        return false;
    }
    
    prov_device_result = Prov_Device_Register_Device(prov_device_handle, register_device_callback, NULL, registation_status_callback, NULL);
    
    return prov_device_result;
}

@end
