#include <iostream>
using namespace std;
int main() {
int a,b,c;
cin>>a>>b>>c;
bool check=false;

if(a*b>0&&c==1)
{
cout<<"AND"<<endl;
check=true;
}
if(a*b==0&&c==0)
{
cout<<"AND"<<endl;
check=true;
}
if(a+b>0&&c==1)
{
cout<<"OR"<<endl;
check=true;
}
if(a+b==0&&c==0)
{
cout<<"OR"<<endl;
check=true;
}
if(a==0&&b>0&&c==1)
{
cout<<"XOR"<<endl;
check=true;
}
if(a>0&&b==0&&c==1)
{
cout<<"XOR"<<endl;
check=true;
}
if(a>0&&b>0&&c==0)
{
cout<<"XOR"<<endl;
check=true;
}
if(a==0&&b==0&&c==0)
{
cout<<"XOR"<<endl;
check=true;
}
if(check==false){
cout<<"IMPOSSIBLE";
}
}
