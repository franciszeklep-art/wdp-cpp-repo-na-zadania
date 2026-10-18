#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n;
    cout << "Podaj liczbe rzeczywistą: ";
    cin >> n;

    cout << fixed << setprecision(1) << n << endl;
    cout << fixed << setprecision(3) << n << endl;
    cout << fixed << setprecision(5) << n << endl;



    return 0;
}