//
// Created by pawan on 29/6/17.
//

#ifndef TERMINAL_TERMINAL_H
#define TERMINAL_TERMINAL_H

#include <sched.h>
#include <unistd.h>
#include <cstdlib>
#include <wait.h>
#include <string>
#include <iostream>

using namespace std;

///declarations
string getCommand(string prompt);

string getCommand();

void sendToTerminal(string basicString);

void verify(string basicString);

int runCommand(string command);

#endif //TERMINAL_TERMINAL_H
