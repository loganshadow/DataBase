#include <iostream>
#include "fstream"
#include "string"
#include "vector"
#include "classes.h"
#include "functions.h"
#include <cstdlib>
using namespace std;

int main() {
    employee workerBuff;
    ifstream fin("DataBase.txt");
    vector <employee> employee;
    int s = 0;
    while(!fin.eof( )){
        fin >> workerBuff;
        employee.push_back(workerBuff);
        s++;
    }
    fin.close();
    auto p = employee.begin();
    p += s;
    employee.erase(p);
X1: int menu = menuPage1();
    if(menu == 1) {//OPTION ONE
        system("cls");
        AddEmployee(employee);
        system("pause");
        goto X1;
    }
    if(!employee.empty()){
        if(menu == 2){//OPTION TWO
            system("cls");
            DisplayAll(employee);
            menuPage2(employee);
            goto X1;
        }
        if(menu == 3){//OPTION THREE
            system("cls");
            DisplayAll(employee);
            DeleteEmployee(employee);
            system("pause");
            goto X1;
        }
        if(menu == 4){//OPTION FOUR

        }
        if(menu == 5){//OPTION FIVE
            system("cls");
            DisplayAllandInfo(employee);
            goto X1;
        }
    } else {
        system("cls");
        cout << "Base is empty! Add workers" << endl;
        cout << "---------------------------------------------------------------------" << endl;
        system("pause");
        goto X1;
    }

    ofstream fout("DataBase.txt");
    for (int i = 0; i < employee.size(); i++)
        fout << employee[i];
    fout.close();
    system("pause");
    return 0;
}