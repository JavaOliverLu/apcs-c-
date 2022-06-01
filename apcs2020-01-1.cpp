#include <iostream>
using namespace std;





int main() {
  int m,n,v,w,r;
  cin>>m>>n>>v>>w>>r;
  int tota=0;
  int counter=0;
int a[m][n];
int b[v][w];
int sigma[(w-n+1)*(v-m+1)];

int srirejeki=0;
int rumahmakan=0;
int small=1000000;
  for(int flaga=0;flaga<m;flaga++){
  for(int flagb=0;flagb<n;flagb++){
  cin>>a[flaga][flagb];
  tota+=a[flaga][flagb];
  }
  }
  for(int flaga=0;flaga<v;flaga++){
  for(int flagb=0;flagb<w;flagb++){
  cin>>b[flaga][flagb];
  }
  }
for(int flaga=0;flaga<(v-m+1);flaga++){
  for(int flagb=0;flagb<(w-n+1);flagb++){
  srirejeki=0;
  rumahmakan=0;
  for(int flagc=0;flagc<m;flagc++){
  for(int flagd=0;flagd<n;flagd++){
    if(a[flagc][flagd]!=b[flaga+flagc][flagb+flagd]){
      rumahmakan+=1;}
  srirejeki+=b[flaga+flagc][flagb+flagd];
  }
  }
    if(rumahmakan<=r){
   // cout<<srirejeki<<endl;
    sigma[counter]=srirejeki-tota;
      // cout<<sigma[counter]<<" ";
    counter++;
      }
  }
  }
for(int flaga=0;flaga<counter;flaga++){
  if(sigma[flaga]<0){
    sigma[flaga]=sigma[flaga]*(-1);
    }
//cout<<sigma[flaga]<<" ";

  if(sigma[flaga]<small){
    small=sigma[flaga];
  }
}
  cout<<counter<<endl;
  if(counter==0){
cout<<-1;
    }
else{
  cout<<small;
}
//(v-m+1)
//(w-n+1)
//(w-n+1)*(v-m+1)
  }
