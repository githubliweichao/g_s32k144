/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : sbc_uja11691.h
**     Project     : hack_s32k144
**     Processor   : S32K144_100
**     Component   : sbc_uja1169
**     Version     : Component SDK_S32K1xx_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32K1xx_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-03-08, 21:29, # CodeGen: 74
**     Abstract    :
**
**     Contents    :
**         SBC_Init                    - status_t SBC_Init(const sbc_int_config_t *const config,const uint32_t...
**         SBC_SetVreg                 - status_t SBC_SetVreg(const sbc_regulator_ctr_t *const regulatorCtr);
**         SBC_GetVreg                 - status_t SBC_GetVreg(sbc_regulator_ctr_t *const regulatorCtr);
**         SBC_SetWatchdog             - status_t SBC_SetWatchdog(const sbc_wtdog_ctr_t *const wtdog);
**         SBC_GetWatchdog             - status_t SBC_GetWatchdog(sbc_wtdog_ctr_t *const wtdog);
**         SBC_SetMode                 - status_t SBC_SetMode(const sbc_mode_mc_t mode);
**         SBC_GetMode                 - status_t SBC_GetMode(sbc_mode_mc_t *const mode);
**         SBC_SetFailSafe             - status_t SBC_SetFailSafe(const sbc_fail_safe_lhc_t lhc,const...
**         SBC_GetFailSafe             - status_t SBC_GetFailSafe(sbc_fail_safe_lhc_t *const lhc,sbc_fail_safe_rcc_t...
**         SBC_SetSystemEvents         - status_t SBC_SetSystemEvents(const sbc_sys_evnt_t *const sysEvnt);
**         SBC_GetSystemEvents         - status_t SBC_GetSystemEvents(sbc_sys_evnt_t *const sysEvnt);
**         SBC_SetLock                 - status_t SBC_SetLock(const sbc_lock_t lockMask);
**         SBC_GetLock                 - status_t SBC_GetLock(sbc_lock_t *const lockMask);
**         SBC_SetCanConfig            - status_t SBC_SetCanConfig(const sbc_can_conf_t *const can);
**         SBC_GetCanConfig            - status_t SBC_GetCanConfig(sbc_can_conf_t *const can);
**         SBC_SetWakePin              - status_t SBC_SetWakePin(const sbc_wake_t *const wakePin);
**         SBC_GetWakePin              - status_t SBC_GetWakePin(sbc_wake_t *const wakePin);
**         SBC_GetMainStatus           - status_t SBC_GetMainStatus(sbc_main_status_t *const mainStatus);
**         SBC_GetWatchdogStatus       - status_t SBC_GetWatchdogStatus(sbc_wtdog_status_t *const watchdogStatus);
**         SBC_GetSupplyStatus         - status_t SBC_GetSupplyStatus(sbc_supply_status_t *const supStatus);
**         SBC_GetCanStatus            - status_t SBC_GetCanStatus(sbc_trans_stat_t *const transStatus);
**         SBC_GetWakeStatus           - status_t SBC_GetWakeStatus(sbc_wake_stat_wpvs_t *const wakeStatus);
**         SBC_GetEventsStatus         - status_t SBC_GetEventsStatus(sbc_evn_capt_t *const events);
**         SBC_CleanEvents             - status_t SBC_CleanEvents(const sbc_evn_capt_t *const events);
**         SBC_GetAllStatus            - status_t SBC_GetAllStatus(sbc_status_group_t *const status);
**         SBC_GetMtpnvStatus          - status_t SBC_GetMtpnvStatus(sbc_mtpnv_stat_t *const mtpnv);
**         SBC_GetFactoriesSettings    - status_t SBC_GetFactoriesSettings(sbc_factories_conf_t *const factoriesConf);
**         SBC_ChangeFactoriesSettings - status_t SBC_ChangeFactoriesSettings(const sbc_factories_conf_t *const newConf);
**         SBC_DataTransfer            - status_t SBC_DataTransfer(const sbc_register_t regName,const uint8_t *const...
**         SBC_FeedWatchdog            - void SBC_FeedWatchdog(void);
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file sbc_uja11691.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup sbc_uja11691_module sbc_uja11691 module documentation
**  @{
*/         
#ifndef sbc_uja11691_H
#define sbc_uja11691_H
/* MODULE sbc_uja11691. */

/* MODULE sbc_uja11691. 
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variable will be used in other source file that user initialize
 * to use this module.
 */
/* Include inherited beans */
#include "lpspiCom1.h"
#include "Cpu.h"

/*! @brief User configuration declaration 0 */
extern const sbc_int_config_t sbc_uja11691_InitConfig0;

#endif
/* ifndef sbc_uja11691_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/
