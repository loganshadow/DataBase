#ifndef DATABASE_FUNCTIONS_H
#define DATABASE_FUNCTIONS_H

#include "vector"
#include "iostream"
#include "classes.h"

int menuPage1();
void menuPage2(std::vector <employee> &employ);

void AddEmployee(std::vector <employee> &employ);
void SearchEmployee(std::vector <employee> &employ);
void DisplayAll(std::vector <employee> &employ);
void DisplayAllandInfo(std::vector <employee> &employ);
void DeleteEmployee(std::vector <employee> &employ);

#endif //DATABASE_FUNCTIONS_H
