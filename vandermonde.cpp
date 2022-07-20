
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main(){
    system("cls");
    cout<<"\033[1;32m";
    double V[100], M[100][100], n, det=1;
    cout<<"\n\tUNIVERSIDAD MAYOR DE SAN ANDRES";
    cout<<"\n\tFACULTAD DE INGENIERIA";
    cout<<"\n\tLABORATORIO DE PROGRAMACION";
    cout<<"\n\tEST: FLORES QUISPE NILO";
    cout<<"\033[0m";
    cout<<"\n\n\tINTRODUCE LA MATRIZ (dimenciones) = ";
    cin>>n;

    for(int i=0; i<=n-1; i++){
        cout<<"\n\tintrodusca el termino  "<<i<<" = ";
        cin>>V[i];
    }

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            M[j][i]=pow(V[i],j);
        }
    }
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            det = det*(V[i]-V[j]);
        }
    }

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<"\033[1;33m";
            //cout<<"\t";
            cout<<"\t"<<M[i][j]<<" ";
            cout<<"\033[0m";
        }
        cout<<"\t\n";
    }
    cout<<"\033[1;31m";
    cout<<"\tdeterminante =  "<<det;
    cout<<"\033[0m";
    cout<<"\n\n";

    return 0;
}


