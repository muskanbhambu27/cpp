#include <iostream>
#include <math.h>
using namespace std;

class Triangle 
{
    private:
        int a1, a2, a3;
    public:
        float s,ans1;
        int peri;
    
    Triangle(int s1, int s2, int s3) 
    {
        a1=s1;
        a2=s2;
        a3=s3;
    }
    
    int perimeter()
    {
        peri= a1 + a2 + a3;
        return(peri);
           
    }
    
    float area() 
    {
        s = perimeter() / 2.0;
        ans1=sqrt(s * (s - a1) * (s - a2) * (s - a3));
        return (ans1);
    }

    void printDetails()
    {
        // cout<<"\narea"<<s;
        // cout<<"\n perimeter="<<ans;
        // cout<<"\n Area="<<ans1;
        cout << "\nArea of the triangle: " <<ans1;
        cout << "\nPerimeter of the triangle: " <<peri;
    }
};

int main()
{
    Triangle t1(3, 4, 5);
    t1.area();
    t1.perimeter();
    t1.printDetails();
}

