#include "computer.h"

Computer::Computer()
{

}

Computer::Computer(string Name, int YearInvented, bool Built, string Type)
{
    name = Name;
    yearInvented = YearInvented;
    builtOrNot = Built;
    type = Type;
}

void Computer::operator =(const Computer& c)
{
    name = c.name;
    yearInvented = c.yearInvented;
    builtOrNot = c.builtOrNot;
}

string Computer::getName()
{
    return name;
}

int Computer::getYearInvented()
{
    return yearInvented;
}

bool Computer::getBuiltOrNot()
{
    return builtOrNot;
}

string Computer::getType()
{
    return type;
}