#include <stdio.h> 
#include <iostream> 
#include <locale.h> 
#include <windows.h> 
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE,"Russian");
    double plus, minus, pow, div; 
    double a; 
    double b; 
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    plus  = a + b;  
    minus = a - b;  
    pow  = a * b;  
    div  = a / b;  
    cout << a << "+" << b << "=" << plus  << endl;
    cout << a << "-" << b << "=" << minus << endl;
    cout << a << "*" << b << "=" << pow  << endl;
    cout << a << "/" << b << "=" << div  << endl;
    system("pause");
    return 0;
}