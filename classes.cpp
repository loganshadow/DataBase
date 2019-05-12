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
employee::employee(const employee &alt): name(alt.name), sname(alt.sname), email(alt.email), phone(alt.phone), passport(alt.passport)  {}

std::ostream& operator<<(std::ostream &out, const employee &alt)
{
    out << alt.name << endl;
    out << alt.sname << endl;
    out << alt.email << endl;
    out << alt.phone << endl;
    out << alt.passport << endl;
    out << alt.post << endl;
    return out;
}

std::istream& operator>>(std::istream& in, employee &alt)
{
    std::string buff;
    getline(in, alt.name);
    getline(in, alt.sname);
    getline(in, alt.email);
    getline(in, buff);
    alt.phone = stoi(buff);
    getline(in, buff);
    alt.passport = stoi(buff);
    return in;
}

const std::string &employee::getName() const {
    return name;
}

void employee::setName(const std::string &name) {
    employee::name = name;
}

const std::string &employee::getSname() const {
    return sname;
}

void employee::setSname(const std::string &sname) {
    employee::sname = sname;
}

const std::string &employee::getEmail() const {
    return email;
}

void employee::setEmail(const std::string &email) {
    employee::email = email;
}

int employee::getPhone() const {
    return phone;
}

void employee::setPhone(int phone) {
    employee::phone = phone;
}

int employee::getPassport() const {
    return passport;
}

void employee::setPassport(int passport) {
    employee::passport = passport;
}

const std::string &employee::getPost() const {
    return post;
}

void employee::setPost(const std::string &post) {
    employee::post = post;
}

employee::employee(const std::string &name, const std::string &sname, const std::string &email, int phone, int passport,
                   const std::string &post) : name(name), sname(sname), email(email), phone(phone), passport(passport),
                                              post(post) {}
