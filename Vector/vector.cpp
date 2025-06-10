#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v)
{
    int n= v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
        // cout<<"Capacity"<<v.capacity()<<" "<<"Size"<<v.size()<<" ";
    }
    cout<<endl;
}

void insert(vector<int>v)
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cout<<"Enter element"<<endl;
        cin>>d;
        v.push_back(d);
    }
    print(v);
}

void clear(vector<int> v)
{
    v.clear();
    print(v);
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // print(v);
    v.pop_back();
    // print(v);
    v.pop_back();
    // print(v);
    v.pop_back();
    // print(v);
    insert(v);
    clear(v);

    vector<int> v2(5,-1);
    print(v2);
    return 0;
}