#include <iostream>
#include <cstdlib>
using namespace std;

int pangkat(int a,int b) {
	if (b==0) {
		return 1;
	} else {
		return a*pangkat(a,b-1);
	}
}

int main() {
	int a,b;
	cout<<"Masukkan angka: ";cin>>a;
	cout<<"Pangkat berapa?: ";cin>>b;
	cout << pangkat(a,b);
}

