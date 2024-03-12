/*
 * schedule.h
 *
 *  Created on: 2022/01/25
 *      Author: kehnc
 */

#ifndef SCHEDULE_H_
#define SCHEDULE_H_

#include "r_cg_macrodriver.h"
#include "r_smc_entry.h"

#define SCHEDULE_MAX (5)

typedef enum {
	scheduleType_off,
	scheduleType_on,
	scheduleType_flash,
} scheduleType_t;

typedef struct {
	uint8_t time;
	scheduleType_t type;
} scheduleData_t;


// --- public function
void schedule_Manager (void);
void schedule_Init (void);

#endif /* SCHEDULE_H_ */
