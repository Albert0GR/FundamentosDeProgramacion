#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i=0;
    int suma=0;
    float promedio=0;
    int n,numero,mayor,menor;
      cin>>n;
    for(i=1;i<n+1;i++){

        cin>>numero;
        suma=suma+numero;
        if(i==1){
            mayor=numero;
            menor=numero;
        }else{
             if(numero>mayor) mayor=numero;
             if(numero<menor) menor=numero;
        }
    }
    promedio=(suma*1000)/n;
    promedio=promedio/1000;
    cout<<suma<<" ";
    cout << fixed << setprecision(2) << promedio;
    cout<<" "<<mayor<<" "<<menor<<endl;
    cout<<"fin del programa";


    return 0;
}
