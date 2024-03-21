#include <iostream>
using namespace std;

class rectangle 
{
    private:
    int l,b, ans;
    public:

  
    void setdim()
    {
        cout<<"\nEnter the length=";
        cin>>l;
        cout<<"\nEnter the breath=";
        cin>>b; 
        
    }
    void getarea()
    {
        ans= l*b;
        cout<<"\nArea Of Rectangle="<<ans;
    }
};  
main()
{
    rectangle r1;
    r1.setdim();
    r1.getarea();
}
