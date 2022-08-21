# FundamentosDeProgramacion
## Examen de funciones


## Funcion principal **main()**

>El siguiente codigo muestra los programas vistos en clase , implementados como funciones.Mientras en la funcion **main()** se implementa un menu con las opciones a seleccionar que invocan las funciones mostradas a continuacion


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

### Ejecución
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/5shqNMgpoME&ab_channel/0.jpg)](https://www.youtube.com/watch?v=5shqNMgpoME&ab_channel)

[Link Here](https://youtu.be/rtkQoiVPM9M)
