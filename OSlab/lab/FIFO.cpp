#include<bits/stdc++.h>
using namespace std;
int main(){
   freopen("input.txt","r",stdin);

    int n,i,j,k,len,t=0;
    cin>>n; //no of process
    vector<int>v(n);

    for(i=0;i<n;i++)
        cin>>v[i];

   k = 0;
   string s;

   for(i=0;i<v.size();i++){
        s = to_string(k);
        len = t*(s.size()+4);
        while(len!=0){
            cout<<" ";
            len--;
        }

    cout<<k<<".."<<k+v[i]<<"|T"<<i+1<<'\n';
    k+=v[i];
    t++;
   }

   // for(auto it:v) cout<<it<<' ';

}
