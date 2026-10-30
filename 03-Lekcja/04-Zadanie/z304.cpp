#include <iostream>
using namespace std;

int main() {
    double a,b,c,d,e;
    int i=0;

    cout << "Podaj piec ocen aby obliczyc srednia: ";
    cin >> a >> b >> c >> d >> e;

    if (a==1){
        i++;
    }
    if (b==1){
        i++;
    }
    if (c==1){
        i++;
    }
    if (d==1){
        i++;
    }
    if (e==1){
        i++;
    }
    cout << "Srednia ocen wynosi " << (a+b+c+d+e)/5 << ", natomiast liczba ocen niedostatecznych jest rowna " << i << endl;

    return 0;
}