#include <iostream>
using namespace std;
int main() {
int cmd;
int num;
cin>>cmd>>num;
char key[cmd][num];
char word[num];
int isOdd[cmd];
for(int flaga=0;flaga<cmd;flaga++){
for(int flagb=0;flagb<num;flagb++){
cin>>key[flaga][flagb];
}
}
for(int flagb=0;flagb<num;flagb++){
cin>>word[flagb];
}
for(int flagb=0;flagb<cmd;flagb++){
int ceriacounter=0;
for(int flagc=0;flagc<num;flagc++){
if(key[flagb][flagc]=='1'){
ceriacounter++;
}
}
if(ceriacounter%2==1){
isOdd[flagb]=1;
}
else if(ceriacounter%2==0){
isOdd[flagb]=0;
}
}


for(int flaga=0;flaga<cmd;flaga++){
int frontpoi=0;
int backpoi=0;
char answord[num];
for(int flagb=0;flagb<num;flagb++){
if(key[cmd-1-flaga][flagb]=='1'){
answord[num-1-backpoi]=word[flagb];
backpoi++;
}
else{
answord[frontpoi]=word[flagb];
frontpoi++;
}
}

for(int flagz=0;flagz<num;flagz++){
word[flagz]=answord[flagz];
}

if(isOdd[cmd-1-flaga]==1){
if(num%2==0){
for(int flagg=0;flagg<num/2;flagg++){
int tempa=word[flagg];
word[flagg]=word[(num/2)+flagg];
word[(num/2)+flagg]=tempa;
}
}
else{
for(int flagh=0;flagh<num/2;flagh++){
int tempb=word[flagh];
word[flagh]=word[(num/2)+flagh+1];
word[(num/2)+flagh+1]=tempb;
  }
}
}

}
for (int flagw=0;flagw<num;flagw++){
  cout<<word[flagw];
}

}
