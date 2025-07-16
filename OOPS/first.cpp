#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
    //attributes
    int id;
    int age;
    string name;
    int nos;

    //constructror
    Students(int id,int age,string name,int nos)
    {
        cout<<"Default parameterized called "<<endl;
        this->name = name;
        this->age = age;
        this->nos=nos;
        this->id=id;
    }

    //copy constructor
    Students(const Students &src)
    {
        cout<<"Copy constructor called "<<endl; 
        this->age=src.age;
        this->id = src.id;
        this->name = src.name;
        this->nos = src.nos;
    }

    //behaviour / Methods / Functions
    void study()
    {
        cout<<this->name <<"Studying "<<endl;
    }

    void sleep()
    {
        cout<<this->name <<"Sleeping "<<endl;

    }
    
    void bunk()
    {
        cout<<this->name <<"Bunking "<<endl;
    }
     ~Students()
    {
        cout<<"Default dtor called "<< this->name<<endl;
    }

   
};
int main()
{
    // Students s1;
    // s1.age=21;
    // s1.id=20;
    // s1.name="Bhawneet";
    // s1.nos=5;
    // s1.study();

    // Students s2;
    // s2.age=21;
    // s2.id=23;
    // s2.name="Ramu";
    // s2.nos=4;
    // s2.bunk();
    Students s3(10,23,"Raj",5);
    cout<<s3.name<<endl;

    Students s4(30,25,"J",9);
    cout<<s4.id<<endl;

    s3.sleep();
    s4.study();

    // Students s5 = s4;
    Students s5(s4);
    cout<<s5.name<<endl;

    Students *s7 = new Students(1,30,"Love",4);
    cout<<s7->name<<endl;
    cout<<s7->age<<endl;
    cout<<s7->id<<endl;
    delete s7; 
}