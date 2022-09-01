# Omega up

## Problema 1 
>Suma de enteros 

### Código:

```c
#include <iostream>
using namespace std;
int main() {
      int a,b;
      float suma=0;
    cin>>a;
    cin>>b;
    if((a>=-2147483650 && a<=2147483650)||(b>=-2147483650 && b<=2147483650))
    {
      suma=(float)a+(float)b;
    cout<<suma<<endl;
    }
    else{
       return 0 ;
    }
  
 
}
```

### Ejecución
![image](img/p1_ejec.jpg)

![image](img/p1_score.jpg)

### Diagrama de flujo
![image](img/p1_Diagrama%20de%20flujo.png)