
#include <iostream>
using namespace std;

//逆置数组
int main()
{
    int arr[] = { 6,8,1,3,5 };

    int start = 0;
    int last = end(arr) - begin(arr) - 1;

    while (start < last)
    {
        int temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

}