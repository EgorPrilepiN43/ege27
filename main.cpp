#include <iostream>
#include <vector>
using namespace std;
void number_of_products_div()
{
    /*
    1.+Считать числа
    2.+Вывести все числа
    3.вывести все пары
    4.Вывести тольео достаточно далекие пары
    5.Вместо вывода пар - выводим сумму
    6.Минимальная сумма - ответ
	*/
    int n(0);
    cin >> n;
    vector <int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    cout << endl;
    for (int i(0); i<n; i++)
        cout << numbers[i] <<" ";

}


int main()
{
    number_of_products_div();
    return 0;
}
