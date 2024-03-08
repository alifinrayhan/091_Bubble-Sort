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
void bubblesortArray() { // Procedur untuk mengurutkan array dengan metode bubble sort
	int pass = 1; // step 1

	do {
		for (int j = 0; j <= n - 1 - pass; j++) { // step 2
			if (arr[j] > arr[j + 1]) { //step 3
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
		pass = pass + 1; // step 4

		cout << "\nPass" << pass - 1 << ":";
		for (int k = 0; k < n; k++) {



		}
		cout << endl;

	} while (pass <= n - 1);


}
void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << " Element Array Yang telah tersusun" << endl;
	cout << "==================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j]; // menampilkan array
		if (j < n - 1) {
			cout << "-->";

		}
	}
	cout << endl;
	cout << endl;

	cout << " Jumlah pass = " << n - 1 << endl;
	cout << endl;
	cout << endl;



}

