#include<iostream>
#include<vector>
#include <string>
#include<unordered_map>
using namespace std;

int main(){
   
unordered_map<string,int>m;
m["abc"]=1;
m["abc1"]=2;
m["abc2"]=3;
m["abc3"]=4;
m["abc4"]=5;
m["abc5"]=6;
m["abc6"]=7;
m["abc7"]=8;
m["abc8"]=9;

unordered_map<string,int>::iterator it=m.begin();
while (it!=m.end())
{
    cout<<"key: "<<it->first<<" value: "<<it->second<<endl;
    it++;
}
cout<<endl;
//there is no specific order of elements in unordered map;
//it.end() points to element next to last element;

//find
unordered_map<string,int>::iterator it1=m.find("abc4");
m.erase(it1,m.end());

for (it=m.begin();it!=m.end(); it++)
{
  cout<<"key: "<<it->first<<" value: "<<it->second<<endl;
}
cout<<endl;





vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);

vector<int>::iterator it3;

for (it3=v.begin(); it3!=v.end(); it3++)
{
   cout<<*it3<<endl;
}


}