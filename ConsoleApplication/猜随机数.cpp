
#include <iostream>

using namespace std;


int main()
{
	//设置随机种子,否则出现伪随机数（即每次随机数一样）
	srand((unsigned int)time(0));
	//随机数
	int sjnum = rand() % 100 + 1;
	int num1 = 0;
	cout << "请输入数值"  << endl;
	while (1) {
		cin >> num1;
		if (sjnum > num1) {
			cout << "猜的过小，请重新猜" << endl;
		}
		else if (sjnum < num1) {
			cout << "猜的过大，请重新猜" << endl;
		}
		else if (sjnum == num1) {
			cout << "恭喜猜对了" << endl;
			break;
		}
	}
	return 0;
}


