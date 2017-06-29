//
// Created by pawan on 29/6/17.
//


#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<string> split(string s, char *delim) {
    char *str = (char *) s.c_str();
    char *pch;
    vector<string> out;
//    printf ("Splitting string \"%s\" into tokens:\n",str);
    pch = strtok(str, delim);
    while (pch != NULL) {
//        printf ("%s\n",pch);
        out.push_back(string(pch));
        pch = strtok(NULL, delim);
    }
    return out;
}
