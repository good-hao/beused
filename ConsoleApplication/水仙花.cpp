#include <iostream>

using namespace std;

int main()
{
	int num =100;
	while (num<1000)
	{
		/*
			pow(a,b)次方，表示a^b，num / 100百位数，num /10 % 10十位数
			num % 10个位数
		*/
		if ((pow(num / 100, 3) + pow(num /10 % 10, 3) + pow(num % 10, 3))==num) {
			cout << num << endl;
		}
		num++;
	}
}

