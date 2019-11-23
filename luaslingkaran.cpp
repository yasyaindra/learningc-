#include <iostream>
using namespace std;

void luasLingkaran() {
	int r;
	float phi = 3.14;
	cout << "masukkan jari jari ";cin>>r;
	cout << "hasilnya adalah "<<phi *r*r;
}

int main () {
	cout<<"\n";
	cout<<"    ++++++++++++++++++++"<<endl;
	cout<<"    +  Luas Lingkaran  +"<<endl;
	cout<<"    ++++++++++++++++++++"<<endl;
	cout<<"\n";
	luasLingkaran();
}
