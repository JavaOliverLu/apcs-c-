#include <iostream>
using namespace std;
int main() {
  int num,price;
  cin>>num>>price;
  int big=0;
  int small=0;
int a[num];
  int sigma=0;
  int now=1;
  for(int flaga=0;flaga<num;flaga++){
    cin>>a[flaga];
  }
  small=a[0];
  for(int flaga=1;flaga<num;flaga++){
    if(a[flaga]>=small+price&&now==1){
      sigma+=(a[flaga]-small);
      small=a[flaga];      
      now=0;
    }
    if(a[flaga]<=small-price&&now==0){
      now=1;
      small=a[flaga];
    }
  }
  cout<<sigma;
}
