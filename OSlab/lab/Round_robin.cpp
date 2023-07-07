#include<bits/stdc++.h>
using namespace std;
 int main(){
     freopen("input.txt","r",stdin);
    int n,i,j,k,q,t,wt=0,tt=0;
    cin>>n;
     k = n;
    int b[n],r[n],a[n];
     for(i=0;i<n;i++) {
            cin>>a[i];}
    for(i=0;i<n;i++) {
            cin>>b[i];
         r[i] = b[i];}

    cin>>q;

    int tmp = 0;
    vector<pair<int,int>>v;
    cout<<"process"<<"\t\t"<<"tat\t\t"<<"wtime"<<endl;
    for(i=0,t=0;k!=0;){
        if(r[i]<=q && r[i]>0){
            t+=r[i];
            r[i] = 0;
            tmp = 1;
            v.push_back(make_pair(i+1,t));
        }
        else if(r[i]>0){
            r[i]-=q;
            t+=q;
            v.push_back(make_pair(i+1,t));
        }

        if(r[i]==0 && tmp==1){
            k--;
            cout<<i+1<<"\t\t"<<t<<"\t\t"<<t-b[i];
            cout<<endl;

            tt+=t;
            wt+=(tt-b[i]);
            tmp=0;
        }
       if(i == n-1)
			i=0;
		else if(a[i+1] <= t)
			i++;
		else
			i=0;


    }
    cout<<"avg_wt_time : "<<wt*1.0/n<<endl;
    cout<<"avg_tt_time : "<<tt*1.0/n<<endl;

        cout<<endl;
   // for(auto it:v) cout<<"P"<<it.first<<" : "<<it.second<<endl;
     cout<<"====gantt chart===\n";

     int k1=0;
     int t1=0,len=0;
     string s;
   for(auto it:v){
        s = to_string(k1);
        len = t1*(s.size()+4);
       // cout<<len<<'\n';
        while(len!=0){
            cout<<" ";
            len--;
        }

    cout<<k1<<".."<<it.second<<"|T"<<it.first<<'\n';
    k1=it.second;
    t1++;
   }
 }
