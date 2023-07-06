#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
  int n,i,j,k,f,fault=0;
  cin>>n;
  vector<int> page(n);
  for(i=0;i<n;i++) cin>>page[i];

  cin>>f;
  set<int>s;
  map<int,int>mp;

  for(i=0;i<n;i++){
    int val = page[i];
    if(s.size()<f){
        if(s.find(val)==s.end()){
            fault++;
            s.insert(val);
        }
        mp[val] = i;
    }
    else{
        if(s.find(val)==s.end()){
            int mn = INT_MAX,str;
            for(auto it:s){
                if(mn>mp[it]){
                    mn = mp[it];
                    str = it;
                }
            }
            s.erase(str);
            s.insert(val);
            fault++;
        }


        mp[val] = i;}
    }


     cout<<"Page fault: "<<fault;
}
