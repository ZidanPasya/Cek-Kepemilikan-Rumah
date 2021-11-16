#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	
	int n, i;
	cout << "Banyaknya Rumah Griya Asri : ";
	cin >> n;
	cin.ignore(512, '\n');
	string a[n];
	string b[n];
	string c[n];
	string d[n];
	
	cout << " " << endl;
	if (n%2 == 0){
		for (i = 0; i < n; i++){
			cout << "Masukkan nama pemilik rumah : ";
			getline(cin, a[i]);
			cout << "Masukkan alamat pemilik rumah : ";
			getline(cin, b[i]);
		}
	}
	else {
		for (i = 0; i < n; i++){
			cout << "Masukkan nama pemilik rumah : ";
			getline(cin, a[i]);
			cout << "Masukkan alamat pemilik rumah : ";
			getline(cin, b[i]);
		}
	}
	cout << " " << endl;
	for (i = 0; i < 1; i++){
		cout << "Masukkan nama pemilik rumah yang ingin dicek : ";
		getline(cin, c[i]);
		cout << "Masukkan alamat pemilik rumah yang ingin dicek : ";
		getline(cin, d[i]);
	}
	cout << " " << endl;
		if ((a[0] == c[0] && b[0] == d[0]) || (a[1] == c[0] && b[1] == d[0])) {
			cout << "Rumah ditemukan";
		}
		else {
			cout << "Rumah tidak ditemukan";
		}
}
