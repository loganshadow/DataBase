#include <iostream>
#include "fstream"
#include "string"
#include "vector"
#include "classes.h"

using namespace std;

int main() {

    string buff;
    employee workerBuff;
    ofstream fout("DataBase.txt");
    fout.close();
    ifstream fin("DataBase.txt");
    vector <employee> employee;

    while(!fin.eof( )){
        fin >> workerBuff;
        employee.push_back(workerBuff);
    }
    fin.close();

/*
    getline(fin, buff);
    workerBuff.name = buff;
    getline(fin, buff);
    workerBuff.sname = buff;
    getline(fin, buff);
    workerBuff.email = buff;
    getline(fin, buff);
    workerBuff.phone = stoi(buff);
    getline(fin, buff);
    workerBuff.passport = stoi(buff);
    getline(fin, buff);
    workerBuff.post = buff;
    employee.push_back(workerBuff);
*/
    return 0;
}