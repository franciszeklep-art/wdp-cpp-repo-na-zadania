#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
double a, b, c, d, e, srednia;
cout <<"Podaj piec liczb aby obliczyc srednia:  ";
cin >> a >> b >> c >> d >> e;

srednia = (a+b+c+d+e)/5;

cout << fixed << setprecision(2);
cout << "Twoja srednia to" << srednia<< endl;

    return 0;
}