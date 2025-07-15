#include<bits/stdc++.h>
using namespace std;
void printCounting(int n)
{
    if(n==0)
    {
        return ;
    } 
    cout<<n<<" ";
    printCounting(n-1);
}
void printCounting_2(int n)
{
    if(n==0)
        return;
    printCounting_2(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

     printCounting_2(n);
     cout<<endl;
     printCounting(n);

   
    return 0;
}