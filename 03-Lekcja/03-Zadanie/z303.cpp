#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    if (b==0){
        cout << "Blad - dzielenie przez 0" << endl;

    }
    else if (a%b==0){
        cout << "Pierwsza liczba jest podzielna przez druga" << endl;
    }
    else if (a%b!=0){
        cout << "Pierwsza liczba nie jest podzielna przez druga." << endl;
    }

    return 0;
}