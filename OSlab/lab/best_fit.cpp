#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     freopen("input.txt","r",stdin);
     int n,i,j=1,k=0,q;
     cin>>n;
     int p = n;
     vector<int>v(n),ans;
     for(i=0;i<n;i++){
        cin>>v[i];
     }
    vector<pair<int,int>>vi;

    for(i=0;i<n;i++){
        vi.push_back(make_pair(v[i],i+1));
    }
    sort(vi.begin(),vi.end());
    for(auto it:vi) cout<<it.first<<":"<<it.second<<'\n';
   int t=0;
     while(p--) {
            cin>>q;
            bool chk = false;
        for(auto it:vi){
        if(it.first>=q){

                cout<<"allocated into "<<it.first<<"\n";
            chk  = true;
            ans.push_back(it.second);
            vi.erase(vi.begin());
            //cout<<t<<endl;
       // t++;
            break;
        }
        else continue; }
        if(!chk) cout<<"no allocation"<<endl;
      }
     for(auto it:ans) cout<<it<<" ";
     cout<<endl;
 }

