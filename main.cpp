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


    int n, m, max, min, indexi, indexj, indexk, indexl;//n- кількість рядків матриці, m- кількість стовбців
    cout<<"Кількість рядків матриці n: ";// вводемо з клавіатури n
    cin>>n;
    cout<<endl;
    cout<<"Кількість стовбців матриці m: ";// вводемо з клавіатури m
    cin>>m;
    cout<<endl;
    int i, j, a[n][m], p=-20, k= 50;

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
        min=0;
        max=0;
        indexi=0;
        indexj=0;

        indexk=0;
        indexl=0;

        for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                    {

                        if(a[i][j]>max)
                        {
                            max=a[i][j];
                            indexk=i;
                            indexl=j;


                        }
                        if(a[i][j]<min)
                        {
                            min=a[i][j];
                            indexi=i;
                            indexj=j;

                        }
            }
        }
        cout<<endl;
    cout<<"Мінімальний  = "<<min<< endl;
    cout<<"Рядок мінімального елементу масиву = "<<indexi<< endl;
    cout<<"Стовбець мінімального елементу масиву = "<<indexj<< endl<<endl;

    cout<<"Максимальний елемент масиву = "<<max<< endl;
    cout<<"Рядок  масиву = "<<indexk<< endl;
    cout<<"Стовбець мінімального елементу масиву = "<<indexl<< endl;
    return 0
}

