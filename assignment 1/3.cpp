#include <iostream>
#include <math.h>
using namespace std;

class Triangle 
{
    private:
        int a1=3, a2=4, a3=5;
    public:
        float s,ans1;
        int ans;
    
   
    int perimeter()
    {
        ans= a1 + a2 + a3;
        return ans;
    
    }
    
    float area() 
    {
        s = perimeter() / 2.0;
        ans1=sqrt(s * (s - a1) * (s - a2) * (s - a3));
    }

    void printDetails()
    {
        cout << "\nArea of the triangle: " <<ans1;
        cout << "\nPerimeter of the triangle: " <<ans;
    }
};

int main()
{
    Triangle t1;
    t1.area();
    t1.perimeter();
    t1.printDetails();
}

