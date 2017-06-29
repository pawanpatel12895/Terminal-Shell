//
// Created by pawan on 29/6/17.
//

#include <sched.h>
#include <unistd.h>
#include <cstdlib>
#include <wait.h>
#include <string>
#include <iostream>

using namespace std;

///definitions

void verify(string basicString) {
    cout << basicString << endl;
    vector <string> tokens = split(basicString, (char *) (" "));
    cout << tokens.size() << endl;
    for (int i = 0; i < tokens.size(); ++i)
        cout << tokens[i] << endl;
    cout << endl;
}

void sendToTerminal(string command) {
    pid_t p = fork();
    int x;
    if (p == 0) {
        if ((x = runCommand(command)) == -1) {
            cout << "Some Error Occurred" << endl;
            exit(x);
        } else exit(0);
    } else if (p > 0) {
        int status;
        cout << "PID : " << p << endl;
        while (wait(&status) != p);
    } else {
        cout << "Error: Unable to Execute." << endl;
    }
}

int runCommand(string command) {
    const char *c = string("/bin/" + command).c_str();
    return execl(c, c, (char *) NULL);
}

string getCommand(string prompt) {
    static string str = "";
    cout << prompt;
    input(str);
    return str;
}

string getCommand() {
    return getCommand("PS1");
}