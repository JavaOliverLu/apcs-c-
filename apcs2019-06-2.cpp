#include <iostream>
using namespace std;
int main() {
  int num,price;
  cin>>num>>price;
  int sigma=0;
  int lx=0;
  int ly=0;
  int start=100000001;
int a[num+2][price+2];
  
  for(int flaga=1;flaga<num+1;flaga++){
  for(int flagb=1;flagb<price+1;flagb++){
  cin>>a[flaga][flagb];
    if(a[flaga][flagb]<start){
      start=a[flaga][flagb];
      lx=flagb;
      ly=flaga;        
    }
  }
  }
  //cout<<start<<" "<<lx<<" "<<ly<<endl;
  for (int flagc=0;flagc<price+2;flagc++){
    a[0][flagc]=100000001;
    a[num+1][flagc]=100000001;
  }
  for (int flagc=0;flagc<num+2;flagc++){
    a[flagc][0]=100000001;
    a[flagc][price+1]=100000001;
  }/*
  for(int flaga=0;flaga<num+2;flaga++){
  for(int flagb=0;flagb<price+2;flagb++){
  cout<<a[flaga][flagb]<<" ";
  }
    cout<<endl;
  }*/
  sigma+=a[ly][lx];
while(!(a[ly+1][lx]==100000001&&a[ly-1][lx]==100000001&&a[ly][lx+1]==100000001&&a[ly][lx-1]==100000001)){

int testa[4];
testa[0]=a[ly+1][lx];
testa[1]=a[ly-1][lx];
testa[2]=a[ly][lx+1];
testa[3]=a[ly][lx-1];
  for (int x=0;x<4;x++){
    for(int y=0;y<x;y++){
      if(testa[x]<testa[y]){
        int temp=testa[y];
        testa[y]=testa[x];
        testa[x]=temp;
        //testa[0]最小
      }
    }
  }
  sigma+=testa[0];
  if(testa[0]==a[ly+1][lx]){
 a[ly][lx]=100000001;
    ly=ly+1;
  }
  else  if(testa[0]==a[ly-1][lx]){
 a[ly][lx]=100000001;
    ly=ly-1;

  }
  else  if(testa[0]==a[ly][lx+1]){
 a[ly][lx]=100000001;
    lx=lx+1;
  }
  else  if(testa[0]==a[ly][lx-1]){
    a[ly][lx]=100000001;
    lx=lx-1;
  }
  //cout<<sigma<<" "<<lx<<" "<<ly<<endl;
  }
cout<< sigma;
  
}
