#include <iostream>
using namespace std;
int main() {
int a;
  cin>>a;
  int ques[a][14];
  int status[a];
  for(int flaga=0;flaga<a;flaga++){
    for (int flagb=0;flagb<14;flagb++){
      cin>>ques[flaga][flagb];      
    }
  }
  for(int flagc=0;flagc<a;flagc++){
    status[flagc]=0;
    if(!(ques[flagc][1]!=ques[flagc][3]&&ques[flagc][1]==ques[flagc][5]&&ques[flagc][8]!=ques[flagc][10]&&ques[flagc][8]==ques[flagc][12])){
      status[flagc]+=100;
    }
    if(!(ques[flagc][6]==1&&ques[flagc][13]==0)){
       status[flagc]+=10;
    }
    if(!(ques[flagc][1]!=ques[flagc][8]&&ques[flagc][3]!=ques[flagc][10]&&ques[flagc][5]!=ques[flagc][12])){
      status[flagc]+=1;
    }
  }
  for(int flagd=0;flagd<a;flagd++){
    if(status[flagd]==111){
      cout<<"ABC"<<endl;
    }
    else if(status[flagd]==110){
      cout<<"AB"<<endl;
    }
    else if(status[flagd]==101){
      cout<<"AC"<<endl;
    }
    else if(status[flagd]==100){
      cout<<"A"<<endl;
    }
    else if(status[flagd]==11){
      cout<<"BC"<<endl;
    }
    else if(status[flagd]==10){
      cout<<"B"<<endl;
    }
    else if(status[flagd]==1){
      cout<<"C"<<endl;
    }
    else if(status[flagd]==0){
      cout<<"None"<<endl;
    }
  }
  
  
  }
  
