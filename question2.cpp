#include <iostream>
using namespace std;


class  Time
{
    int hr, min , sec;
    public:
    void setData(int h , int m , int s)
    {
        hr = h;
        min = m;
        sec = s;
        
    }
    void display()
    {
        cout<<hr<<" hour "<<min<<" min "<<sec<<" sec"<<endl;
        
    }
    
};
int main()
{
    Time t1;
    t1.setData(3 , 45 , 20);
    t1.display();
    
    

    return 0;
}
