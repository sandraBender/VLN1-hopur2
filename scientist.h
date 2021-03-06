#ifndef SCIENTIST
#define SCIENTIST
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Scientist {
public:
    Scientist();
    Scientist(string Name, int YearOfBirth, int YearOfDeath, string Gender);
    void operator =(const Scientist& t);
    string getName();
    string getGender();
    int getYob();
    int getYod();
    int getAge();
    int setAge(int yb, int yd);
private:
    string name;
    string gender;
    int yearOfBirth;
    int yearOfDeath;
    int age;
};


#endif // Scientist
