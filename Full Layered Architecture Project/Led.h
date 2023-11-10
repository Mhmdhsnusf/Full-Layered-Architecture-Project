/******************************************************************************
 *
 * Module: Led
 *
 * File Name: Led.h
 *
 * Description: Header file for Led Module.
 *
 * Author: Mohamed Hassan
 ******************************************************************************/
#ifndef LED_H
#define LED_H

#include "Led_Cfg.h"
#include "Std_Types.h"

/* Description: Set the LED state to ON */
void LED_setOn(void);

/* Description: Set the LED state to OFF */
void LED_setOff(void);

/*Description: Toggle the LED state */
void LED_toggle(void);

/* Description: Refresh the LED state */
void LED_refreshOutput(void);

#endif /* LED_H */
