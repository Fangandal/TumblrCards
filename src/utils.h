/*
 * utils.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Tumblr
 */

#ifndef SRC_UTILS_H_
#define SRC_UTILS_H_

#include <string>
#include <sys/ioctl.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void clear_console();

int get_console_width();

int get_console_height();

string get_display_screen(string type);

#endif /* SRC_UTILS_H_ */
