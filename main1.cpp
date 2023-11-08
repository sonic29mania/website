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

    eps = 0.000001; // ������� ���������

    xp = 0.1; // ��������� �������� x
    xk = 1; // ʳ����� �������� x
    n = 10; // ʳ������ ��������� n

    dn = (xk - xp) / n; // ���������� �����

    cout << "dn = " << dn << endl << endl;

    cout<<"�������� 2. ������� , �� ���� S ����������� �������� ������� Y ��� �������� �\n������� ����� � �������� ��������� ���� ������� S � � � �������� �������\n���� ��������� x. ��� n - ����� ������� ���� S. ��������� ��������� ������� � \n���� �������� �������:"<<endl;
    cout<<"d=1+x^2/2!+x^4/4!..."<<endl<<endl;
    cout << "dn = " << dn << endl << endl;

    cout << "=============================================" << endl;
    cout << "|  x   |     y     |       s      |   y-s   |" << endl;
    cout << "=============================================" << endl;

    x = xp; // ��������� �������� x

    while (x < xk)
    {
        y = (exp(x)+exp(-x))/2; // ���������� �������� y
        m = 1;
        s = 0;
        f = 1;
        do
        {
            for (i = 1; i <= 2*m-2; i++) f *= i;
            d = (pow(x,m*2))/f; // ���������� ������� d
            s += d; // �������������� s
            m++;
            it++;
        } while (fabs(d) >= eps);

        cout << " -------------------------------------------" << endl;
        cout << "|" << setw(6) << setprecision(3) << x << "|  " << setw(7) << setprecision(5) << fixed
        << y << "  |" << setw(12) << fixed << setprecision(8) << s << "  |" << setw(4) << fixed <<
        setprecision(4) << y - s << "  | " << endl;

        x += dn; // ��������� x �� ���� dn
        it_++; // ��������� ��������
    }

    cout << "=============================================" << endl << endl;
    cout << "ʳ������ �������� ����������� �����: " << it << endl; // ʳ������ �������� ��
    cout << "ʳ������ �������� ���������� �����: " << it_ << endl; // ʳ������ �������� ��

    return 0;
}
