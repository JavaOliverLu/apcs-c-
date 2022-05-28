#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
  cin>>a>>b>>c>>d;
  cin>>e>>f>>g>>h;
  cin>>i>>j>>k>>l;
  cin>>m>>n>>o>>p;  
  int a1=a+b+c+d;
  int b1=e+f+g+h;
  int a2=i+j+k+l;
  int b2=m+n+o+p;
  cout<<a1<<":"<<b1<<endl;
  cout<<a2<<":"<<b2<<endl;
  if(a1>b1&&a2>b2){
    cout<<"Win";
  }
  else if(a1<b1&&a2<b2){
    cout<<"Lose";
  }
  else{
    cout<<"Tie";
  }
  }
  
