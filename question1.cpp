#include <iostream>
using namespace std;


class  Complex 
{
    int real , imaginary;
    public:
    void setData(int r , int img)
    {
        real = r;
        imaginary = img;
        
    }
    void getData()
    {
        cout<<"real "<<real<<" imaginary "<<imaginary<<endl;
    }
    
};
int main()
{
    Complex c1;
    c1.setData(3 , 4);
    c1.getData();
    
    

    return 0;
}
