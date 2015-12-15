#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>

using namespace std;

class Computer
{
public:
    Computer();
    Computer(string Name, int yearInvented, bool Built, string Type);
    void operator =(const Computer& t);
    string getName();
    string getType();
    int getYearInvented();
    bool getBuiltOrNot();

private:
    string name;
    int yearInvented;
    bool builtOrNot;
    string type;
};


#endif // Computer
