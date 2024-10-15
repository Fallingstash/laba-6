/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


float srznach(int a, int b)
{
    int R[a][b] = {};
    int L[a][b] = {};
    cout << "Введите сначала элементы первой матрицы, а затем второй" << endl;
    int i, j, schetchik1, schetchik2;
    float sz1, sz2;
    schetchik1 = schetchik2 = sz2 = sz1 = 0;
    for(i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            cin >> R[i][j];
    }
    for(i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            cin >> L[i][j];
    }
    cout << "Ваша матрица 1" << endl;
    for (i = 0; i < a; i++) 
	{  
		for (j = 0; j < b; j++)
            cout << R[i][j] << " ";
	    cout << endl;
	}
	cout << "Ваша матрица 2" << endl;
	for (i = 0; i < a; i++) 
	{  
		for (j = 0; j < b; j++)
            cout << L[i][j] << " ";
	    cout << endl;
	}
	for (i = 0; i < a; i++) 
	{  
		for (j = 0; j < b; j++)
		{
		    if (R[i][j] > 0)
		    {
		        schetchik1++;
		        sz1 = sz1 + R[i][j];
		    }
		}
	}
	for (i = 0; i < a; i++) 
	{  
		for (j = 0; j < b; j++)
		{
		    if (L[i][j] > 0)
		    {
		        schetchik2++;
		        sz2 = sz2 + L[i][j];
		    }
		}
	}
	sz1 = sz1 / schetchik1;
	sz2 = sz2 / schetchik2;
	cout << "Среднее значение положительных чисел в первой матрице " << sz1 << " А во второй " << sz2 << endl;
    return 0;
}

int main()
{
    int k, n;
    cout << "Введите колличество строк, а за тем колличество столбцов" << endl;
    cin >> k >> n;
    srznach(k, n);
}