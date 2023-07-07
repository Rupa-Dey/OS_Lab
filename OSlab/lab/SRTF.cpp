#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int n,i,j,k,cnt=0,nd=0,p=1;
    cin>>n;
    int a[10],b[10],x[10],wt[10],tt[10];
    vector<int>v;
    vector<pair<int,int>>vi;

    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];
    for(i=0;i<n;i++) x[i]=b[i];

    b[9] = INT_MAX;
    //cout<<INT_MAX<<endl;
    for(j=0;cnt!=n;j++){
            k = 9;
        for(i=0;i<n;i++){
        if(a[i]<=j && b[i]<b[k] && b[i]>0)
            k = i;
        }
        b[k]--;
        if(b[k]==0){
            cnt++;
            nd = j+1;
            wt[k] = nd-a[k]-x[k];
            tt[k] = nd-a[k];

        }
     // cout<<k+1<<" ";
      v.push_back(k+1);

    }
    //...........print..................
    cout<<"Process "<<"\t"<< "burst-time"<<"\t"<<"arrival-time" <<"\t"<<"waiting-time" <<"\t"<<"turnaround-time"<<endl;
    double avg_w=0,avg_t=0;
    for(i=0;i<n;i++){
       cout<<"P"<<i+1<<"\t\t"<<x[i]<<"\t\t"<<a[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i]<<'\n';
        avg_w+=wt[i];
        avg_t+=tt[i];
    }
    //..............................
   // cout<<endl;

    //for(auto it:v) cout<<it<<" ";
    //cout<<endl;
     for(i=1;i<v.size();i++){
            if(v[i]==v[i-1]){
                p++;

            }
            else {
                    vi.push_back(make_pair(v[i-1],p));
            p=1;
            }
        }
        vi.push_back(make_pair(v[i-1],(p)));
   
//    for(auto it:vi) cout<<it.first<<":"<<it.second<<'\n';
//      cout<<endl;
   // for(auto it:vi) cout<<it.first<<" : "<<it.second<<'\n';


     cout<<"====gantt chart===\n";

     k=0;
     int t=0,len=0;
     string s;
   for(auto it:vi){
        s = to_string(k);
        len = t*(s.size()+4);
       // cout<<len<<'\n';
        while(len!=0){
            cout<<" ";
            len--;
        }

    cout<<k<<".."<<k+it.second<<"|T"<<it.first<<'\n';
    k+=it.second;
    t++;
   }



}
