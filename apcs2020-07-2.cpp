#include <iostream>
using namespace std;
int main() {
  int m,n;
  cin>>m>>n;
int a[m][3];
int comm[n][2];
  for(int flaga=0;flaga<m;flaga++){
    a[flaga][0]=1;
    a[flaga][1]=4;
    a[flaga][2]=2;
  }

  for(int flaga=0;flaga<n;flaga++){
      cin>>comm[flaga][0]>>comm[flaga][1];
    comm[flaga][0]=comm[flaga][0]-1;
        comm[flaga][1]=comm[flaga][1]-1;
  }
  for(int flaga=0;flaga<n;flaga++){
    if(comm[flaga][1]==(-2)){
      int temp4=a[comm[flaga][0]][0];
      a[comm[flaga][0]][0]=a[comm[flaga][0]][1];
      a[comm[flaga][0]][1]=temp4;
      a[comm[flaga][0]][0]=7-a[comm[flaga][0]][0];
    }
    else if(comm[flaga][1]==(-3)){
      int temp5=a[comm[flaga][0]][0];
      a[comm[flaga][0]][0]=a[comm[flaga][0]][2];
      a[comm[flaga][0]][2]=temp5;
      a[comm[flaga][0]][0]=7-a[comm[flaga][0]][0];
    }
    else{
      int temp1=a[comm[flaga][0]][0];
      a[comm[flaga][0]][0]=a[comm[flaga][1]][0];
      a[comm[flaga][1]][0]=temp1;
      int temp2=a[comm[flaga][0]][1];
      a[comm[flaga][0]][1]=a[comm[flaga][1]][1];
      a[comm[flaga][1]][1]=temp2;
      int temp3=a[comm[flaga][0]][2];
      a[comm[flaga][0]][2]=a[comm[flaga][1]][2];
      a[comm[flaga][1]][2]=temp3;
    }
      /*for(int flaga=0;flaga<m;flaga++){
cout<<a[flaga][0]<<" ";
  }
    cout<<endl;*/
  }
  for(int flaga=0;flaga<m;flaga++){
cout<<a[flaga][0]<<" ";
  }
  }
