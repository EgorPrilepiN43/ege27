#include <iostream>
#include <vector>

using namespace std;

void num_sum_itog_ineff()
{

    /*
    ++1. Вводим и выводим числа правильно, согласно условию
    2.
    3.
    4.

    */
    int n(0);
    cin >> n;
    vector<int> numbers(n,0);
    int min_sum(4);
    int cnt(0);
    int res(1001);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    cout << endl;
    for (int i(0); i<n; i++)
        cout << numbers[i] <<" ";
}
int main()
{
    num_sum_itog_ineff();
    return 0;
}
