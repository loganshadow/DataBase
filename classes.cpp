#include <iostream>
#include "classes.h"

using std::cout;
using std::cin;
using std::endl;

int employee::add_employee() {
    cout << "Enter data for new employee or type 0 to exit to main menu" << endl
    << "Name: " << endl;
    cin >> name;
    if(name == "0"){
        goto X1;
    }
    cout << "Surname: " << endl;
    cin >> sname;
    if(sname == "0"){
        goto X1;
    }
    cout << "Email: " << endl;
    cin >> email;
    if(email == "0"){
        goto X1;
    }
    cout << "Phone number: " << endl;
    cin >> phone;
    if(phone == "0"){
        goto X1;
    }
    cout << "Passport data: " << endl;
    cin >> passport;
    if(passport == "0"){
        goto X1;
    }
    cout << "Post: " << endl;
    cin >> post;
    if(post == "0"){
        goto X1;
    }
    system("cls");
    cout << "Employee successfully added!" << endl;
    return 1;
X1:
    return 0;
}

void employee::get_employee() {
    cout << "Name:          " << name << endl;
    cout << "Surname:       " << sname << endl;
    cout << "Email:         " << email << endl;
    cout << "Contact phone: " << phone << endl;
    cout << "Passport data: " << passport << endl;
    cout << "Post:          " <<post << endl;
}

employee::employee(const employee &alt): name(alt.name), sname(alt.sname), email(alt.email), phone(alt.phone), passport(alt.passport), post(alt.post)  {}

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
    getline(in, alt.name);
    getline(in, alt.sname);
    getline(in, alt.email);
    getline(in, alt.phone);
    getline(in, alt.passport);
    getline(in, alt.post);
    return in;
}
employee::employee(const std::string &name, const std::string &sname, const std::string &email, std::string phone, std::string passport,
                   const std::string &post) : name(name), sname(sname), email(email), phone(phone), passport(passport),
                                              post(post) {}

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

const std::string &employee::getPhone() const {
    return phone;
}

void employee::setPhone(const std::string &phone) {
    employee::phone = phone;
}

const std::string &employee::getPassport() const {
    return passport;
}

void employee::setPassport(const std::string &passport) {
    employee::passport = passport;
}

const std::string &employee::getPost() const {
    return post;
}

void employee::setPost(const std::string &post) {
    employee::post = post;
}
