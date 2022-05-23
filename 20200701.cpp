#include <iostream>
using namespace std;
int main() {
int r,c,m;
  cin>>r>>c;
  cin>>m;

int track[m][2];
int count=0;

bool stopsign=false;
for(int flaga=0;flaga<m;flaga++){
int buffer;
stopsign=false;
track[flaga][0]=0;
track[flaga][1]=0;
for (int flagb=0;stopsign==false;flagb++){
cin>>buffer;
if(buffer!=0){

 if(buffer==r){
track[flaga][0]+=1;
}
else if(buffer==-r){
track[flaga][0]-=1;
}
else if(buffer==c){
track[flaga][1]+=1;
}
else if(buffer==-c){
track[flaga][1]+=1;
}
}
  else{
    stopsign=true;
  }
  }
  }


for(int flagc=0;flagc<m;flagc++){
if(track[flagc][0]>0&&track[flagc][1]>0){
count++;
}
}

cout<<count;

  
}
