#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a[3];
cin>>a[0]>>a[1]>>a[2];
for (int flaga=0;flaga<3;flaga++){
for (int flagb=0;flagb<3;flagb++){
if(a[flaga]<a[flagb]){
int temp=a[flaga];
a[flaga]=a[flagb];
a[flagb]=temp;
}
}
}
if(a[2]==a[1]&&a[0]==a[1]&&a[2]==a[0]){
cout<<"3 "<<a[2];
}
else if(a[2]==a[1]&&a[0]!=a[1]){
cout<<"2 "<<a[2]<<" "<<a[0];
}
else if(a[2]!=a[1]&&a[0]==a[1]){
cout<<"2 "<<a[2]<<" "<<a[0];
}
else if(a[2]!=a[1]&&a[0]!=a[1]&&a[2]!=a[0]){
cout<<"1 "<<a[2]<<" "<<a[1]<<" "<<a[0];
}
}

