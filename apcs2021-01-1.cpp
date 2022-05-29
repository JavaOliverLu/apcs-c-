#include <iostream>
using namespace std;
int main() {
  int num,price;
  cin>>num>>price;
  int qua=0;
int a[num][3];
  int sigma=0;
  for(int flaga=0;flaga<num;flaga++){
    cin>>a[flaga][0]>>a[flaga][1]>>a[flaga][2];
  }
  for(int flagx =0;flagx<num;flagx++){
    for(int flaga=0;flaga<3;flaga++){
       for(int flagb=0;flagb<flaga;flagb++){
            if(a[flagx][flaga]>a[flagx][flagb]){
              int temp=a[flagx][flaga];
              a[flagx][flaga]=a[flagx][flagb];
              a[flagx][flagb]=temp;
            }
  }
  }
      }
  for(int flagd=0;flagd<num;flagd++){
    if(a[flagd][0]-a[flagd][2]>=price){
      sigma+=(a[flagd][2]+a[flagd][1]+a[flagd][0])/3;
      qua++;
    }
  }
  cout<<qua<<" "<<sigma;
}
