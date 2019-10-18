#if !defined(__BLE_HANDLER_H__)
#define __BLE_HANDLER_H__

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "nrf.h"
#include "boards.h"
#include "app_error.h"
#include "nrf_delay.h"
#include "app_util_platform.h"
#include "nordic_common.h"
#include "nrf_sdh.h"
#include "nrf_sdh_ble.h"
#include "app_timer.h"
#include "bsp_btn_ble.h"
#include "ble.h"
#include "ble_hci.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "ble_db_discovery.h"
#include "ble_lbs_c.h"
#include "ble_conn_state.h"
#include "nrf_ble_gatt.h"
#include "nrf_pwr_mgmt.h"
#include "nrf_ble_scan.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"
#include "nrf_drv_timer.h"


void ble_stack_init(void);
void timer_init(void);
void gatt_init(void);
void db_discovery_init(void);
void lbs_c_init(void);
void ble_conn_state_init(void);
void scan_init(void);
void scan_start(void);
void saadc_init(void);
void buttons_init(void);

#endif // __BLE_HANDLER_H__
