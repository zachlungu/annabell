/*
 * Command.h
 *
 *  Created on: Jan 10, 2016
 *      Author: jpp
 */

#ifndef SRC_COMMAND_H_
#define SRC_COMMAND_H_

#include <string>
#include "display.h"
#include <Annabell.h>
#include <Monitor.h>

using namespace std;

class Command {
private:
	Annabell* annabell;
	Monitor* monitor;
	display aDisplay;
	display* Display;
	timespec* clk0;
	timespec* clk1;

public:
	Command(Annabell* annabell, Monitor* monitor, display* aDisplay, timespec* clk0, timespec* clk1);
	int execute(string input_line);
};

#endif /* SRC_COMMAND_H_ */
