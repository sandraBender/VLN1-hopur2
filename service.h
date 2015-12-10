#ifndef SERVICE_H
#define SERVICE_H
#include "scientist.h"
#include <iostream>
#include <vector>
#include "database.h"
#include <algorithm>
#include <string>
#include <sstream>
#include <ctype.h>
#include <cctype>
#include "computer.h"

class Service
{
public:
    Service();
    void addScientist(QString name, QString yob, QString yod, QString gender);
    void addComputer(QString name, QString buildYear, QString builtOrNot, QString type);
    vector<Computer> sortCom(char number);
    vector<Scientist> sortSci(char number);
    vector<Scientist> searchSci(string searchStr, char number);
    vector<Computer> searchCom(string searchStr, char number);
    void deleteData(char number, string name);
    bool connect();
    bool disconnect();
    void addDeleteLink(string scientist, string computer, char number);
    vector<string> getRelations();
private:
    database data;

};

#endif // SERVICE_H
