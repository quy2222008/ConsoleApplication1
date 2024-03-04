#include <iostream>
using namespace std;
int main() {
	int  sodau, socuoi;
	cout << "Nhap sodau:";
	cin >> sodau;
	cout << "vong lap while\n";
	cin >> socuoi;
	cout << "vong lap while\n";
	while (sodau <= socuoi)
	{
		cout << sodau << " ";
	}

	cout << "\n vong lap do while\n";
	do
	{
		cout << sodau << " ";
		sodau++;
	} while (sodau <= socuoi); // 50<= 40 ==> false


	return 0;
}
