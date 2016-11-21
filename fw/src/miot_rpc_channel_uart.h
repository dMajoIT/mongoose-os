/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MIOT_MG_RPC_CHANNEL_UART_H_
#define CS_FW_SRC_MIOT_MG_RPC_CHANNEL_UART_H_

#include <stdbool.h>

#include "common/mg_rpc/mg_rpc_channel.h"

#if MIOT_ENABLE_RPC && MIOT_ENABLE_RPC_UART

struct mg_rpc_channel *mg_rpc_channel_uart(int uart_no,
                                           bool wait_for_start_frame);

#endif /* MIOT_ENABLE_RPC && MIOT_ENABLE_RPC_UART */
#endif /* CS_FW_SRC_MIOT_MG_RPC_CHANNEL_UART_H_ */
