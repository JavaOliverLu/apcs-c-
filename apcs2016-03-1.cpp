#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a;
  cin>>a;
  int b[a];
  int poi=-1;
  for(int flaga=0;flaga<a;flaga++){
    cin>>b[flaga];
  }
  for(int flagb=0;flagb<a;flagb++){
    for(int flagc=0;flagc<flagb;flagc++){
      if (b[flagb]<b[flagc]){
        int temp=b[flagb];
        b[flagb]=b[flagc];
        b[flagc]=temp;
      }
      }
  }
  for (int flagd=0;flagd<a;flagd++){
    cout<<b[flagd]<<" ";
  }
  for (int flage=0;flage<a;flage++){
    if(b[flage]>=60){
      poi=flage;
      break;
    }
  }
  if(poi==-1){
        cout<<endl;
        cout<<b[a-1]<<endl;
        cout<<"worst case";
  }
  else if(poi==0){
          cout<<endl;
    cout<<"best case"<<endl;
    cout<<b[0];
  }
  else{
            cout<<endl;
    cout<<b[poi-1]<<endl;
    cout<<b[poi];
  }
  }
