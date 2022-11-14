#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

class String
{
private:
    char* str;
public:
    String()
    {
        str=new char[0];
    }
    String(char* s)
    {
        int length = strlen(s);
        str = new char[length+1];
        strcpy(str,s);
    }

    void getdata()
    {
        cout<<"What type of string? (U/L/T) : ";
        //if()
        cin.getline(str,100);
        cout<<"Enter the String: ";
       // cin>>str;
       cin.getline(str,100);
    }
    void display()
    {
        cout<<str<<endl;
    }
    void Uppercase()
    {
       for(int i=0;*(str+i)!='\0';i++)
        {
            if(*(str+i) >= 97 && *(str+i) <= 122)
            {
                *(str+i) = *(str+i)-32;
            }
        }
    }

    void Lowercase()
    {
       for(int i=0;*(str+i)!='\0';i++)
        {
            if(*(str+i) >= 65 && *(str+i) <= 90)
            {
                *(str+i) = *(str+i)+32;
            }
        }
    }

     void Toggle()
    {
       for(int i=0;*(str+i)!='\0';i++)
        {
            if(*(str+i) >= 'a' && *(str+i) <= 'z')
            {
                *(str+i) = *(str+i)-32;
            }
            else if(*(str+i) >= 'A' && *(str+i) <= 'Z')
            {
                *(str+i) = *(str+i)+32;
            }
            }
            /*if (*(str+i) %2==0)
            return str.Uppercase();
            else
                return str.Lowercase();*/
        }

    ~String()
    {
        //cout<<"deleting object"<<endl;
        delete[] str;
    }
};
int main()
{
    String s1;
    s1.getdata();
    s1.Uppercase();
    cout<<"Printed String : ";
    s1.display();
    cout<<endl;

    String s2;
    s2.getdata();
    s2.Lowercase();
    cout<<"Printed String : ";
    s2.display();
    cout<<endl;

    String s3;
    s3.getdata();
    s3.Toggle();
    cout<<"Printed String : ";
    s3.display();

    return 0;
}

