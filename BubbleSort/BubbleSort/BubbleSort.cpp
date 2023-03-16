#include <iostream>
using namespace std;


int a[20];         // Deklarasi array a dengan ukuran 20
int n;             // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {     // method untuk input
	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
		cin >> n;  // inpuut dari pengguna
		if (n <= 20)  // jika n kurang dari atau sama dengan 20
			break;    // keluar dari loop
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}
}

void display() {
	cout << endl;
	cout << "==============================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==============================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}
void bubbleSortArray() {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main() {
	//membuat objek obj dari class BubbleSort
	input();
	bubbleSortArray();
	display();
	return 0;
}