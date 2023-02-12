/*ন মাং কর্মাণি লিম্পন্তি ন মে কর্মফলে স্পৃহা।
ইতি মাং যোহভিজানাতি কর্মভির্ন স বধ্যতে।। */
//..................................................
//Author_Name : 
//Date : 
//..................................................
#include <bits/stdc++.h>
using namespace std;
char gap = 32;
template<typename T> 
ostream& operator<<(ostream &os, const vector<T> &v) { 
    os << '{'; 
    for (const auto &x : v) os << gap << x;
        return os << '}'; 
}
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) {
        return os << '(' << p.first << gap << p.second << ')';
}

#define ll long long 
#define lll __int128_t
#define pb push_back
#define mp make_pair
#define All(x) (x).begin(),(x).end()
#define sz(z) (int)((z).size())
#define ok cout<<endl;
typedef pair < int,int> ii;
typedef vector<ii> vii;
typedef vector<ll>vl;
typedef vector<int> vi;
typedef vector<vi> vvi;
int main(){
   int no_of_process,i,j;
    cin>>no_of_process;
    vector<int>burst_time(no_of_process);

    for(i=0;i<no_of_process;i++){
        cin>>burst_time[i];
    }
    vector<ii>v;
    for (int i = 0; i < no_of_process; i++)
    {
        v.pb(make_pair(burst_time[i],i+1));
    }
    //cout<<v;
     int sum=0,k=0,len,t=0;
        string s,s1,s2;
    vector<ii>avg_waitTime;
    for(auto it:v){
        
        avg_waitTime.pb(make_pair(it.second,sum));
       k += it.first;
        s = to_string(sum)+to_string(k);  //convert the string;
          // cout<<s.size()<<'\n';
          len = t*(s.size()+5);
          while(len!=0){
            cout<<" ";
            len--;
          }
        
       cout<<sum<<"....."<<it.first<< "| T"<<it.second<<'\n';
       sum=k;
          t++;
        
    }
   int mx = 0;
    for(auto it:avg_waitTime)
    {
        cout<<"Waiting Time for P"<<it.first<<": "<<it.second<<'\n';
       mx+=it.second;
    }
    cout<<"average waiting time: "<<mx/no_of_process<<'\n';
    

// int t;
// cin>>t;
// while(t--){
// }
}