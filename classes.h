#ifndef DATABASE_CLASSES_H
#define DATABASE_CLASSES_H

#include "string"
class employee {
public:
    std::string name;
    std::string sname;
    std::string email;
    int phone;
    std::string passport;
    std::string post;

    employee();
    employee(const employee &alt);
    void add_employee();

    void set_employee(const employee &alt);
};
#endif //DATABASE_CLASSES_H
