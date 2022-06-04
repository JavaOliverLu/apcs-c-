#include <iostream>
using namespace std;
int main() {
  int r,c,k,m;
  cin>>r>>c>>k>>m;
  int big=-1;
  int small=1000000000;
int a[r+2][c+2];
int b[r+2][c+2];
  for(int flaga=1;flaga<=r;flaga++){
  for(int flagb=1;flagb<=c;flagb++){
cin>>a[flaga][flagb];
  }
  }
  for(int flagb=0;flagb<c+2;flagb++){
a[0][flagb]=-1;
  a[r+1][flagb]=-1;
  }
    for(int flagb=0;flagb<r+2;flagb++){
a[flagb][0]=-1;
a[flagb][c+1]=-1;
  }
  for(int flaga=1;flaga<=r;flaga++){
  for(int flagb=1;flagb<=c;flagb++){
 b[flaga][flagb]=0;
  }
  }
  for(int flagb=0;flagb<c+2;flagb++){
b[0][flagb]=-1;
  b[r+1][flagb]=-1;
  }
    for(int flagb=0;flagb<r+2;flagb++){
b[flagb][0]=-1;
b[flagb][c+1]=-1;
  }



  for(int flagday=0;flagday<m;flagday++){
  for(int flaga=1;flaga<=r;flaga++){
  for(int flagb=1;flagb<=c;flagb++){
 b[flaga][flagb]=0;
  }
  }
  
  for(int flaga=1;flaga<=r;flaga++){
  for(int flagb=1;flagb<=c;flagb++){
if(a[flaga][flagb]>=0){
  if(a[flaga-1][flagb]>=0){
  b[flaga][flagb]-=(a[flaga][flagb]/k);  
  b[flaga][flagb]+=(a[flaga-1][flagb]/k);
}
  if(a[flaga+1][flagb]>=0){
  b[flaga][flagb]-=(a[flaga][flagb]/k);
  b[flaga][flagb]+=(a[flaga+1][flagb]/k);
}
  if(a[flaga][flagb-1]>=0){
  b[flaga][flagb]-=(a[flaga][flagb]/k);
  b[flaga][flagb]+=(a[flaga][flagb-1]/k);
}
  if(a[flaga][flagb+1]>=0){
  b[flaga][flagb]-=(a[flaga][flagb]/k);
  b[flaga][flagb]+=(a[flaga][flagb+1]/k);
}
}
  }
  }
  for(int flaga=1;flaga<=r;flaga++){
  for(int flagb=1;flagb<=c;flagb++){
 a[flaga][flagb]+=b[flaga][flagb];
  }
  }
  }
  for(int flaga=1;flaga<r+1;flaga++){
  for(int flagb=1;flagb<c+1;flagb++){
    if(a[flaga][flagb]>big){
      big=a[flaga][flagb];
    }
    if(a[flaga][flagb]<small&&a[flaga][flagb]!=-1){
      small=a[flaga][flagb];
    }
//cout<<a[flaga][flagb]<<" ";
  }
   // cout<<endl;
  }

  cout<<small<<endl;
  cout<<big;


  
  }
  
