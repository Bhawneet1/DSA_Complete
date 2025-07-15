#include<bits/stdc++.h>
using namespace std;
void printSubsequence(string str,int i , string output)
{
    if(i== str.length())
    {
        cout<<output<<endl;
        return;
    }
     
    char ch = str[i];
    //include
    
    printSubsequence(str,i+1,output+ch);//add ch
    //exclude

    printSubsequence(str,i+1,output);//not add ch 
}
int main()
{
    string str = "abc";
    string output = "";
    int i=0;
    printSubsequence(str,i,output);
}