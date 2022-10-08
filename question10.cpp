#include <iostream>
using namespace std;


class Area
{
    int radius , length , width , side;
    float area;
    public:
    void set_for_circle(int r)
    {
        radius = r;
        
    }
    void set_for_rectangle(int l, int w)
    {
        length = l;
        width = w;
        
    }
    void set_for_square(int s)
    {
        side = s;
        
    }
    void calculateAreaOfCircle()
    {
        area = (3.14) * radius *radius;
        
    }
    void calculateAreaOfRectangle()
    {
        area = length * width;
        
    }
    void calculateAreaOfSquare()
    {
        area =side *side;
        
    }

    float getarea()
    {
        return area;
    }
 
};
int main()
{
    Area a1;
    a1.set_for_circle(3);
    a1.set_for_rectangle(5 , 10);
    a1.set_for_square(6);
    
    a1.calculateAreaOfCircle();
    cout<<"The area of circle is  "<<a1.getarea()<<endl;
    a1.calculateAreaOfRectangle();
    cout<<"The area of rectangle is  "<<a1.getarea()<<endl;
    a1.calculateAreaOfSquare();
    cout<<"The area of square is  "<<a1.getarea()<<endl;
    
   
    return 0;
}

