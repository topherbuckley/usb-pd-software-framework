/***************************************************************************
Power Delivery Source Pro Application header file

  Company:
    Microchip Technology Inc.

  File Name:
    UPD301C_PIM_Source_Pro_App.h

  Description:
    This header file contains user application specific functions and interfaces
************************************************************************** */
/*******************************************************************************
Copyright �  [2019-2020] Microchip Technology Inc. and its subsidiaries.

Subject to your compliance with these terms, you may use Microchip software and
any derivatives exclusively with Microchip products. It is your responsibility
to comply with third party license terms applicable to your use of third party
software (including open source software) that may accompany Microchip software.

THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER EXPRESS,
IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES
OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE. IN
NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN
ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST
EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU
HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

#ifndef _UPD301C_PIM_SOURCE_PRO_APP_H
#define _UPD301C_PIM_SOURCE_PRO_APP_H

/* Defines major and minor version of PSF Source Pro Application*/
#define APP_REV_MAJOR	0x01
#define APP_REV_MINOR	0x12

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */
#include <PSF_APIHook.h>
#include "psf_stdinc.h"

#define APP_VOLTAGE_0mV         0
#define APP_VOLTAGE_5000mV      5000
#define APP_VOLTAGE_9000mV      9000
#define APP_VOLTAGE_15000mV     15000
#define APP_VOLTAGE_20000mV     20000


/* Macro to indicate GPIO based DC-DC Controller MCP19119 */
#define PWRCTRL_GPIO_DC_DC_MCP19119     1

/* Macro to indicate I2C based DC-DC Controller MPQ4230 */
#define PWRCTRL_I2C_DC_DC_MPQ4230    2

/*Macro to indicate GPIO based DC-DC Controller MIC2128*/
#define PWRCTRL_GPIO_DC_DC_MIC2128     3

/* Defines the type of DC DC Controller used */
#define CONFIG_DCDC_CTRL        PWRCTRL_I2C_DC_DC_MPQ4230


// *****************************************************************************
// *****************************************************************************
// Section: Interface Functions
// *****************************************************************************
// *****************************************************************************
void App_SetMCUIdle(); 

UINT8 App_HandlePSFEvents(UINT8 u8PortNum, eMCHP_PSF_NOTIFICATION u8PDEvent);

void App_GPIOControl_Init(UINT8 u8PortNum, eMCHP_PSF_GPIO_FUNCTIONALITY eGPIOFunc);

void App_GPIOControl_Drive(UINT8 u8PortNum, eMCHP_PSF_GPIO_FUNCTIONALITY eGPIOFunc,
                                    eMCHP_PSF_GPIO_DRIVE_VAL eGPIODrive);

UINT8 App_PortPowerInit(UINT8 u8PortNum); 

void App_PortPowerSetPower(UINT8 u8PortNum, UINT16 u16Voltage, UINT16 u16Current);

#endif /* _UPD301C_PIM_SOURCE_PRO_APP_H */

/* *****************************************************************************
 End of File
 */
