#if !defined(__ADC_H__)
#define __ADC_H__


#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "nrf.h"
#include "nrf_drv_saadc.h"
#include "boards.h"
#include "app_error.h"
#include "nrf_delay.h"
#include "app_util_platform.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

void saadc_callback(nrf_drv_saadc_evt_t const * p_event);
void saadc_init(void);


#endif // __ADC_H__
