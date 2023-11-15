// lab6.2.2.cpp
// Кузьмінська Єлизавета
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 10
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void Create(int* a, const int n, int Low, int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(a, n, Low, High, i + 1);
}
int Kil(int* a, const int n, int i, int m, int S)
{
	if (i % 2 == 0) {
		m++;
		S += a[i];
	}
	if (i < n - 1)
		Kil(a, n, i + 1, m, S);
	else return S;
}
void Print(int* a, const int n, int i) {
	cout << setw(4) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;

}
int main() {
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];
	int S;
	int Low = 15;
	int High = 85;

	Create(a, n, Low, High, 0);
	S = Kil(a, n, 0, 0, 0);
	Print(a, n, 0);
	cout << "Ressult: " << 2. * S / n << endl;
}
