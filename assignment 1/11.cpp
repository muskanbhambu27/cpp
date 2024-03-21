:#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
float salary;
int year;
char name[50];
string address;
public:
   void set(char name1[], float salary1, int year, char address1[])
    {
        strcpy(name,name1);
        salary=salary1;
        year=year;
        address=address1;


    }
    void get()
    {
        cout<<"\nName: "<<name<<"\nSalary: "<<salary<<"\nDate of joining: "<<year<<"\nAddress: "<<address;
    }
};
main()
{
    Employee e1;
    e1.set("Robert",15000, 1994,"64C-WallsStreat");
    Employee e2;
    e2.set("Sam", 13000 , 2000, "68D-WallsStreat");
    Employee e3;
    e3.set("John",14000, 1999,"26B-WallsStreat"); 

    e1.get();
    e2.get();
    e3.get();
}
