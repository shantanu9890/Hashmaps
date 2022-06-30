#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


int main() {

    unordered_map <string , int> m;
    
    //Insertion:
    pair <string,int >p("abc",2);
    m.insert(p);
    pair<string,int>p1=make_pair("xyz",4);
    m.insert(p1);
    //or just
    m["def"]=3;
    

    //Find or access
    cout<<m["abc"]<<endl;
    cout<<m.at("def")<<endl;
    //We need to be careful while using brackets because if key doesn't exists
    //it will assign a value 0 to it by default and will show it;
    //but at() is safer because it will give error if accessing key which is not already present.



    cout<<m["ghi"]<<endl;
    //check presence:
    if (m.count("ghi")>0)
    {
        cout<<"ghi is present"<<endl;
    }
    //count will give either 1 or 0 . 

    
    //To erase element from map:
    m.erase("ghi");

   // cout<<m.at("ghi")<<endl;//will throw error;
   
    
   //size:
   cout<<"size: "<<m.size()<<endl;



    return 0;
}