#include<iostream>
using namespace std;
//int n=3;
class University
{
protected:
    string uname;
public:
    University ()
    {
       uname='\0';
    }
    University (string a)
    {
        uname=a;
    }
    void getdata ()
    {
        cout<<"Enter University name :";
        cin>>uname;

    }
    void putdata ()
    {
        cout<<"Name : "<<uname<<endl;
    }
};


class Department : public University
{
protected:
    string dname;
    string location;
public:
    Department ()
    {
       dname="\0";
       location="\0";
    }
    Department (string g,string a,string b) : University(g)
    {
        dname=a;
        location=b;
    }
    void getdata ()
    {
        University::getdata();
        cout<<"Enter dname :";
        cin>>dname;
        cout<<"Enter location :";
        cin>>location;
        cout<<endl;
    }
    void putdata ()
    {
        University::putdata();
        cout<<"Department Name     : "<<dname<<endl;
        cout<<"Department Location : "<<location<<endl;
        cout<<endl;
    }
};

class Teacher : virtual public Department
{
protected:
    string tname;
    int idof_courses[3];
public:
    Teacher ()
    {
        tname="\0";
        for(int i=0;i<3;i++)
        {
            idof_courses[i]=0;
        }

    }
    Teacher (string x,string u, string v, string a, int b[]) : Department(x,u,v)
    {
        tname=a;
        for(int i=0;i<3;i++)
        {
            idof_courses[i]=b[i];
        }

    }
    void getdata ()
    {
        Department::getdata();
        cout<<"Enter Tname        :";
        getline(cin,tname);


        for(int i=0; i<3; i++)
        {
            cin>>idof_courses[i];
        }
        cout<<endl;
    }
    void putdata ()
    {
        Department::putdata();
        cout<<"Teacher Name         : "<<tname<<endl;

         for(int j=0; j<3; j++)
        {
            cout<<"Teacher idof_courses : "<<idof_courses[j]<<endl;
        }
        cout<<endl;

    }
};

class Course : virtual public Department
{
protected:
    int numberofcourses;
    int courseid;
    string cname;
public:
    Course ()
    {
        numberofcourses=0;
        courseid=0;
        cname="\0";
    }
    Course (string d,string e, string f, int a, int b, string c) : Department(d,e,f)
    {
        numberofcourses=a;
        courseid=b;
        cname=c;
    }
    void getdata ()
    {
        Department::getdata();
        cout<<"Enter Course number :";
        cin>>numberofcourses;
        cout<<"Enter Course id     :";
        cin>>courseid;
        cout<<"Enter Course cname  :";
        cin>>cname;
        cout<<endl;
    }
    void putdata ()
    {
        Department::putdata();
        cout<<"Course number        : "<<numberofcourses<<endl;
        cout<<"Course id            : "<<courseid<<endl;
        cout<<"Course Course cname  : "<<cname<<endl;
        cout<<endl;
    }
};

class Student: public Course, public Teacher
{
private:
    string sname;
    int idof_coursetaken[3];
public:
    Student ()
    {
        sname="\0";
         for(int i=0;i<3;i++)
        {
           idof_coursetaken[i]=0;
        }

    }
    Student (string m,string n, string o,int p,int q, string r,string j, string k, string l, string s, int t[], string a, int b[]): Course(m,n,o,p,q,r),Teacher(m,n,o,s,t)
    {
        sname=a;
         for(int i=0;i<3;i++)
        {
           idof_coursetaken[i]=b[i];
        }
    }
    void getdata ()
    {
        Course::getdata();
        Teacher::getdata();
        cout<<"Enter Sname            :";
        cin>>sname;

        for(int k=0; k<3; k++)
        {
            cin>>idof_coursetaken[k];
        }
        cout<<endl;
    }
    void putdata ()
    {
        Course::putdata();
        Teacher::putdata();
        cout<<"Student name             : "<<sname<<endl;

        for(int l=0; l<3; l++)
        {
            cout<<"Student idof_coursetaken : "<<idof_coursetaken[l]<<endl;
        }
        cout<<endl;

    }
};


int main()
{
    University u;
    Department a,d("BUBT","CSE","Mirpur-1"),e;

    int courses[3]={121,122,213};
    Teacher m,t("BUBT","CSE","Mirpur-1","HumayraFerdous", courses),n;

    Course q,c("BUBT","CSE","Mirpur-1",2,122,"OOP"),r;

    int intake[3]={49,50,51};
    Student v,s("BUBT","CSE","Mirpur-1",2,122,"OOP","BUBT","CSE","Mirpur-1","HumayraFerdous", courses,"Joy",intake),x;


    e.getdata();
    e.putdata();

    n.getdata();
    n.putdata();

    r.getdata();
    r.putdata();

    x.getdata();
    x.putdata();

    return 0;

}
