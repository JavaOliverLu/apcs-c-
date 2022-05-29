#include <iostream>
using namespace std;
int main() {
  int num;
  cin>>num;
int a[num];
  int sigma=0;
  for(int flaga=0;flaga<num;flaga++){
    cin>>a[flaga];
  }
  for (int flagb=1;flagb<num-1;flagb++){
    if(a[flagb]==0){
      if(a[flagb-1]>a[flagb+1]){
        sigma+=a[flagb+1];
      }
      else if(a[flagb-1]<a[flagb+1]){
        sigma+=a[flagb-1];
      }
     else if(a[flagb-1]==a[flagb+1]){
        sigma+=a[flagb+1];
      } 
    }
  }

  if(a[0]==0){
    sigma+=a[1];
  }
  if(a[num-1]==0){
    sigma+=a[num-2];
  }
  cout<<sigma;
}
