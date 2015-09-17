/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 17:49
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    short i, l, j, count;
    bool test;
    while (getline(stream, line)) {
        l = line.length();
        test = true;
        for(i = 0; i < l; i++) {
            if (line[i] == '0') {
                //cout << line[i];
                for (j = 0; j < l; j++) {
                    if (line[j]-48 == i) {
                        test = false;
                        break;
                    }
                }
            }
            else {
                count = 0;
                for (j = 0; j < l; j++) {
                    if (line[j]-48 == i) {
                        count++;
                    }
                }
                if (count != line[i]-48) {
                    test = false;
                }
            }
        }
        
        if (!test) {
            cout << 0 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }
    return 0;
}