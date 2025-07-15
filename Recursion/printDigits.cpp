#include<bits/stdc++.h>
using namespace std;
void printDigits(int n)
{
    if(n==0)
        return;
   
    int newNumber = n/10;
    printDigits(newNumber);

    int digit = n%10;
    cout<<digit<<" ";
    
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    printDigits(n);
}