// Lizogub Matvety
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	/*дана матрица N x M и целое чило K (1<=K <=N). Заполнить
	матрицу случайными числами из диапозона от 1 до 9. Вывести
	матрицу на экран и найти сумму элементов K - до столбца данной матрицы.*/
	const int n = 6;
	const int m = 8;
	int k;
	int l = 0;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 19-18  ;
			if (j == k -1)

			cout <<  mas[i][j] << " ";
			{l* mas[i][j]; }
		}
		cout << endl;
	}
	cout << l;
	return 0;
}