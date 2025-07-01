#include<iostream>
using namespace std;
int main()
{
    string str = "Hello how are you";
    cout<<str[0]<<endl;
    cout<<str.at(0)<<endl;
    cout<<str.front()<<endl;
    cout<<str.back()<<endl;
    cout<<str.length()<<endl;
    
    auto it = str.begin();
    while(it!=str.end())
    {
        cout<<*it;
        it++;
    }
    cout<<endl;

    str.clear();
    if(str.empty())
    {
        cout<<"Empty "<<endl;
    }
    else
    {
        cout<<"Not empty "<<endl;
    }

    string fname = "Bhawneet";
    string lname = "Singh";
    string ans = fname + " " +lname;
    cout<<ans<<endl;

    string sent = "Hello jee how are you";
    cout<< sent.substr(5,5)<<endl;

    cout<<sent.substr(5)<<endl;

    string word = "how";
    string name = "Hello jee how are you";
    int ans2 = name.find(word); 
    cout<<ans2<<endl;

    string s1 = "love";
    string s2 = "love";
    cout<<s1.compare(s2)<<endl;

    string s3 = "aove";
    string s4 = "love";
    cout<<s3.compare(s4)<<endl;

    cout<<s4.compare(s3)<<endl;
}