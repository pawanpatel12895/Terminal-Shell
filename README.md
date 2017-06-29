#Terminal / Shell 
#### Current Build: <br>
1. Runs only command of /bin directory.
2. Runs commands without flags and arguments.

#### Future Builds:
1. Run with path variable.
2. Support of arguments and flags.

---

### Usage:

_Declarations :_<br>

1. `string getCommand(string prompt);`<br> 
get input from console with desired prompt.
2. `string getCommand();`<br>
get input from console with default prompt.
3. `int sendToTerminal(string command);`<br>
Executes Complex Commands.<br>
Return value: exit code of the command.
5. `int runCommand(string command);`<br>
Executes Single Command without arguments.<br>
Return value: exit code of the command.

_For better usage see main.cpp in the repository_

***


(\\____/) <br>
(='.'=) <br>
o(")_(")<br>