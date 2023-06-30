
#include <iostream>
using namespace std;

//ц╟ещеепР
int main()
{
    int arr[] = { 6,8,1,3,5,11,30,17 };

    //int lenth = sizeof(arr) / sizeof(arr[0]);
    int lenth = end(arr) - begin(arr);

    for (int i = 0; i < lenth - 1; i++) {
        for (int j = 0; j < lenth-i-1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < lenth; i++) {
        cout << arr[i] << ",";
    }

    cout << endl;
    

}