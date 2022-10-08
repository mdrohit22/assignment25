#include <iostream>
using namespace std;


class ReverseNumber 
{
    int num , rev;
    public:
    void setData(int n)
    {
        num = n;
    }
    void reverse()
    {
        int i=0;
        while(num)  //5      385
        {
            i = i*10 +(num%10);
            num = num/10;
            
            
        }
        rev = i;
        
    }
    
    
    int get_reversed_number()
    {
        return rev;
    }
    
    
    
};
int main()
{
    ReverseNumber r1;
    r1.setData(5863);  
    r1.reverse();
    cout<<"After reverse the number is "<<r1.get_reversed_number()<<endl;
   
    return 0;
}
