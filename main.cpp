#include <iostream>

using namespace std;

void number_of_products_div() {

long long int n(0), cur(0);
long long int n165(0), n55(0), n33(0), n15(0), n11(0), n5(0), n3(0), n0(0);
cin >> n;
for (int i(0); i < n; ++i) {
    cin >> cur;
    if (cur % 165 == 0)
        n165++;
    else if (cur % 55 == 0)
        n55++;
    else if (cur % 33 == 0)
        n33++;
    else if (cur % 15 == 0)
        n15++;
    else if (cur % 11 == 0)
        n11++;
    else if (cur % 5 == 0)
        n5++;
    else if (cur % 3 == 0)
        n3++;
    else
        n0++;
}
cout << n165 * (n165 - 1) / 2 + n165 * (n55 + n33 + n15 + n11 + n5 + n3) + (n55 * n33 + n55 * n15 + n33 * n15) + (n55 * n3 + n33 * n5 + n15 * n11) + n0 * n165;
}

int main()
{
number_of_products_div();
return 0;
}
