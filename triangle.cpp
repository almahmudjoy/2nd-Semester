#include<iostream>
using namespace std;

class triangle
{
private:
    double B;
    double H;


public:
    triangle()
    {
       cout<<"default constructor invoked"<<endl;
       B=8.7;
       H=11.3;

   }
    triangle (double x, double y)
    {
        cout<<"Constructor (double,double) invoked"<<endl;
        B=x;
        H=y;

    }
    triangle (double a, int b)
    {
        cout<<"Constructor (double,int) invoked"<<endl;
        B=a;
        H=b;

    }
    triangle( int c, double d)
    {
        cout<<"Constructor (int,double) invoked"<<endl;
        B=c;
        H=d;

    }
    triangle(int i, int j)
    {
        cout<<"Constructor (int,int) invoked"<<endl;
        B=i;
        H=j;
     cout<<endl;
    }
    triangle(const triangle&p, triangle&q)
    {
        B=p.B;
        H=q.H;

    }
    ~triangle()
          {
              cout<<"\n Destructor executed";
          }

    void display()
    {
        double area=(1/2 * B *H);
        cout<<"Area of Triangle = "<<area;
    }
};

int main()
{
    triangle t1,t2(8.7,11.3), t3(8.7,11), t4(8,11.3), t5(8,11), t6(t1);

     t1.display();
    cout<<endl;

    t2.display();
    cout<<endl;

    t3.display();
    cout<<endl;

    t4.display();
    cout<<endl;

     t5.display();
    cout<<endl;

      t6.display();
    cout<<endl;
}
