#include <iostream>
using namespace std;
int deret(int n)
{
	if(n==1){
		return (2);
	}else{
		return (2*n + deret (n-1));
	}
}
int main (){
	int b,n;
	
	cout<<"Masukan Jumlah Bilangan : ";
	cin>>n;
	
	for (b=2; b<=n*2;b=b+2){
		if (b==2)
		cout<<b;
		else
		cout<<"+"<<b;
	}
	cout<<"="<<deret(n)<<endl;
}
