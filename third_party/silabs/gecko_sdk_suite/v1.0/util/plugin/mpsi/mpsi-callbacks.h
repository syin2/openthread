/**************************************************************************//**
 * Copyright 2017 Silicon Laboratories, Inc.
 *
 *****************************************************************************/

#include "mpsi-message-ids.h"

#ifdef EMBER_STACK_ZIGBEE
 #ifdef EZSP_HOST
  // Host
  #define addTransientLinkKey        ezspAddTransientLinkKey
 #else
  // SoC
  #define addTransientLinkKey        emberAddTransientLinkKey
 #endif // EZSP_HOST
#endif // EMBER_STACK_ZIGBEE

// Message callbacks
uint8_t mpsiHandleMessageGetAppsInfo(MpsiMessage_t* mpsiMessage);
uint8_t mpsiHandleMessageAppsInfo(MpsiMessage_t* mpsiMessage);
uint8_t mpsiHandleMessageBootloadSlot(MpsiMessage_t* mpsiMessage);
uint8_t mpsiHandleMessageError(MpsiMessage_t* mpsiMessage);
uint8_t mpsiHandleMessageInitiateJoining(MpsiMessage_t* mpsiMessage);
uint8_t mpsiHandleMessageGetZigbeeJoiningDeviceInfo(MpsiMessage_t* mpsiMessage);
uint8_t mpsiHandleMessageZigbeeJoiningDeviceInfo(MpsiMessage_t* mpsiMessage);
uint8_t mpsiHandleMessageSetZigbeeJoiningDeviceInfo(MpsiMessage_t* mpsiMessage);