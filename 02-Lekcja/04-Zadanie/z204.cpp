#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe sekund: ";
    cin >> n;
    cout << "Liczba minut: " << n / 60 << endl;
    cout << "Liczba pozostałych sekund: " << n % 60 << endl;
    return 0;
}