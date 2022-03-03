#include <iostream>
using namespace std;

int a[10][2];

int& rf(int i) {
	return a[i][1];
}
int &rmax(int arr[], int length) {
	int imax = 0;
	for (int i = 1; i < length; i++)
		if (arr[i] > arr[imax])
			imax = i;
	return arr[imax];
}
void z1(int &nref, int &mref) {
	if (nref > mref) {
		nref*= nref;
		mref*=mref;
	}
	else {
		nref = 0;
		mref = 0;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	
	/*cout << "Ввод значений в массив. \n";
	for (int i = 0; i < 10; i++) {
		cout << "Введите " << i << " элемент: ";
		cin >> a[i][0];
		rf(i) = a[i][0];
	}
	cout << "Итоговый массив: \n";
	for (int i = 0; i < 10; i++) {
		cout << a[i][0]<< "\t" << rf(i) << endl;
	}*/

	/*int arr[5] = {4, 10, 7, 11, 0};
	cout << "Изначальный массив: \n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
	
	cout << "Макс = "<< rmax (arr, 5) << endl;
	rmax(arr, 5) = 0;
	cout << "Итоговый массив: \n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";*/

	// Задача 1
	/*cout << "Введите два числа: ";
	int a, b;
	cin >> a >> b;
	z1(a, b);
	cout << a << " " << b << "\n\n";*/

	// Задача 2
	cout << "Первый массив: \n[";
	int z2_1[5]{ 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
		cout << z2_1[i] << ", ";
	cout << "\b\b]\n Второй массив: \n[";
	int z2_2[5];
	int* p1 = &z2_1[0];
	int* p2 = &z2_2[0];
	for (int i = 0; i < 5; i++) 
		*(p2 + 4 - i) = *(p1 + i);
	for (int i = 0; i < 5; i ++)
		cout << *(p2 + i) << ", ";
	
	cout << "\b\b]\n ";


	return 0;
}