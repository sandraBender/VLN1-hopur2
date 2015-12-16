#include "Scientist.h"

Scientist::Scientist(string Name, int YearOfBirth, int YearOfDeath, string Gender)
{
    name = Name;
    gender = Gender;
    yearOfBirth = YearOfBirth;
    yearOfDeath = YearOfDeath;
    age = setAge(yearOfBirth, yearOfDeath);
}

Scientist::Scientist()
{
    name = "";
    gender = "";
    yearOfBirth = 0;
    yearOfDeath = 0;
    age = 0;
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

int Scientist::getAge()
{
    return age;
}

int Scientist::setAge(int yb, int yd)
{
    if (yd == 0)
    {
        time_t Time = time(NULL);
        struct tm *theTime = localtime(&Time);
        yd = theTime->tm_year + 1900;
    }

    return (yd - yb);
}

void Scientist::operator=(const Scientist& s)
{
    name = s.name;
    yearOfBirth = s.yearOfBirth;
    yearOfDeath = s.yearOfDeath;
    gender = s.gender;
    age = s.age;
}
