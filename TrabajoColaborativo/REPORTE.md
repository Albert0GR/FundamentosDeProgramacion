# FundamentosDeProgramacion
## Examen de funciones


## Funcion principal **main()**

>El siguiente codigo muestra los programas vistos en clase , implementados como funciones.Mientras en la funcion **main()** se implementa un menu con las opciones a seleccionar que invocan las funciones mostradas a continuacion

### Librerias utilizadas:

```c
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
```

### Definicion de constantes:

```c
#define PI 3.14159265
#define CONSTANTE 20
```

### Declaracion de funciones:
```c
void opciones();
void polar_to_cartesian();
void cartesian_to_polar();
void numero_secreto();
void raices_ecuacion();
void area_perimetro();
void numero_letras();
void suma_de_cuadrados();
void operaciones();
void serie();
void coordenadas_convert();
```

### Código de la funcion **main()**:

```c
int main() {
    do {

    opciones();    
    scanf("%d",&opc);
    
    switch (opc) {
        case 1:
            operaciones();
            break;
        case 2:
            serie();
            break;
        case 3:
            suma_de_cuadrados();
            break;
        case 4:
            coordenadas_convert();
            break;
        case 5:
            numero_secreto();
            break;
        case 6:
            area_perimetro();
            break;
        case 7:
            raices_ecuacion();
            break;
        case 8:
            numero_letras();
            break;
        case 0:
            printf("Hasta pronto");
            break;
        default:
            printf("Valor invalido");
            break;
    }
    
    } while(opc!=0 && opc>0 && opc<9);

return 0;

}

```
### Pseudocodigo

```
Algoritmo funciones_menu
    Repetir
        opciones
        Leer opc
        Segun opc  Hacer
            1:
                operaciones
            2:
                serie
            3:
                suma_de_cuadrados
            4:
                coordenadas_convert
            5:
                numero_secreto
            6:
                area_perimetro
            7:
                raices_ecuacion
            8:
                numero_letras
            0:
                Escribir 'Hasta pronto'
        FinSegun
    Hasta Que opc≠0 Y opc>0 Y opc<9
FinAlgoritmo
```

### Diagrama de flujo
![image](img/DF_main.png)

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/5shqNMgpoME?t=5)

[Main link](https://youtu.be/5shqNMgpoME?t=5)

---


## Funcion  **opciones()**

>text...


### Código de la funcion **opciones()**:

```c
void opciones(){
    
    printf("\nSelecciona una opcion:");
    printf("\n------------------------------------------------------------------");
    printf("\n");
    printf("\n\t1-Suma resta multiplicacion, division de numeros enteros");
    printf("\n\t2-Serie 1 1 2 3 5 8 13");
    printf("\n\t3-Desplegar la suma de cuadrados");
    printf("\n\t4-Conversion de coordenadas");
    printf("\n\t5-Numero secreto");
    printf("\n\t6-Calcular area y perímetro");
    printf("\n\t7-Raices de ecuación cuadratica");
    printf("\n\t8-Convertir numero a letras");
    printf("\n\t0-Salir");
    printf("\n\t");
}

```
### Pseudocodigo

```html
Algoritmo funciones_menu
    Repetir
        opciones
        Leer opc
        Segun opc  Hacer
            1:
                operaciones
            2:
                serie
            3:
                suma_de_cuadrados
            4:
                coordenadas_convert
            5:
                numero_secreto
            6:
                area_perimetro
            7:
                raices_ecuacion
            8:
                numero_letras
            0:
                Escribir 'Hasta pronto'
        FinSegun
    Hasta Que opc≠0 Y opc>0 Y opc<9
FinAlgoritmo
```

### Diagrama de flujo
![image](img/DF_opciones.png)

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/5shqNMgpoME?t=3)

[Opciones link](https://youtu.be/5shqNMgpoME?t=3)


---


## Funcion  ****

>text...

### Código de la funcion ****:

```c

```
### Pseudocodigo

```html

```

### Diagrama de flujo
![image](img/DF_.png)

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/5shqNMgpoME?t=3)

[Opciones link](https://youtu.be/5shqNMgpoME?t=3)

---

## Funcion  ****

>text...

### Código de la funcion ****:

```c

```
### Pseudocodigo

```html

```

### Diagrama de flujo
![image](img/DF_.png)

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/5shqNMgpoME?t=3)

[Opciones link](https://youtu.be/5shqNMgpoME?t=3)

---

## Funcion  ****

>text...

### Código de la funcion ****:

```c

```
### Pseudocodigo

```html

```

### Diagrama de flujo
![image](img/DF_.png)

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/5shqNMgpoME?t=3)

[Opciones link](https://youtu.be/5shqNMgpoME?t=3)

---

## Funcion  ****

>text...

### Código de la funcion ****:

```c

```
### Pseudocodigo

```html

```

### Diagrama de flujo
![image](img/DF_.png)

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/5shqNMgpoME?t=3)

[Opciones link](https://youtu.be/5shqNMgpoME?t=3)

---

## Funcion  ****

>text...

### Código de la funcion ****:

```c

```
### Pseudocodigo

```html

```

### Diagrama de flujo
![image](img/DF_.png)

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/5shqNMgpoME?t=3)

[Opciones link](https://youtu.be/5shqNMgpoME?t=3)

---

## Funcion  ****

>text...

### Código de la funcion ****:

```c

```
### Pseudocodigo

```html

```

### Diagrama de flujo
![image](img/DF_.png)

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME/0.jpg)](https://youtu.be/5shqNMgpoME?t=3)

[Opciones link](https://youtu.be/5shqNMgpoME?t=3)

---