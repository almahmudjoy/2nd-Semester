#include<iostream>
using namespace std;

class Distance
{
protected:
    int feet;
    float inches;
public:
    Distance()
    {
        feet=0;
        inches=0.0;
    }
    Distance (int a, float b)
    {
        feet=a;
        inches=b;
    }
    void getDist()
    {
         cout<<"Enter feet and inches : ";

        cin>>feet>>inches;
    }
    void showDist()
    {
        int c=inches/12;
        feet=feet+c;
        inches=inches-(c*12.0);
       cout<<feet<<" Feet "<<inches<<"Inches  "<<endl;
    }
     /*int operator +=(Distance a)
    {
        feet=feet+a.feet;
        inches=inches+a.inches;
    }*/
   Distance operator +=(Distance a)
    {
        Distance temp;
        temp.feet=feet+a.feet;
        temp.inches=inches+a.inches;
        return temp;
    }
};

int main()
{
    Distance d1, d2, d3(5,90.0), d4(2,11.0);
//d1.getDist();
//d2.getDist();
//d1+=d2;
//d1.showDist();
d3 = d3+=d4;
d3.showDist();
return 0;
}
