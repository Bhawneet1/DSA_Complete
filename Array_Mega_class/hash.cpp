#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    unordered_map<int,int> table;
    table[1]=53;
    table[2]=54;
    table[3]=55;

    table[2]=57;//overwrite original as key always unique
    unordered_map<int,int>:: iterator it;
    for(it=table.begin();it!=table.end();it++){
        int key = it->first;
        int value = it->second;
        cout<<"Key: "<<key<<" value "<<value<<endl;
    }

    // for(auto it:table)
    // {
    //     int key = it.first;
    //     int value = it.second;
    //     cout<<"Key: "<<key<<" value "<<value<<endl;
    // }

    // 2 is key
    if(table.find(2) !=table.end())
    {
        //found
        int value = table[2];
        cout<<value<<endl;
    }
    else
    {
        //not found
    }

    table.erase(2);
    //not found as erased
    if(table.find(2) !=table.end())
    {
        //found
        int value = table[2];
        cout<<" Found "<<value<<endl;
    }
    else
    {
        //not found
        cout<<"Not found"<<endl;
    }


    return 0;

}