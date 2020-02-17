//
//  mqtt_function_declarations.h
//  IoT_Porting
//
//  Created by Marcin Kielesiński on 31/01/2020.
//

#ifndef mqtt_function_declarations_h
#define mqtt_function_declarations_h

PROV_DEVICE_TRANSPORT_HANDLE prov_transport_common_mqtt_create(const char* uri, TRANSPORT_HSM_TYPE type, const char* scope_id, const char* api_version, PROV_MQTT_TRANSPORT_IO transport_io, PROV_TRANSPORT_ERROR_CALLBACK error_cb, void* error_ctx);
void prov_transport_common_mqtt_destroy(PROV_DEVICE_TRANSPORT_HANDLE handle);
int prov_transport_common_mqtt_open(PROV_DEVICE_TRANSPORT_HANDLE handle, const char* registration_id, BUFFER_HANDLE ek, BUFFER_HANDLE srk, PROV_DEVICE_TRANSPORT_REGISTER_CALLBACK data_callback, void* user_ctx, PROV_DEVICE_TRANSPORT_STATUS_CALLBACK status_cb, void* status_ctx, PROV_TRANSPORT_CHALLENGE_CALLBACK reg_challenge_cb, void* challenge_ctx);
int prov_transport_common_mqtt_close(PROV_DEVICE_TRANSPORT_HANDLE handle);
int prov_transport_common_mqtt_register_device(PROV_DEVICE_TRANSPORT_HANDLE handle, PROV_TRANSPORT_JSON_PARSE json_parse_cb, PROV_TRANSPORT_CREATE_JSON_PAYLOAD json_create_cb, void* json_ctx);
int prov_transport_common_mqtt_get_operation_status(PROV_DEVICE_TRANSPORT_HANDLE handle);
void prov_transport_common_mqtt_dowork(PROV_DEVICE_TRANSPORT_HANDLE handle);
int prov_transport_common_mqtt_set_trace(PROV_DEVICE_TRANSPORT_HANDLE handle, bool trace_on);
int prov_transport_common_mqtt_x509_cert(PROV_DEVICE_TRANSPORT_HANDLE handle, const char* certificate, const char* private_key);
int prov_transport_common_mqtt_set_trusted_cert(PROV_DEVICE_TRANSPORT_HANDLE handle, const char* certificate);
int prov_transport_common_mqtt_set_proxy(PROV_DEVICE_TRANSPORT_HANDLE handle, const HTTP_PROXY_OPTIONS* proxy_options);
int prov_transport_common_mqtt_set_option(PROV_DEVICE_TRANSPORT_HANDLE handle, const char* option, const void* value);

#endif /* mqtt_function_declarations_h */
