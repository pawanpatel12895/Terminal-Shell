//
// Created by pawan on 29/6/17.
//

#ifndef TERMINAL_TERMUTILITIES_H
#define TERMINAL_TERMUTILITIES_H

#include <iostream>
#include <vector>
#include <cstring>


using namespace std;

inline void input(string &S) {
    getline(cin, S);
}

template<class type>
inline void input(type &inp) {
    std::cin >> inp;
}

vector<string> split(string s, char *delim);


#endif //TERMINAL_TERMUTILITIES_H
