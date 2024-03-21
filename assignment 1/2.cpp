#include <iostream>
using namespace std;

class Student 
{
private:
    string name;
    string roll_no;
    string phone_no;
    string address;
public:    

       Student(string n, string roll, string phone, string addr) 
       {
        name = n;
        roll_no = roll;
        phone_no = phone;
        address = addr;
    }

     void get() 
     {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll_no;
        cout << "\nPhone Number: " << phone_no;
        cout << "\nAddress: " << address;
    }
};

int main() 
{
    Student sam("Sam", "S001", "1234567890", "123 Main St, City");
    Student john("John", "J001", "0987654321", "456 Elm St, Town");

    cout << "\nDetails for Sam:";
    sam.get();
    cout <<"\n";

    cout << "\nDetails for John:";
    john.get();
    
    return 0;
}
 
