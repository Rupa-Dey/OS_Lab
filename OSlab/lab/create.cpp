#include<bits/stdc++.h>
#include<fstream>
#include<windows.h>
#include<dirent.h>
using namespace std;

void createFile(char a[]){
    fstream fileN;
    fileN.open(a,ios::out);

    if(!fileN) cout<<"error";
    else{
        cout<<"found";
        fileN.close();
    }

}

void removeFile(char a[]){
    remove(a);
}
void dirFile(){

struct dirent *d;
DIR *dr;

dr = opendir(".");
  if(dr!=NULL){
    cout<<"found file are"<<'\n';
    while((d=readdir(dr))!=NULL)
        cout<<d->d_name<<'\n';

    closedir(dr);
  }
  else cout<<"no file";
}

void copyFile(char src[],char des[]){
  if(CopyFile(src,des,true)){
    cout<<"copied successfully";

  }
   else cout<<"error";


}

void movefile(char src[], char des[]){
    if(CopyFile(src,des,true)){
        int status = remove(src);
        cout<<"file moved successfully"<<'\n';
    }
    else cout<<"error";
}

int main(int argc, char **argv)
{
    if(argc==1) cout<<"input not found";
    else {
       string cr = "create";
       string rmv = "remove";
       string dir = "dir";
       string cpy = "CopyFile";
       string mov = "move";
       if(argv[1]==cr){
        createFile(argv[2]);
       }
       if(argv[1]==rmv){
        removeFile(argv[2]);
       }
       if(argv[1]==dir){
        dirFile();
       }
       if(argv[1]==cpy){
        copyFile(argv[2],argv[3]);
       }
       if(argv[1]==mov){
        movefile(argv[2],argv[3]);
       }
    }
}

//G:\.CSE32\OSlab\lab
//G:/.CSE32/OSlab/rupa.cpp
//G:/.CSE32/OSlab/lab/copy.cpp
