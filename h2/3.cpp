#include <iostream>
using namespace std;

int main(){
	int total, j, sj, m, sm, d;
	
	cout<<"Masukkan total detik : ";
	cin>>total;
	
	sj = total % 3600;
	j = (total - sj) / 3600;
	
	sm = sj % 60;
	m = (sj - sm) / 60;
	
	d = sm;
	
	cout<<j<<" Jam, "<<m<<" Menit, "<<d<<" Detik."<<endl;
	
	return 0;
}