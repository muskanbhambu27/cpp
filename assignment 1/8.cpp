#include<iostream>
using namespace std;

class Average
{
    private:
    float a,b,c,avg;
    public:    
    void Ave()
    {
        
        cout<<"\n Enter three values=";
        cin>>a>>b>>c;
    }
    void get()
    {
  
        avg=(a+b+c)/3.0;
        cout<<"\n average og three numbers="<<avg;    
        
    }
    
};
class avew :public Average
{
        
};

main()
{
    avew obi;
    obi.Ave();
    obi.get();
   
}

