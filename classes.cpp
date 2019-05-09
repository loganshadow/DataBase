#include <iostream>
#include "classes.h"

using std::cout;
using std::cin;
using std::endl;

void employee::add_employee() {
    cout << "Enter data for new employee" << endl
    << "Name: ";
    cin >> name;
    cout << "Surname: " << endl;
    cin >> sname;
    cout << "Email: " << endl;
    cin >> email;
    cout << "Phone number: " << endl;
    cin >> phone;
    cout << "Passport data: " << endl;
    cin >> passport;
    cout << "Post: " << endl;
    cin >> post;
    system("cls");
    cout << "Employee successfully added!";
}

void employee::get_employee() {
    cout << name << endl << sname << endl << email << endl << phone << endl << passport << endl << post << endl;
}

void employee::set_employee(const employee &alt) {

}

employee::employee(const employee &alt): name(alt.name), sname(alt.sname), email(alt.email), phone(alt.phone), passport(alt.passport)  {}

