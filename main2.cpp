/*#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>


using namespace std;
/*Приклад 1. Дослідити способи консольного введення й виводу двовимірних
масивів. Необхідно ввести із клавіатури матрицю А розмірністю MN до пам’яті
комп`ютера й вивести цю інформацію на дисплей.*/
/*int main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int n, m;//n- кількість рядків матриці, m- кількість стовбців
    cout<<"Кількість рядків матриці n: ";// вводемо з клавіатури n
    cin>>n;
    cout<<endl;
    cout<<"Кількість стовбців матриці m: ";// вводемо з клавіатури m
    cin>>m;
    cout<<endl;
    int i, j, a[n][m], p=-20, k= 30;

    cout<<"Випадкові числа матриці :";
    for(i=0; i<n; i++)
        {
        for(j=0; j<m; j++)
            {
            a[i][j] =p + rand() % (k - p) + 1;// випадкові числа матриці/масиву
            cout<<setw(5)<<a[i][j];
            }
        }
        cout<<endl;
        cout<<"Матриця:"<<endl;
        for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)cout<<setw(5)<<a[i][j];
                cout<<endl;

            }
        cout<<endl;
    return 0;
}*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>


using namespace std;
/*Приклад 1. Дослідити способи консольного введення й виводу двовимірних
масивів. Необхідно ввести із клавіатури матрицю А розмірністю M*N до пам’яті
комп`ютера й вивести цю інформацію на дисплей.*/
int main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int n, m;//n- кількість рядків матриці, m- кількість стовбців
    cout<<"Кількість рядків матриці n: ";// вводемо з клавіатури n
    cin>>n;
    cout<<endl;
    cout<<"Кількість стовбців матриці m: ";// вводемо з клавіатури m
    cin>>m;
    cout<<endl;
    int i, j, a[n][m], p=-20, k= 30;

    cout<<"Випадкові числа матриці :";
    for(i=0; i<n; i++)
        {
        for(j=0; j<m; j++)
            {
            a[i][j] =p + rand() % (k - p) + 1;// випадкові числа матриці/масиву
            cout<<setw(5)<<a[i][j];
            }
        }
        cout<<endl;
        cout<<"Матриця:"<<endl;
        for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)cout<<setw(5)<<a[i][j];
                cout<<endl;

            }
        cout<<endl;
    return 0;
}
