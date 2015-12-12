#include "database.h"

database::database()
{

}

//This function accesses the database
bool database::getDatabase()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Database.sqlite";
        db.setDatabaseName(dbName);

        cout << "DB opening cerimony commencing! " << endl;
        //To confirm when DB opening happens.

    return db.open();
}

//Function to populate a vector of Scientists
vector<Scientist> database::createSciVec(QString command)
{
    vector<Scientist> vec;
    QSqlQueryModel model;
    model.setQuery(command);

    for (int i = 0; i < model.rowCount(); ++i) {
         string name = model.record(i).value("Name").toString().toUtf8().constData();
         int yob = model.record(i).value("YearOfBirth").toInt();
         int yod = model.record(i).value("YearOfDeath").toInt();
         string gender = model.record(i).value("Gender").toString().toUtf8().constData();
         Scientist temp(name, yob, yod, gender);
         vec.push_back(temp);
    }
    return vec;
}

//Function to populate a vector of Computers
vector<Computer> database::createCompVec(QString command)
{
    vector<Computer> vec;
    QSqlQueryModel model;
    model.setQuery(command);

    for (int i = 0; i < model.rowCount(); ++i) {
         string name = model.record(i).value("Name").toString().toUtf8().constData();
         int yearBuilt = model.record(i).value("BuildYear").toInt();
         bool built  = model.record(i).value("BuiltOrNot").toBool();
         string type = model.record(i).value("Type").toString().toUtf8().constData();
         Computer temp(name, yearBuilt, built, type);
         vec.push_back(temp);
    }
    return vec;
}

//Function to add entries to Scientists table
bool database::editData(QString name, QString yob, QString yod, QString gender)
{
    string inputName = name.toUtf8().constData();
    bool scientistAlreadyExists = checkScientistOrComputerExistence(inputName, false);

    if (scientistAlreadyExists == false)
    {
        QString command = "INSERT INTO Scientists (Name, YearOfBirth, YearOfDeath, Gender) VALUES ('" + name + "'," + yob + "," + yod + ",'" + gender + "')";
        query.exec(command);
        return true;
    }
    else
    {
        return false;
    }
}

//Function to add entries to Computers table
bool database::editDataComp(QString name, QString buildYear, QString builtOrNot, QString type)
{
    string inputName = name.toUtf8().constData();
    bool computerAlreadyExists = checkScientistOrComputerExistence(inputName, true);

    if (computerAlreadyExists == false)
    {
        QString command = "INSERT INTO Computers (Name, BuildYear, builtOrNot, Type) VALUES ('" + name + "', " + buildYear + ", " + builtOrNot + ",'" + type + "')";
        query.exec(command);
        return true;
    }
    else
    {
        return false;
    }
}

//Function to Scientists
vector<Scientist> database::sortSci(char number)
{
    QString command;
    vector<Scientist> vec;
    switch (number) {
    case '1':
        command = "SELECT * FROM Scientists ORDER BY name";
        vec = createSciVec(command);
        break;
    case '2':
        command = "SELECT * FROM Scientists ORDER BY name DESC";
        vec = createSciVec(command);
        break;
    case '3':
        command = "SELECT * FROM Scientists ORDER BY YearOfBirth ASC, name";
        vec = createSciVec(command);
        break;
    case '4':
        command = "SELECT * FROM Scientists ORDER BY YearOfBirth DESC, name";
        vec = createSciVec(command);
        break;
    case '5':
        command = "SELECT * FROM Scientists ORDER BY gender, name";
        vec = createSciVec(command);
        break;
    default:
        cout << "Nothing happend!! " << endl;
        break;
    }
    return vec;
}

vector<Computer> database::sortCom(char number)
{
    QString command;
    vector<Computer> vec;
    switch (number) {
    case '1':
        command = "SELECT * FROM Computers ORDER BY name ASC";
        vec = createCompVec(command);
        break;
    case '2':
        command = command = "SELECT * FROM Computers ORDER BY name DESC";;
        vec = createCompVec(command);
        break;
    case '3':
        command = command = "SELECT * FROM Computers ORDER BY BuildYear ASC, name";
        vec = createCompVec(command);
        break;
    case '4':
        command = "SELECT * FROM Computers ORDER BY BuildYear DESC, name";
        vec = createCompVec(command);
        break;
    default:
        cout << "Nothing happend!! " << endl;
        break;
    }
    return vec;
}

