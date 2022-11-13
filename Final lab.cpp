#include<bits/stdc++.h>

using namespace std;

class Item{
    int value;
public:
    void setdata(int v){
        value = v;
    }
    int getdata(){
        return value;
    }

    bool operator >(Item obj){
        return (value > obj.value);
    }

    bool operator ==(Item obj){
        return (value == obj.value);
    }

    bool operator <(Item obj){
        return (value < obj.value);
    }
};

Item object[10];

Item maximum(){
    Item temp = object[0];
    for(int i = 1; i < 10; i++){
        if(object[i] > temp){
            temp = object[i];
        }
    }
    return temp;
}


int main(){

    cout << "The array of objects: ";
    for(int i = 0; i < 10; i++){
        int x;
        cin >> x;
        object[i].setdata(x);
    }

    Item greatest = maximum();

    cout << "Greatest object: " << greatest.getdata() << endl;

    Item v;
    int x;
    cout << "Input object: ";
    cin >> x;
    v.setdata(x);

    if(v == greatest)cout << "Input Object is equal to greatest object\n";
    else if(v < greatest)cout << "Input Object is lesser than greatest object\n";
    else if(v > greatest)cout << "Input Object is greater than greatest object\n";


    Item w;
    int y;
     cout<<endl;
    cout << "Input object: ";
    cin >> y;
    w.setdata(y);

    if(w == greatest)cout << "Input Object is equal to greatest object\n";
    else if(w < greatest)cout << "Input Object is lesser than greatest object\n";
    else if(w > greatest)cout << "Input Object is greater than greatest object\n";
    cout<<endl;

    Item z;
    int p;
    cout << "Input object: ";
    cin >> p;
    v.setdata(p);

    if(z == greatest)cout << "Input Object is equal to greatest object\n";
    else if(z < greatest)cout << "Input Object is lesser than greatest object\n";
    else if(z > greatest)cout << "Input Object is greater than greatest object\n";
    cout<<endl;
return 0;
}
