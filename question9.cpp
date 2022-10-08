#include <iostream>
using namespace std;


class Circle
{
    int radius;
    float area;
    public:
    void setData(int r)
    {
        radius = r;
        
    }
    void calculateArea()
    {
        area = (3.14) * radius *radius;
        
    }

    int getarea()
    {
        return area;
    }
 
};
int main()
{
    Circle c;
    c.setData(3);
    c.calculateArea();
    cout<<"The area of rectangle is  "<<c.getarea()<<endl;
    
   
    return 0;
}

