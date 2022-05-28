#include <iostream>
using namespace std;
int main() {
int a[3];
  cin>>a[0]>>a[1]>>a[2];
  for (int flaga=0;flaga<3;flaga++){
    for(int flagb=0;flagb<flaga;flagb++){
      if(a[flagb]>a[flaga]){
        int temp=a[flagb];
        a[flagb]=a[flaga];
        a[flaga]=temp;
      }
    }
  }
  for (int flagc=0;flagc<3;flagc++){
    cout<<a[flagc]<<" ";
  }
  cout<<endl;

  if(a[0]+a[1]>a[2]){
    if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2]){
      cout<<"Obtuse";
    }
    else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
      cout<<"Right";
    }
    else if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2]){
      cout<<"Acute";
    }
  }
  else{
    cout<<"No";
  }
}
