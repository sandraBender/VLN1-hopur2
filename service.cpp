#include "service.h"

Service::Service()
{

}
//adds scientists to the list
bool Service::addScientist(QString name, QString yob, QString yod, QString gender)
{
    string nameStr = name.toUtf8().constData();

    for(unsigned int i = 0; i < nameStr.length(); i++)
    {
        if(islower(nameStr[0]))
        {
            nameStr[0] = toupper(nameStr[0]);
        }
        else if(nameStr[i] == ' ')
        {
            if (islower(nameStr[i + 1]))
            {
                nameStr[i + 1] = toupper(nameStr[i + 1]);
            }
        }
    }

    QString completeName = QString::fromLocal8Bit(nameStr.c_str());

    return data.editData(completeName, yob, yod, gender);
}

bool Service::addComputer(QString name, QString buildYear, QString builtOrNot, QString type)
{
    return data.editDataComp(name, buildYear, builtOrNot, type);
}

vector<Computer> Service::searchCom(string searchStr ,char number)
{
    vector<Computer> vec = data.searchCom(searchStr, number);
    return vec;
}

vector<Scientist> Service::searchSci(string searchStr ,char number)
{
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

void Service::addLink(string scientist, string computer)
{
    char addchar = '1';
    data.addDeleteLink(scientist, computer, addchar);
}

void Service::deleteLink(string scientist, string computer)
{
    char deletechar = '2';
    data.addDeleteLink(scientist, computer, deletechar);
}

vector<QString> Service::getRelations(int number)
{
    return data.getRelations(number);
}
