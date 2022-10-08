#include <iostream>
using namespace std;


class Rectangle
{
    int length , width , area;
    public:
    void setData(int l , int w)
    {
        length = l;
        width = w;
        
    }
    void calculateArea()
    {
        area = length * width;
        
    }

    int getarea()
    {
        return area;
    }
 
};
int main()
{
    Rectangle r;
    r.setData(3 , 4);
    r.calculateArea();
    cout<<"The area of rectangle is  "<<r.getarea()<<endl;
    
   
    return 0;
}
