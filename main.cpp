#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>


using namespace std;
/*������� 1. �������� ������� ����������� �������� � ������ ����������
������. ��������� ������ �� ��������� ������� � ��������� M*N �� �����
����`����� � ������� �� ���������� �� �������.*/
int main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int n, m, max, min, indexi, indexj, indexk, indexl;//n- ������� ����� �������, m- ������� ��������
    cout<<"ʳ������ ����� ������� n: ";// ������� � ��������� n
    cin>>n;
    cout<<endl;
    cout<<"ʳ������ �������� ������� m: ";// ������� � ��������� m
    cin>>m;
    cout<<endl;
    int i, j, a[n][m], p=-20, k= 50;

    cout<<"�������� ����� ������� :";
    for(i=0; i<n; i++)
        {
        for(j=0; j<m; j++)
            {
            a[i][j] =p + rand() % (k - p) + 1;// �������� ����� �������/������
            cout<<setw(5)<<a[i][j];
            }
        }
        cout<<endl;
        cout<<"�������:"<<endl;
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
    cout<<"̳��������  = "<<min<< endl;
    cout<<"����� ���������� �������� ������ = "<<indexi<< endl;
    cout<<"�������� ���������� �������� ������ = "<<indexj<< endl<<endl;

    cout<<"������������ ������� ������ = "<<max<< endl;
    cout<<"�����  ������ = "<<indexk<< endl;
    cout<<"�������� ���������� �������� ������ = "<<indexl<< endl;
    return 0
}

