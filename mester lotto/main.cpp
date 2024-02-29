#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>


using namespace std;

bool prim (int x);


int main()
{
    cout << '#';
    ///1. feladat
    srand(time(NULL));
    int i, n=52*5;

    int x[n];
    for(i=0; i<n; ++i)
    {

        x[i]=rand()%(90-1+1)+1; ///1 helyett lehet 0
        cout << x[i] << "\t";
        if ((i+1)%5==0)
        {
            cout << endl;
            cout << "#";
            cout << endl;
        }

    }


    int j,temp;


    for (i=n-5; i<n-1; i++)
    {
        for (j=n-5; j<n-1; j++)
        {
            if (x[j]>x[j + 1])
            {
                temp=x[j];
                x[j]=x[j + 1];
                x[j+1]=temp;
            }
        }
    }




    for(i=n-5; i<n; ++i)
    {
        cout << x[i] << "\t";
    }

    cout <<endl;
    cout << '#';
    cout << endl;

/// 2. Feladat


    int hetk, hetv;
    cin >> hetv;

    hetk = (hetv - 1) * 5;


    for (i = hetk; i < hetk + 5; i++)
    {
        for (j = hetk; j < hetk + 5 - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    for (i = hetk; i < hetk + 5; i++)
    {
        cout << x[i] << " ";
    }


    int ossz=0;
    cout << endl;
    cout << '#';
    cout <<endl;
///3. Feladat

    int stat[91]= {};

    for(i=1; i<=90; ++i)
    {
        for(j=0; j<=n; ++j)

            if (x[j]==i)
            {
                ++stat[i];

            }
        cout << stat[i] << " ";
        ossz=ossz+stat[i];
    }
     cout <<endl;
    cout << '#';
    cout << endl;
    cout << ossz;
      cout <<endl;
    cout << '#';
    cout << endl;

    i=0;
    while (i<90 && !(stat[i]==0))
    {
        ++i;
    }

    if (i<=90)
    {
        cout << "van" ;
          cout <<endl;
    cout << '#';

    }
    else
    {
        cout << "nincs" ;
          cout <<endl;
    cout << '#';


    }



    cout << endl;
///4. Feladat


    int db=0;
    for(i=1; i<=90 ; i+=2)
    {
        db=db+stat[i];
    }
    cout << db;

     cout <<endl;
    cout << '#';
    cout << endl;
    ///6. feladat
    /*
        while (i<90 && !(stat[i](prim)))
        {
            ++i;
        }
    */
    return 0;
}

bool prim (int x)
{
    int i=2;
    while((i<=x/2) && !(x%i==0))
    {
        ++i;
    }
    return !(i<=x/2);
}

