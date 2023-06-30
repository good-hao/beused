#include <iostream>

using namespace std;

int main()
{
	//正序排列
	/*for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << j * i <<"\t";
		}
		cout << endl;
	}*/

	for (int i = 9; i > 0; i--) {
		for (int j = 9; j >= i; j--)
		{
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}
}

