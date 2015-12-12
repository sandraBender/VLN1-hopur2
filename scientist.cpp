#include "Scientist.h"

Scientist::Scientist(string Name, int YearOfBirth, int YearOfDeath, string Gender)
{
    name = Name;
    gender = Gender;
    yearOfBirth = YearOfBirth;
    yearOfDeath = YearOfDeath;
}

Scientist::Scientist()
{
    name = "";
    gender = "";
    yearOfBirth = 0;
    yearOfDeath = 0;
}

string Scientist::getName()
{
    return name;
}

string Scientist::getGender()
{
    return gender;
}

int Scientist::getYob()
{
    return yearOfBirth;
}

int Scientist::getYod()
{
    return yearOfDeath;
}

void Scientist::operator=(const Scientist& s)
{
    name = s.name;
    yearOfBirth = s.yearOfBirth;
    yearOfDeath = s.yearOfDeath;
    gender = s.gender;
}
