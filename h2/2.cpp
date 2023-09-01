#include <iostream>
using namespace std;

int main(){
	int j, m, d;
	
	cout<<"Masukkan Jam : ";
	cin>>j;
	
	cout<<"Masukkan Menit : ";
	cin>>m;
	
	cout<<"Masukkan Detik : ";
	cin>>d;
	
	cout<<j * 3600 + m * 60 + d<<endl;
	
	return 0;
}