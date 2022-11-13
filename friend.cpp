#include<iostream>
using namespace std;

class beta;
class alpha
{
private:
    int data;
public:
        alpha()
        {
            data=8;
        }
        friend int mul(alpha a, beta b);
};
class beta
{
private:
    int data;
public:
    beta()
    {
        data=3;
    }
    friend int mul(alpha a, beta b);
};
int mul(alpha a, beta b)
{
    return a.data*b.data;
}
int main()
{
    alpha aa;
    beta bb;
    cout<<mul(aa,bb)<<endl;
}
