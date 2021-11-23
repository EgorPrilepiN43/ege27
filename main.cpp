#include <iostream>
using namespace std;
void number_of_products_div()
{
    /*
	1 считываем входные данные и выводим их
	2 находим делители 30
	3 если входное число делится на найденный делитель, то прибавляем +1
	4 выводим количество пар
	*/
	long long int n(0), cur(0);
	long long int n30(0), n2(0), n3(0), n5(0), n6(0), n10(0), n15(0), no(0);
    cin >> n;
    for (int i(0); i<n; i++)
    {
        cin >> cur;
        if (cur % 30 == 0)
			n30++;
		else if (cur%2==0)
			n2++;
		else if (cur%3==0)
			n3++;
        else if (cur%5==0)
			n5++;
        else if (cur%2==0 and cur%3==0)
			n5++;
    }
    no = n - n30 - n2 - n3 - n5;
    cout << (n30*(n30-1)/2)  +  n30*no  +  n30*n2  +  n30*n3  +  n30*n5  +
}

int main()
{
    number_of_products_div();
    return 0;
}
