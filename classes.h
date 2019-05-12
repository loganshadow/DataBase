#ifndef DATABASE_CLASSES_H
#define DATABASE_CLASSES_H

#include "string"
class employee {

    std::string name;
    std::string sname;
    std::string email;
    std::string phone;
    std::string passport;
    std::string post;
public:
    employee() {};

    employee(const std::string &name, const std::string &sname, const std::string &email, std::string phone, std::string passport,
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

    const std::string &getPhone() const;
    void setPhone(const std::string &phone);

    const std::string &getPassport() const;
    void setPassport(const std::string &passport);

    const std::string &getPost() const;
    void setPost(const std::string &post);
    //getter/setter end

    ~employee(){}

};
#endif //DATABASE_CLASSES_H
