#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include <vector>
#include "scientist.h"
#include <fstream>
#include <cstdlib>
#include <QCoreApplication>
#include <QtSql>
#include "computer.h"



class database
{
public:
    database();
    bool getDatabase();
    vector<Scientist> createSciVec(QString command);
    vector<Computer> createCompVec(QString command);
    bool editData(QString name, QString yob, QString yod, QString gender);
    bool editDataComp(QString name, QString buildYear, QString builtOrNot, QString type);
    vector<Scientist> searchSci(string searchStr ,char number);
    vector<Computer> searchCom(string searchStr ,char number);
    void deleteSC(char number, QString name);
    bool closeDatabase();
    void addDeleteLink(string scientist, string computer, char number);
    void linkChoice();
    vector<string> getRelations();
    bool checkScientistOrComputerExistence(string searchString, bool sciOrCom);
private:
    QSqlQuery query;
};

#endif // DATABASE_H
