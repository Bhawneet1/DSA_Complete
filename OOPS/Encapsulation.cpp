#include<bits/stdc++.h>
using namespace std;
class Students{
    private:
    //attributes
    int id;
    int age;
    string name;
    int nos;
    float *gpa;
    public:
    //constructror
    
    void setGPA(float a)
    {
        *this->gpa = a;
    }

    float getGPA()
    {
        return *this->gpa;
    }

    Students(int id,int age,string name,int nos,float gpa)
    {
        cout<<"Default parameterized called "<<endl;
        this->name = name;
        this->age = age;
        this->nos=nos;
        this->id=id;
        this->gpa =  new float (gpa);
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
    Students A(10,30,"Karan",10,7.00);
    
    A.setGPA(9.00);
    cout<<A.getGPA()<<endl;
}