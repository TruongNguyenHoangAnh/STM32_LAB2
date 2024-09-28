/*
 * clock.c
 *
 *  Created on: 28 Sep 2024
 *      Author: HOANG ANH
 */


#include "clock.h"
#include "global.h"

void clock(){
	second++;
	if(second == 60)
	{
		minutes++;
		second = 0;
	}

	if(minutes == 60)
	{
		hour++;
		minutes = 0;
	}

	if(hour == 24) hour = 0;
}
