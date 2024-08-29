/*
Copyright 2019 Bubnick

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

//The number of layers for VIA/REMAP
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

//This disables the auto-repeat for the double-action keys (e.g. S+LAlt)
#define QUICK_TAP_TERM 0

#define MOUSEKEY_DELAY             150 //200
#define MOUSEKEY_INTERVAL          60 //50
#define MOUSEKEY_MAX_SPEED         5  //10
#define MOUSEKEY_TIME_TO_MAX       7 //20
#define MOUSEKEY_WHEEL_MAX_SPEED   5	//8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

#define POINTING_DEVICE_ROTATION_90
#define CIRQUE_PINNACLE_TAP_ENABLE

// Limits the frequency that the sensor is polled for motion.
#define POINTING_DEVICE_TASK_THROTTLE_MS 10
#define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE

// Circular scroll
// Isn't it making the cursor jittering?
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE

//#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_RELATIVE_MODE
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

//from ...\keyboards\bastardkb\dilemma\3x5_2\splinky 
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 TRUE
