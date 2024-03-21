#include <iostream>
using namespace std;

class rectangle 
{
    private:
    int l,b, ans;
    public:

    rectangle (int x,int y)
    {
        l=x;
        b=y;
        
    }
    void out()
    {
        ans= l*b;
    }
    void display()
    {
        cout<<"\nArea Of Rectangle="<<ans;
    }
};  
main()
{
    rectangle r1(4,5);
    r1.out();
    r1.display();
    rectangle r2(5,8);
    r2.out();
    r2.display();
}

