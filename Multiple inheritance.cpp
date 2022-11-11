#include<iostream>
using namespace std;

class publication
{
protected:
    string title;
    float price;

public:
    publication()
    {
        title='\0';
        price=0.0;
    }

    publication( string a, float b)
    {
        title=a;
        price=b;
    }

    void getData()
    {
        cout<<"Enter Title :";
        cin>>title;

        cout<<"Enter Price :";
        cin>>price;

    }

    void putData()
    {
        cout<<"Title "<<title<<endl;
        cout<<"Price "<<price<<endl;

    }
};

class sales
{
protected:
    float aray[3];
public:

    void getData()
    {
        cout<<"Enter Sales :";
        for (int i=0 ; i<3; i++){
        cin>>aray[i];}
    }
    void putData()
    {
        for (int i=0 ; i<3; i++){
        cout<<aray[i]<<endl;}
    }

};


class book : public publication, public sales
{
    int Count;

public:
    book()
    {
        Count=0;
    }

    book( int c)
    {
        Count=c;
    }

    void getData()
    {
        publication::getData();
        cout<<"Enter Count page :";
        cin>>Count;
        sales :: getData();
    }
    void putData()
    {
        publication::putData();
        cout<<"Count "<<Count<<endl;
        sales :: putData();
    }
};

class tape : public publication, public sales
{
    float minute;
public:
    tape()
    {
        minute=0;
    }

    tape( float d)
    {
           minute=d;
    };

      void getData()
    {
        publication::getData();
        cout<<"Enter Playing minute :";
        cin>>minute;
        sales :: getData();
    }

    void putData()
    {
        publication::putData();
        cout<<"Playing Time  "<<minute<<endl;
        sales :: putData();

    }
    };

    int main(){
        //publication pub;
        book Book;
        tape Tape;

        /*pub.getData();
        pub.putData();
        cout<<endl;*/

        Book.getData();
        Book.putData();
        cout<<endl;

        Tape.getData();
        Tape.putData();

        return 0;


}


