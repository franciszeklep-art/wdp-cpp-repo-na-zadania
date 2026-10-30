#include <iostream>
using namespace std;

int main() {
   int a,b,wynik;
   char znak;

   cout << "Podaj pierwsza liczbe: ";
   cin >> a;
   cout << "Podaj znak działania: +, -, *, / albo %:  ";
   cin >> znak;
   cout << "Podaj drugą liczbe: ";
   cin >> b;

   if (znak=='+'){
   wynik = a+b;
   cout << "Wynik twojego dzialania to: " << wynik << endl;
   }

   else if (znak=='-'){
    wynik = a-b;
   cout << "Wynik twojego dzialania to: " << wynik << endl;
   }
   else if (znak=='*'){
    wynik = a*b;
   cout << "Wynik twojego dzialania to: " << wynik << endl;
   }
   else if (znak=='/'){
    wynik = a/b;
   cout << "Wynik twojego dzialania to: " << wynik <<endl;
   }

   else if (znak='%'){
    if(b==0){
    cout << "Blad-dzielenie przez zero";
    }
    else{
    wynik = a%b;
   cout << "Wynik twojego dzialania to: " << wynik << endl;
    }
   }
   

   
    return 0;
}