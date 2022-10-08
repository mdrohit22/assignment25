#include <iostream>
using namespace std;


class  Greatest 
{
    int a , b, c, grt;
    public:
    void setData(int a1 , int b1 , int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    int find_large()
    {
        
        if(a>b)
        {
            if(a>c)
            grt = a;
            else
            grt = c;
        }
        else
        {
            if(b>c)
            grt = b;
            else
            grt = c;
        }
        return grt;
        
        
    }
    
 
    
    
    
    
};
int main()
{
    Greatest g1;
    g1.setData(10 , 9, 5);
    cout<<"The large number is "<<g1.find_large()<<endl;
    
    return 0;
}
