#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     freopen("input.txt","r",stdin);
     int n,i,j=1,k=0,q;
     cin>>n;
     int p = n;
     vector<int>v(n),ans(n);
     for(i=0;i<n;i++){
        cin>>v[i];
     }

     while(p--) {
            cin>>q;
            bool chk = false;
        for(i=0;i<n;i++){
        if(v[i]>=q){
                cout<<"allocated into "<<v[i]<<"\n";
            chk  = true;
            ans[i] = k++;
            v[i] = -1;
            break;
        } }
        if(!chk) cout<<"no allocation"<<endl;
     }
     for(auto it:ans) cout<<it+1<<" ";
     cout<<endl;
 }
