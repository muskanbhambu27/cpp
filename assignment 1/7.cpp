#include <iostream>
using namespace std;

class Area 
{
    private:
    int l,b, ans;
    public:

   int area()
    {
        cout<<"\n Enter the length of rectangle=";
        cin>>l;
        cout<<"\n Enter the breath of rectangle=";
        cin>>b;
        return(0);
    }

    void returnArea()
    {
        ans=l*b;
        cout<<"\nArea of the Rectangle="<<ans;
    }
};    
main()
{
    Area a1;
    a1.area();
    a1.returnArea();
}

