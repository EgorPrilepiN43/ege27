#include <iostream>
#include <vector>

using namespace std;


void max_sum_div()
{
    /**
    + 1. Считать и сохранить все числа
    2. Вывести все пары
    3. Вместо пары вывести суммы
    4. Проверить делимость суммы
    5. Вывести только ответ
    */


    int(n);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    cout << endl;
    for (int i(0); i<n; i++)
        cout << numbers[i] <<" ";

}

int main()
{
    max_sum_div();
    return 0;
}
