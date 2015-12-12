#include "service.h"

Service::Service()
{

}
//adds scientists to the list
bool Service::addScientist(QString name, QString yob, QString yod, QString gender)
{
     return data.editData(name, yob, yod, gender);
}
bool Service::addComputer(QString name, QString buildYear, QString builtOrNot, QString type)
{
    return data.editDataComp(name, buildYear, builtOrNot, type);
}

// sorts the list
vector<Computer> Service::sortCom(char number)
{
    vector<Computer> vec = data.sortCom(number);
    return vec;
}

vector<Scientist> Service::sortSci(char number)
{
    vector<Scientist> vec = data.sortSci(number);
    return vec;
}
vector<Computer> Service::searchCom(string searchStr ,char number){

    vector<Computer> vec = data.searchCom(searchStr, number);
    return vec;
}
vector<Scientist> Service::searchSci(string searchStr ,char number){

    vector<Scientist> vec = data.searchSci(searchStr, number);
    return vec;
}

// delete scientist from the list
void Service::deleteData(char number, QString name)
{

    data.deleteSC(number, name);
}

bool Service::connect()
{

    return data.getDatabase();


}
bool Service::disconnect()
{

    return data.closeDatabase();
}

void Service::addDeleteLink(string scientist, string computer, char number)
{
    database db;
    if(number == '1')
    {
        db.addDeleteLink(scientist, computer, number);
    }
     else if(number == '2')
    {
        db.addDeleteLink(scientist, computer, number);
    }
}

vector<string> Service::getRelations()
{

    vector<string> vec;
    vec = data.getRelations();
    return vec;

}
