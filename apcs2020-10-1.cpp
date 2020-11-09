#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,b,c,d,e,f,g,h,i,j;
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	cin>>g;
	int kk[g];
		for (int z=0;z<=g;z++){
			h=a*z*z+b*z+c;
			i=g-z;
			j=d*i*i+e*i+f;
			kk[z]=h+j;
}
	sort(kk,kk+g);
	cout<<kk[g-1];
}

