#include <iostream>
#include <vector>

using namespace std;

void numbers_of_products_div()
{
    /**
    1. + Считать и запомнить входные данные
    2. + Вывести все пары чисел
    3. + Вместо вывода пар посчитать произведение
    4. Вывести пары, произведение кторых равны 15
    5. Только коллличество пар
    */

    int n(0);
    cin >> n;
    vector<int> numbers (n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];

    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n; i++)
            cout << numbers[j] * numbers[i] << endl;

}
int main()
{
    numbers_of_products_div();
    return 0;
}
