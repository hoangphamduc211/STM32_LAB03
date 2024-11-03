/*
 * time_set.h
 *
 *  Created on: Sep 14, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIME_SET_H_
#define INC_TIME_SET_H_
#include "main.h"
#include "limits.h"
#define NUM_TIMER 5
#define NUM_ENABLE 4
extern int timer_flag[NUM_TIMER];
extern int timer_dura[10];


void setTimer(int index, int duration);

void runTimer();

#endif /* INC_TIME_SET_H_ */
