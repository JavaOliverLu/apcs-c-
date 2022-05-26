#include <iostream>
#include <string>
using namespace std;
int main() {
string x;
  int m=0;
  int n=0;
  cin>>x;
for(int a=0;a<x.length();a++){
  if(a%2==0){
    m+=int(x[a]);
  }
  else{
    n+=int(x[a]);
  }
}
if(x.length()%2==0){
  cout<<abs(m-n);
}
else{
    cout<<abs(m-n-48);
}

  }
