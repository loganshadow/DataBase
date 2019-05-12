#ifndef DATABASE_CLASSES_H
#define DATABASE_CLASSES_H

#include "string"
class employee {

    std::string name;
    std::string sname;
    std::string email;
    int phone;
    int passport;
    std::string post;
public:
    employee(/*std::string name = "Null", std::string sname = "Null", std::string email = "Null", int phone = 0, int passport = 0,std::string post = "Null"*/);

    employee(const std::string &name, const std::string &sname, const std::string &email, int phone, int passport,
             const std::string &post);

    employee(const employee &alt);
    void add_employee();
    void get_employee();
    friend std::ostream& operator<<(std::ostream& out, const employee &alt);
    friend std::istream& operator>>(std::istream& out, employee &alt);

    //getter/setter start
    const std::string &getName() const;
    void setName(const std::string &name);
    const std::string &getSname() const;
    void setSname(const std::string &sname);
    const std::string &getEmail() const;
    void setEmail(const std::string &email);
    int getPhone() const;
    void setPhone(int phone);
    int getPassport() const;
    void setPassport(int passport);
    const std::string &getPost() const;
    //getter/setter end

    void setPost(const std::string &post);
    void set_employee(const employee &alt);
    ~employee(){}

};
#endif //DATABASE_CLASSES_H
