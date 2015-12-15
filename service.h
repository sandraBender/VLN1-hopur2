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
    bool addScientist(QString name, QString yob, QString yod, QString gender);
    bool addComputer(QString name, QString buildYear, QString builtOrNot, QString type);
    bool connect();
    bool disconnect();
    vector<Computer> sortCom(char number);
    vector<Scientist> sortSci(char number);
    vector<Scientist> searchSci(string searchStr, char number);
    vector<Computer> searchCom(string searchStr, char number);
    vector<QString> getRelations(int number);
    void deleteData(char number, QString name); 
    void addLink(string scientist, string computer);
    void deleteLink(string scientist, string computer);

private:
    database data;
};

#endif // SERVICE_H
