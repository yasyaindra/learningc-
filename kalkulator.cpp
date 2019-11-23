#include <iostream>
#include <cstdlib>
using namespace std;

void penjumlahan() {
	int a,b;
	cout << "Masukkan angka pertama ";cin>>a;
	cout << "Masukkan angka kedua ";cin>>b;
	cout << "Hasilnya adalah \n" << a + b;
}

void pengurangan() {
	int a,b;
	cout << "Masukkan angka pertama ";cin>>a;
	cout << "Masukkan angka kedua ";cin>>b;
	cout << "Hasilnya adalah " << a - b;
}

void perkalian() {
	int a,b;
	cout << "Masukkan angka pertama ";cin>>a;
	cout << "Masukkan angka kedua ";cin>>b;
	cout << "Hasilnya adalah " << a * b;
}

void pembagian() {
	int a,b;
	cout << "Masukkan angka pertama ";cin>>a;
	cout << "Masukkan angka kedua ";cin>>b;
	cout << "Hasilnya adalah " << a / b;
}


 int main () {
 	int kode;
 	 menu :
	cout<<"\n"; 	 	
	cout<<"\n";
 	cout<<"          ========================"<<endl;
 	cout<<"          = Kalkulator Sederhana ="<<endl;
 	cout<<"          ========================"<<endl;
 	cout<<"Pilihan Menu"<<endl;
 	cout<<"1. Penjumlahan"<<endl;
 	cout<<"2. Pengurangan"<<endl;
 	cout<<"3. Perkalian"<<endl;
 	cout<<"4. Pembagian"<<endl;
 	cout<<"5. Kosongkan layar"<<endl;
 	cout<<"masukkan kode "; cin >> kode;
 		if (kode>5 || kode<1)	{
 			cout<<"\n kode yang anda masukkan tidak ada \n silahkan masukkan ulang kode";
 			system("pause");
 			system("cls");
 			goto menu;
		 } else if (kode == 1){ 
		 	cout << endl;
		 	penjumlahan();
		 	goto menu;
		 	cout << "\n";
		} else if (kode == 2) {
			pengurangan();
			goto menu;
			cout << "\n";
		} else if (kode == 3) {
			perkalian();
			goto menu;
			cout << "\n";
		} else if (kode == 4) {
			pembagian();
			goto menu;
			cout << "\n";
		} else if (kode == 5){
			system("cls");
			goto menu;
		} else {
			cout << "salah masukkan";
			system("pause");
		}
 
}
