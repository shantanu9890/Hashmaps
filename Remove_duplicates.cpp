#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

//we can do it easily using set just insert elements from 
//array to set and pushback them from set to vector;
vector<int> removeDuplicates(int *a, int size){
    vector<int>v;
    unordered_map<int,bool>m;

    for (int i = 0; i < size; i++)
    {
       if(m.count(a[i])>0){
        continue;
       }
       m[a[i]]=true;
       v.push_back(a[i]);
    }
    return v;
}


int main(){
  

   int a[]={1,5,8,3,2,5,8,9,4,3,7,8};
   vector<int>v=removeDuplicates(a,12);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }


}