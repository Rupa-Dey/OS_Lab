#include<bits/stdc++.h>
using namespace std;

void w_time(vector<int>b,int n, int wt[]){
    wt[0] = 0;
    for(int i=1;i<n;i++)
        wt[i] = wt[i-1]+b[i-1];


}
void t_time(vector<int>b, int n, int wt[], int tt[]){
    for(int i=0;i<n;i++)
        tt[i] = b[i]+wt[i];

}

int main(){
    freopen("input.txt","r",stdin);
    int n,i,j,k;
    cin>>n;
    vector<int>p(n),b(n),pr(n);

    for(i=0;i<n;i++) cin>>p[i];
    for(i=0;i<n;i++) cin>>b[i];
    for(i=0;i<n;i++) cin>>pr[i];

    vector<pair<int,int>>vi;

    for(i=0;i<n;i++)
        vi.push_back(make_pair(pr[i],b[i]));
    sort(vi.rbegin(),vi.rend());

    for(auto it:vi) cout<<it.first<<"  ...|T"<<it.second<<'\n';

    int wt[n],tt[n],tot_wt=0,tot_tt=0;
    w_time(b,n,wt);
    t_time(b,n,wt,tt);

    cout<<"priority\t"<<"process\t\t"<<"burst\t\t"<<"w_t\t\t"<<"tt_t"<<"\n";
    for(i=0;i<n;i++){
        tot_wt+=wt[i];
        tot_tt+=tt[i];

        cout<<pr[i]<<"\t\t"<<p[i]<<"\t\t"<<b[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i]<<'\n';
    }




}
