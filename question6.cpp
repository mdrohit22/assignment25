#include <iostream>
using namespace std;


class Square
{
    int num , sq;
    public:
    void setData(int n)
    {
        num = n;
        
    }
    void calculateSquare()
    {
        sq = num * num;
    }
    int get_Square()
    {
        return sq;
    }
    int getData()
    {
        return num;
    }
 
};
int main()
{
    Square s;
    s.setData(4);
    s.calculateSquare();
    cout<<"The square of "<<s.getData()<<" is"<<s.get_Square()<<endl;
    
   
    return 0;
}
