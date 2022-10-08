#include <iostream>
using namespace std;


class  Factorial
{
    public:
    
    int fac(int x)
    {
        int f = 1;
        if(x==0 || x==1)
        return 1;
        else
        
            while(x)
            {
                f = f * x;
                x--;
                
            }
        return f;
        
        
        
    }
    
    
};
int main()
{
    Factorial f1;
    int ans;
    
    ans = f1.fac(1);
    cout<<ans<<endl;
    return 0;
}
