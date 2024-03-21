 #include<iostream>
using namespace std;
class Employee
{
private:
	int doj;
	char name[50];
	float sal;

public:	

	void set_Employee()
	{
		cout<<"\nEnter Date of joining name & salary";
		cin>>doj>>name>>sal;
		
	}
	
	void get_Employee()	{
		cout<<"\n"<<doj      <<"\t             "<<name        <<"\t         "<<sal;

                   }
	
};
main()
{
	Employee obj[10];
	int i;
	cout<<"\nEnter 10 Employee details";
	for(i=0;i<10;i++)
	{
	obj[i].set_Employee();
	}
	cout<<"\nEmployee Details";
	cout<<"\nDate of joining    name        salary";
	cout<<"\n---------------------------------------------------";
	for(i=0;i<10;i++)
	{
		
	    obj[i].get_Employee();
	}
	
}

