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
    

    return 0;
}