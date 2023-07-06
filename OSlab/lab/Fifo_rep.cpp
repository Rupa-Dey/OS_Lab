#include<bits/stdc++.h>
using namespace std;

int getpageFault(int page[], int n, int f){
  unordered_set<int> s;
  queue<int> ind;

  int fault=0,i,j;

  for(i=0;i<n;i++){
    if(s.size()<f){
        if(s.find(page[i])==s.end()){
            s.insert(page[i]);
            fault++;
            ind.push(page[i]);
        }
    }
    else{
        if(s.find(page[i])==s.end()){
                int v = ind.front();
            ind.pop();
            s.erase(v);
            s.insert(page[i]);
            ind.push(page[i]);
            fault++;
        }
    }

  }
  return fault;
}
int main(){
    freopen("input.txt","r",stdin);
  int n,i,j;
  cin>>n;
  int page[n];
  for(i=0;i<n;i++) cin>>page[i];
  int f;
  cin>>f;
  cout<<"page fault: "<<getpageFault(page,n,f);


}