//Function to sort Scientists
vector<Scientist> database::searchSci(string searchStr ,char number)
{
    QString command;
    vector<Scientist> vec;
    switch (number) {
    case '1':{
        string temp = "SELECT * FROM Scientists WHERE name LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        vec = createSciVec(command);}
        break;
    case '2':{
        string temp = "SELECT * FROM Scientists WHERE YearOfBirth LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        vec = createSciVec(command);}
        break;
    case '3':{
        string temp = "SELECT * FROM Scientists WHERE gender LIKE " + searchStr;
        command = QString::fromStdString(temp);
        vec = createSciVec(command);
        break;}
    default:
        cout << "Nothing happend!! " << endl;
        break;
    }
    return vec;
}

//Function to searc for Computers
vector<Computer> database::searchCom(string searchStr ,char number)
{
    vector<Computer> vec;
    QString command;
    switch (number) {
    case '1':{
        string temp = "SELECT * FROM Computers WHERE name LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        vec = createCompVec(command);}
        break;
    case '2':{
        string temp = "SELECT * FROM Computers WHERE buildYear LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        vec = createCompVec(command);}
        break;
    case '3':{
        string temp = "SELECT * FROM Computers WHERE type LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        vec = createCompVec(command);
        break;}
    default:
        cout << "Nothing happend!! " << endl;
        break;
    }
    return vec;
}

//Function to delete from Scientists
void database::deleteSC(char number, QString name)
{
    QString command;
    if (number == '1'){
        command = "DELETE FROM Scientists WHERE Name = '" + name + "'";
        query.exec(command);
    }
    else    if (number == '2'){
        command = "DELETE FROM Computers WHERE Name = '" + name + "'";
        query.exec(command);
    }
}

//Function to close the database
bool database::closeDatabase()
{
    QSqlDatabase db;
    db.close();
    return db.open();
}

//Function to add and remove relationship between Scientist and Computer
void database::addDeleteLink(string scientist, string computer, char number) //Add = 0, delete = 1
{
    query.prepare("SELECT ID FROM Scientists WHERE name LIKE '%' ||:scientist|| '%'");
    query.bindValue(":scientist", QString::fromStdString(scientist));
    query.exec();
    query.next();
    string scientistID = query.value("ID").toString().toStdString();

    query.prepare("SELECT ID FROM Computers WHERE name LIKE '%' ||:computer|| '%'");
    query.bindValue(":computer", QString::fromStdString(computer));
    query.exec();
    query.next();
    string computerID = query.value("ID").toString().toStdString();

    if (number == '1')
    {
        query.prepare("INSERT INTO SciCompLink (ScientistID, ComputerID) VALUES (:scientistID , :computerID);");
    }
    else if (number == '2')
    {
        query.prepare("DELETE FROM SciCompLink WHERE ScientistID = :scientistID AND ComputerID = :computerID;");
    }
    query.bindValue(":scientistID" , QString::fromStdString(scientistID));
    query.bindValue(":computerID", QString::fromStdString(computerID));
    query.exec();
    query.next();
    //return true;
}

//Function to link Scientists and Computers
vector<string> database::getRelations()
{
    vector<string> vec;
    QSqlQueryModel model;
    model.setQuery("SELECT S.Name FROM SciCompLink SCL JOIN Scientists S on S.id = SCL.ScientistID");
    QSqlQueryModel model2;
    model2.setQuery("SELECT C.Name FROM SciCompLink SCL JOIN Computers C on C.ID = SCL.ComputerID");
    for (int i = 0; i < model.rowCount(); ++i)
    {
         string nameSci = model.record(i).value("Name").toString().toUtf8().constData();
         string nameComp = model2.record(i).value("Name").toString().toUtf8().constData();
         string temp = nameSci + "\t \t links to \t \t " + nameComp;
         vec.push_back(temp);
    }

    return vec;
}

bool database::checkScientistOrComputerExistence(string searchString, bool sciOrComp)
{
    if (sciOrComp == false) //searchString = Scientist
    {
        query.prepare("SELECT * FROM Scientists WHERE Name = :name");
        query.bindValue(":name", QString::fromStdString(searchString));
    }
    else //searchString = Computer
    {
        query.prepare("SELECT * FROM Computers WHERE Name = :name");
        query.bindValue(":name", QString::fromStdString(searchString));
    }

    query.exec();

    if (!query.next())
    {
        return false;
    }
    else
    {
        return true;
    }
}