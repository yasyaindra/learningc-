#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int a[10]={1,2,3,4,5,6,7,8,10};
	int total=0;
	
	cout << "data array yang berisi data angka\n";
	for (int i=0;i<10;i++) {
		cout<<"a["<<i<<"]: "<<a[i];
		cout<<endl;
		total += a[i];
	}
	cout << "\n\nTotal keseluruhan :"<<total;
	return 0;
}
