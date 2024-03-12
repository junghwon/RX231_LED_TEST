/*
 * schedule.c
 *
 *  Created on: 2022/01/25
 *      Author: kehnc
 */
#include "schedule.h"


// --- static value
static scheduleData_t scheduleData[SCHEDULE_MAX];


// --- static const value
static const scheduleData_t scheduleDataTable[SCHEDULE_MAX] = {
		{5, scheduleType_on,},
		{2, scheduleType_off,},
		{1, scheduleType_flash,},
		{3, scheduleType_off,},
		{5, scheduleType_on,},
};


// --- public function
void schedule_Manager (void)
{

}

void schedule_Init (void)
{
	for (uint8_t i = 0; i < SCHEDULE_MAX; i++) {
		scheduleData[i] = scheduleDataTable[i];
	}
}
