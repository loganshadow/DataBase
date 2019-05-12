#include <fstream>
#include "functions.h"
#include "classes.h"

using std::cout;
using std::cin;
using std::endl;

int menuPage1(){
    int i = -1;
    system("cls");
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Welcome to the main menu!\n" << endl;
    cout << "Choose an option:" << endl;
    cout << "1)Add employee" << endl;
    cout << "2)Edit information about employee" << endl;
    cout << "3)Delete information from the base" << endl;
    cout << "4)Search for employee" << endl;
    cout << "5)Display all emloyees" << endl;
    cout << "0)Exit" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    while(i < 0 || i > 5){
        cin >> i;
        if (i < 0 || i > 5)
            cout << "Try again" << endl;
    }
    return i;
}
void menuPage2(std::vector <employee> &employ){
    int i, j = 0;
    std::string temp;
    cout << "Enter number of employee" << endl;
    cin >> j;
    j--;
    system("cls");
M1: i = -1;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Choose an option:\n" << endl;
    cout << "1)Change name" << endl;
    cout << "2)Change surname" << endl;
    cout << "3)Change email" << endl;
    cout << "4)Change phone" << endl;
    cout << "5)Change passport" << endl;
    cout << "6)Change post" << endl;
    cout << "0)Back to main menu" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    while(i < 0 || i > 6){
        cin >> i;
        if (i < 0 || i > 6)
            cout << "Try again" << endl;
    }
    switch (i) {
        case 1: {
            system("cls");
            cout << "Enter new name" << endl;
            cin >> temp;
            employ[j].setName(temp);
            goto M1;
        }
        case 2: {
            system("cls");
            cout << "Enter new surname" << endl;
            cin >> temp;
            employ[j].setSname(temp);
            cout << "Name has been changed!" << endl;
            goto M1;
        }
        case 3: {
            system("cls");
            cout << "Enter new email" << endl;
            cin >> temp;
            employ[j].setEmail(temp);
            cout << "Surname has been changed!" << endl;
            goto M1;
        }
        case 4: {
            system("cls");
            cout << "Enter new phone" << endl;
            cin >> temp;
            employ[j].setPhone(temp);
            cout << "Phone has been changed!" << endl;
            goto M1;
        }
        case 5: {
            system("cls");
            cout << "Enter new passport" << endl;
            cin >> temp;
            employ[j].setPassport(temp);
            cout << "Passport has been changed!" << endl;
            goto M1;
        }
        case 6: {
            system("cls");
            cout << "Enter new post" << endl;
            cin >> temp;
            employ[j].setPost(temp);
            cout << "Post has been changed!" << endl;
            goto M1;
        }
    }

}

void AddEmployee(std::vector <employee> &employ){
    employee temp;
    temp.add_employee();
    employ.push_back(temp);
}

void DisplayAllandInfo(std::vector <employee> &employ){
    cout << "---------------------------------------------------------------------" << endl;
     for(int i = 0; i < employ.size(); i++){
         cout << i + 1 << ")" << employ[i].getName() << " " << employ[i].getSname() << endl;
     }
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Enter number of employee to see more info" << endl;
    cout << "Type 0 to exit to main menu" << endl;
     int j = -1;
    while(j < 0 || j > employ.size()){
        cin >> j;
        if (j < 0 || j > employ.size())
            cout << "Try again" << endl;
    }
    if(j != 0) {
        j--;
        employ[j].get_employee();
        cout << "---------------------------------------------------------------------" << endl;
        system("pause");
    }
}

void DisplayAll(std::vector <employee> &employ) {
    cout << "---------------------------------------------------------------------" << endl;
    for (int i = 0; i < employ.size(); i++) {
        cout << i + 1 << ")" << employ[i].getName() << " " << employ[i].getSname() << endl;
    }
    cout << "---------------------------------------------------------------------" << endl;
}

void DeleteEmployee(std::vector <employee> &employ){
     cout << "Enter number of employee for eraising from the base" << endl;
     int i = -1;
     char c;
    while(i < 0 || i > employ.size()){
        cin >> i;
        if (i < 0 || i > employ.size())
            cout << "Try again" << endl;
    }
     i--;
     cout << "Do you really want to delete this employee from the base?[y/n]" << endl;
     cin >> c;
     if(c == 'y' || c == '1') {
         auto p = employ.begin();
         p += i;
         employ.erase(p);
         cout << "Erasing successful" << endl;
     }
}
