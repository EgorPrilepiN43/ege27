#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    + 1. Считать и сохранить все числа
    + 2. Вывести все пары
    + 3. Вместо пары вывести суммы
    4. Проверить делимость суммы
    5. Вывести только ответ
    */


    int(n);
    ifs >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        ifs >> numbers[i];
    cout<<endl;
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n; i++)
            if ((numbers[i] + numbers[j])%2 != 0)
            cout << numbers[j] + numbers[i] << endl;

}

int main()
{
    max_sum_div();
    return 0;
}
