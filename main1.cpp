#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double eps, n, xk, xp, x, y, s, d, dn, m, f, i;
    int it = 0, it_ = 0;

    eps = 0.000001; // Точність порівнення

    xp = 0.1; // Початкове значення x
    xk = 1; // Кінцеве значення x
    n = 10; // Кількість інтервалів n

    dn = (xk - xp) / n; // Визначення кроку

    cout << "dn = " << dn << endl << endl;

    cout<<"Завдання 2. Довести , що сума S дорівнюється значенню функції Y при заданому Х\nСкласти схему і програму табуляції двох функцій S і У в заданому діапазоні\nзміни аргументу x. Тут n - число доданків суми S. Результат табуляції вивести у \nформі наступної таблиці:"<<endl;
    cout<<"d=1+x^2/2!+x^4/4!..."<<endl<<endl;
    cout << "dn = " << dn << endl << endl;

    cout << "=============================================" << endl;
    cout << "|  x   |     y     |       s      |   y-s   |" << endl;
    cout << "=============================================" << endl;

    x = xp; // Початкове значення x

    while (x < xk)
    {
        y = (exp(x)+exp(-x))/2; // Обчислення значення y
        m = 1;
        s = 0;
        f = 1;
        do
        {
            for (i = 1; i <= 2*m-2; i++) f *= i;
            d = (pow(x,m*2))/f; // Обчислення доданка d
            s += d; // Обчисленнясуми s
            m++;
            it++;
        } while (fabs(d) >= eps);

        cout << " -------------------------------------------" << endl;
        cout << "|" << setw(6) << setprecision(3) << x << "|  " << setw(7) << setprecision(5) << fixed
        << y << "  |" << setw(12) << fixed << setprecision(8) << s << "  |" << setw(4) << fixed <<
        setprecision(4) << y - s << "  | " << endl;

        x += dn; // Збільшення x на крок dn
        it_++; // Рахування ітерацій
    }

    cout << "=============================================" << endl << endl;
    cout << "Кількість ітерацій внутрішнього циклу: " << it << endl; // Кількість ітерацій вц
    cout << "Кількість ітерацій зовнішнього циклу: " << it_ << endl; // Кількість ітерацій зц

    return 0;
}
