//
//  all.h
//  IoT_Porting
//
//  Created by Marcin Kielesiński on 29/01/2020.
//

#ifndef all_h
#define all_h

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include <dlfcn.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <assert.h>
#include <inttypes.h>

#define HSM_TYPE_X509 true

#include "macro_utils.h"
#include "missed.h"
#include "azure_base64.h"
#include "azure_base32.h"
#include "optimize_size.h"

#include "azure_c_shared_utility/sha.h"
#include "azure_c_shared_utility/hmacsha256.h"
#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/umock_c_prod.h"
#include "azure_c_shared_utility/gballoc.h"
#include "azure_c_shared_utility/uniqueid.h"
#include "azure_c_shared_utility/tickcounter.h"
#include "azure_c_shared_utility/crt_abstractions.h"
#include "azure_c_shared_utility/strings.h"
#include "azure_c_shared_utility/string_tokenizer.h"
#include "azure_c_shared_utility/strings.h"
#include "azure_c_shared_utility/platform.h"
#include "azure_c_shared_utility/sastoken.h"
#include "azure_c_shared_utility/urlencode.h"
#include "azure_c_shared_utility/connection_string_parser.h"
#include "azure_c_shared_utility/tlsio.h"
#include "azure_c_shared_utility/http_proxy_io.h"
#include "azure_c_shared_utility/httpheaders.h"
#include "azure_c_shared_utility/buffer_.h"
#include "azure_c_shared_utility/singlylinkedlist.h"
#include "azure_c_shared_utility/shared_util_options.h"
#include "azure_c_shared_utility/optimize_size.h"
#include "azure_c_shared_utility/socketio.h"
#include "azure_c_shared_utility/vector.h"
#include "envvariable.h"

#include "azure_uamqp_c/message_sender.h"
#include "azure_uamqp_c/message_receiver.h"
#include "azure_uamqp_c/message.h"
#include "azure_uamqp_c/messaging.h"
#include "azure_uamqp_c/saslclientio.h"
#include "azure_uamqp_c/sasl_plain.h"
#include "azure_uamqp_c/amqp_definitions_application_properties.h"
#include "azure_umqtt_c/mqtt_client.h"

#include "provisioning_sc_enrollment.h"
#include "provisioning_sc_query.h"
#include "provisioning_sc_device_registration_state.h"
#include "provisioning_sc_attestation_mechanism.h"
#include "provisioning_sc_tpm_attestation.h"
#include "provisioning_sc_x509_attestation.h"
#include "provisioning_sc_json_const.h"
#include "provisioning_sc_shared_helpers.h"
#include "provisioning_sc_bulk_operation.h"
#include "provisioning_sc_models_serializer.h"
#include "provisioning_sc_twin.h"
#include "provisioning_sc_json_const.h"
#include "provisioning_sc_enrollment.h"
#include "provisioning_sc_device_capabilities.h"
#include "provisioning_sc_shared_helpers.h"
#include "provisioning_sc_device_capabilities.h"
#include "provisioning_sc_models_serializer.h"
#include "provisioning_sc_tpm_attestation.h"
#include "provisioning_sc_x509_attestation.h"
#include "provisioning_service_client.h"

#include "parson.h"
#include "uhttp.h"

#include "prov_client_const.h"
#include "prov_transport.h"


#include "DiceSha256.h"
#include "RIoT.h"
#include "RiotCrypt.h"
#include "RiotDerEnc.h"
#include "RiotX509Bldr.h"


#include "BaseTypes.h"
#include "Capabilities.h"
#include "CompilerDependencies.h"
#include "gbfiledescript.h"
#include "GpMacros.h"
#include "Memory_fp.h"
#include "tpm_comm.h"
#include "tpm_socket_comm.h"
#include "Tpm.h"
#include "TPMB.h"
#include "TpmBuildSwitches.h"
#include "TpmError.h"
#include "TpmTypes.h"
#include "tpm_codec.h"
#include "Marshal_fp.h"
#include "Implementation.h"

#include "iothub_auth_client.h"
#include "prov_auth_client.h"
#include "prov_sasl_tpm.h"
#include "prov_transport_amqp_common.h"
#include "prov_transport_private.h"
#include "iothub_security_factory.h"
#include "prov_client_const.h"
#include "prov_device_client.h"
#include "prov_device_ll_client.h"
#include "prov_edge_trusted_certificates.h"
#include "prov_security_factory.h"
#include "prov_transport_amqp_client.h"
#include "prov_transport_amqp_ws_client.h"
#include "prov_transport_http_client.h"
#include "prov_transport_mqtt_client.h"
#include "prov_transport_mqtt_common.h"
#include "prov_transport_mqtt_ws_client.h"
#include "prov_transport.h"

#include "hsm_client_data.h"
#include "hsm_client_tpm.h"
#include "hsm_client_riot.h"
#include "hsm_client_key.h"
#include "hsm_client_http_edge.h"

#endif /* all_h */

