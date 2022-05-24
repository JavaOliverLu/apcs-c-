#include <iostream>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int arraya[a][b];
int alex[a];
int temparea[a];
int start=0;
int total=0;
for (int flaga=0;flaga<a;flaga++){
for (int flagb=0;flagb<b;flagb++){
cin>>arraya[flaga][flagb];
}
}

for (int flagc=0;flagc<a;flagc++){
int poia=0;
for (int flagd=0;flagd<b;flagd++){
if(arraya[flagc][flagd]>poia){
poia=arraya[flagc][flagd];
alex[flagc]=poia;
}
}
}

for (int flage=0;flage<a;flage++){
total+=alex[flage];
}
for (int flagf=0;flagf<a;flagf++){
if(total%alex[flagf]==0){
temparea[start]=alex[flagf];
start++;
  }
}
cout<<total<<endl;
  if(start==0){
    cout<<-1;
  }else{
for(int flagg=0;flagg<start;flagg++){
cout<<temparea[flagg]<<" ";
}
    }
}
