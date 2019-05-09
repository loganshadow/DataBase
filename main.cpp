#include <iostream>
#include "fstream"
#include "string"
#include "vector"
#include "classes.h"

using namespace std;

int main() {

    string buff;
    employee wbuff;
    ofstream fout("DataBase.txt");
    ifstream fin("DataBase.txt");
    vector <employee> employee;

    getline(fin, buff);
    wbuff.name = buff;
    getline(fin, buff);
    wbuff.sname = buff;
    getline(fin, buff);
    wbuff.email = buff;
    getline(fin, buff);
    wbuff.phone = stoi(buff);
    getline(fin, buff);
    wbuff.passport = stoi(buff);
    getline(fin, buff);
    wbuff.post = buff;
    employee.push_back(wbuff);
    return 0;
}