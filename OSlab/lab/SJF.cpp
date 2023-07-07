#include<bits/stdc++.h>
using namespace std;

int main(){
   //freopen("input.txt","r",stdin);

    int n,i,j,k,len,t=0;
    cin>>n; //no of process
    vector<int>v(n),wt,tt;

    for(i=0;i<n;i++)
        cin>>v[i];

  
  
   k = 0;
   vector<pair<int,int>>vi;
   for(i=0;i<n;i++){
    vi.push_back(make_pair(v[i],i+1));
   }
   sort(vi.begin(),vi.end());
   
   string s;
     cout<<"gnatt chart:\n";
     cout<<"-------------\n";
   for(auto it:vi){
        s = to_string(k);
        len = t*(s.size()+4);
       // cout<<len<<'\n';
        while(len!=0){
            cout<<" ";
            len--;
        }

    cout<<k<<".."<<k+it.first<<"|T"<<it.second<<'\n';
    wt.push_back(k);
    k+=it.first;
    tt.push_back(k);
    t++;
   }
   cout<<endl;
   cout<<"process\t\t"<<"burst\t\t"<<"w_t\t\t"<<"tt_t"<<"\n";
    for(i=0;i<n;i++){
       
        cout<<"P"<<vi[i].second<<"\t\t"<<vi[i].first<<"\t\t"<<wt[i]<<"\t\t"<<tt[i]<<'\n';
    }

   // for(auto it:v) cout<<it<<' ';

}

