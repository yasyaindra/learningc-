#include <iostream>
using namespace std;
int deret (int n)
{
	if (n==1){
	return (n);
	}else {
		return (n + deret(n-1));
	}
}
int main(){
	int b,n;
	cout<<"Silahkan input baris bilangan deret :";
	cin>>n;
	for(b=1 ; b<=n ; b++){
		if (b==1)
		cout<<b;
		else
		cout<<"+"<<b;
				
	}
	cout<<"="<<deret(n)<<endl;
	
}
