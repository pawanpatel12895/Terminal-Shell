#include <iostream>
#include <vector>
#include "Terminal.h"

using namespace std;

int main() {
    string PS1 = "$ ";
    while (1) {
        string command = getCommand(PS1);
        if (command == "exit")
            break;
        sendToTerminal(command);
    }
    return 0;
}