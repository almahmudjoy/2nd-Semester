#include<iostream>
using namespace std;

class A
{
private:
    int val;
public:
        A()
        {
            val=0;
        }
        void setval(int v)
        {
            val=v;
        }
        bool operator ==(A obj)
        {
            if(val==obj.val)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
            void display(bool dis)
            {
                if(dis==true)
                {
                    cout<<"Values are equal\n";
                }
                else
                {
                    cout<<"Values are not equal\n";
                }
            }

};

class B: virtual public A
{

};
class C: virtual public A
{

};
class D: virtual public A
{

};
class E: public D, public C, public B
{

};
class F: public D
{

};
int main()
{
E ee1,ee2;
ee1.setval(30);
ee2.setval(30);
cout<<"Comparing Values using class E\n";
ee1.display(ee1==ee2);
F ff1,ff2;
ff1.setval(40);
ff2.setval(50);
cout<<"\nComparing values using class F\n";
ff1.display(ff1==ff2);
}
