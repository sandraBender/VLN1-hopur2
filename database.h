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
    void editData(QString name, QString yob, QString yod, QString gender);
    void editDataComp(QString name, QString buildYear, QString builtOrNot, QString type);
    vector<Scientist> sortSci(char number);
    vector<Computer> sortCom(char number);
    vector<Scientist> searchSci(string searchStr ,char number);
    vector<Computer> searchCom(string searchStr ,char number);
    void deleteSC(char number, string name);
    bool closeDatabase();
    void addDeleteLink(string scientist, string computer, char number);
    void linkChoice();
    vector<string> getRelations();
private:
    QSqlQuery query;
};

#endif // DATABASE_H
