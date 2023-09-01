#include <iostream>
using namespace std;

int main(){
	int kecAwal, lama, kecTam, i;
	
	cout<<"Masukkan kecepatan awal..."<<endl;
	cin>>kecAwal;
	
	cout<<"Masukkan waktu bersepeda..."<<endl;
	cin>>lama;
	
	cout<<"Masukkan kecepatan tambahan..."<<endl;
	cin>>kecTam;
	
	for (i = 1; i <= lama; i++){
		if(i != 0 && (i-1) % 10 == 0) {
			kecAwal = kecAwal + kecTam;
		}
		cout<<"Detik ke -"<<i<<endl;
		cout<<kecAwal<<" Meter"<<endl;
		cout<<endl;
	}
	
	return 0;
}