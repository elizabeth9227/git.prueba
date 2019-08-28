#include <iostream>

using namespace std;

int main()
{

    char letra;

    for(int i=0;i<7; i++)
    {
        letra='A';

        for(int j=0; j<=i; j++)
        {
           cout<<letra;
           letra++;
        }
        //Ciclo para los espacios en blanco

        for (int j=0; j<11-2*i ; j++)
            cout<< ' ';


        letra='A'+i;

        for(int j=0; j<=i; j++)
        {
            if(letra!='G')
                cout<<letra;

           letra--;
        }
        cout<<endl;
    }
    //cout << "Hello World!" << endl;
    return 0;
}
