#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasikan variabel global array a dengan ukuran 20
int n; // Deklarasikan variabel global n untuk menyimpan banyaknya elemen array
void input() {		//procedur untuk input

	while (true) {
		cout << "Masukan banyaknya elemen pada array : " // output ke layar
		cin >> n; // input dari pengguna
		if (n <= 20)// jika n kuranag dari atau sama dengan 20
			break; // keluar dari loop
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n" // output ke layar


		}
	

	  }


		cout << endl;
		cout << "=================" << endl;
		cout << "Masukan Elemen Array" << endl;
		cout << "=================" << endl;

		for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n-1
			cout << " Data ke-" << (i + 1) << ":" // Output ke Layar
				cin >> arr[i]; // output dari pengguna
		}


}



