#include<bits/stdc++.h>
using namespace std;
string orderCopy;
static bool cmp(char a,char b)
    {
        return (orderCopy.find(a) < orderCopy.find(b));
    }
    string customSortString(string order, string s) {
        orderCopy = order;
        sort(s.begin(),s.end(),cmp);
        return s;
    }
int main()
{
    string  order = "bcafg", s = "abcd";
    string ans = customSortString(order,s);
    cout<<ans<<endl;
}