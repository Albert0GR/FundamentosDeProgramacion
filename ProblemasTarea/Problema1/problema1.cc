#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define PI 3.14159265
#define CONSTANTE 20

int opc=0,opc4=0;

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
            printf("bye");
            break;
        default:
            printf("Valor invalido");
            break;
    }
    
    } while(opc!=0);

return 0;

}

void opciones(){
    
    printf("\nSelecciona una opcion:");
    printf("\n------------------------------------------------------------------");
    printf("\n");
    printf("\n\t1-Suma resta multiplicacion, division de numeros enteros");
    printf("\n\t2-Serie 1 1 2 3 5 8 13");
    printf("\n\t3-Desplegar de la suma de cuadrados");
    printf("\n\t4-Conversion de coordenadas");
    printf("\n\t5-Numero secreto");
    printf("\n\t6-Calcular area y perímetro");
    printf("\n\t7-Raices de ecuación cuadratica");
    printf("\n\t8-Convertir numero a letras");
    printf("\n\t0-Salir");
    printf("\n\t");
}

void coordenadas_convert(){
    printf("\nConversion de coordenadas:");
    printf("\n--------------------------------");
    printf("\n");
    printf("\n1-polares a cartesianas");
    printf("\n2-cartesianas a polares");
    scanf("%d",&opc4);
    
    if(opc4==1){
    cartesian_to_polar();
    }
    else if(opc==2){
    polar_to_cartesian();
    }
    else{
        printf("opcion invalida");
    }
}

void polar_to_cartesian(){

    double val = PI / 180;
    double theta,r,x,y;

    printf("Ingrese valor de magnitud(r)");
    scanf("%lf",&r);
    printf("Ingrese valor de angulo(grados)");
    scanf("%lf",&theta);              

        x=r*cos(theta*val);
        y=r*sin(theta*val);

    printf("( %0.3lf , %0.3lf )",x,y);    
}

void cartesian_to_polar(){

    double theta=0,r=0,x=0,y=0;
    double val = PI / 180;
    printf("Ingrese valor de x");
    scanf("%lf",&x);
    printf("Ingrese valor de y");
    scanf("%lf",&y);       
               
        r=sqrt(x*x+y*y);
        theta=atan(y/x);
        theta/=val;

    printf("( r=%0.3lf \n theta= %0.3lf )",r,theta);   

}

void raices_ecuacion(){

    printf("Raices de una ecuación cuadrática\n");
    printf("Ingresa en orden a b c\n");
        /* datos de entrada*/
    float a, b, c, d, x1, x2;
        /* leer datos*/
    scanf("%f %f %f", &a, &b, &c);
        //validaciones/
        d= b*b - 4*a*c;
    
        if(a!=0 && d > 0){
            x1 =(-b + sqrt(d))/(2*a);
            x2 =(-b + sqrt(d))/(2*a);
        }
        //desplegar resultados/
    printf("%f %f", x1, x2);
}

void numero_secreto(){

    int secreto = rand()% 20, n, i;

    printf("==Descubre el numero entero secreto== ");
    printf("El numero secreto esta en el rango de 0 a 9-->");
    scanf("%d", &n);
        while (secreto != n){
            if(secreto > n) printf("--El numero secreto es mayor--");
                else printf("--El numero secreto es menor--");
                
            if (n %2 == 0 && secreto % 2 == 1 ) printf("El numero secreto es impar--");
            
            if (n % 2 ==1 && secreto % 2 == 0 ) printf("El numero secreto es par--");
    scanf("%d", &n);
            
        };
    
    printf(" * El numero secreto es: %d *", n);
}

void area_perimetro(){
    //datos de entrada/
    float area, perimetro, a, b;
    //lectura de datos/
    scanf ("%f %f", &a, &b);
    //validacion/
        if(a>0 && b>0 && a<=100 && b<=200){
    //Calculos/
            area= a*b;
            perimetro= 2*a + 2*b;
    //desplegar resultados/
            printf("%f %f",area,perimetro);
        } else
            printf("las dimensiones del rectangulo no son validas");
}

void numero_letras(){
    //datos de entrada/
    int numero;
    //lectura de datos/
    printf(" Introduzca un numero entero");
    scanf ("%d", &numero);

    //validacion/
    if( numero >=1 && numero <=10)
   
    switch (numero)
  {
    //desplegar resultados/
    case 1: printf("\n uno");
    break;
    case 2: printf("\n dos");
    break;
    case 3: printf("\n tres");
    break;
    case 4: printf("\n cuatro");
    break;
    case 5: printf("\n cinco");
    break;
    case 6: printf("\n seis");
    break;
    case 7: printf("\n siete");
    break;
    case 8: printf("\n ocho");
    break;
    case 9: printf("\n nueve");
    break;
    case 10: printf("\n diez");
    break;
  } else
  printf("EL NUMERO DEBE SER MENOR A 10");
}

void suma_de_cuadrados(){
    int x=0;
    int n=0;
    int contador=0;
    int cuadrado=0;
    int impares=0;
    printf("Secuencia de suma de cuadrados\n");
   printf("Ingresa los numeros a mostrar:\t");
   scanf("%d",&n);
   for(contador=1; contador<=n; contador++){
       
       printf("\nNo. %d = ",contador);
       cuadrado=0;
       x=1;
       do{
           printf("%d",impares);
           if(x<contador) printf("+");
           cuadrado+=impares;
           impares+=2;
           x++;
       }while(x<=contador);
       
        printf("= %d",cuadrado);
}
    
}

void operaciones(){
    
    int numero1,numero2;
    float suma, multiplicacion, division, resta;
    /* lectura de datos (entradas) */
    printf("\n--------Operaciones---------");
    printf("\nIngrese numero A:\t");
    scanf("%d",&numero1);
    printf("\nIngrese numero B:\t");
    scanf("%d",&numero2);
    
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;
    /* desplegado de datos (salidas) */
    printf("\n--------Resultados---------");
    printf("\nSuma:        \t%f \n", suma);
    printf("Resta:         \t%f\n", resta);
    printf("Multiplicacion:\t%f\n", multiplicacion);
    printf("Division:      \t%f\n", division);
}

void serie(){
    int i, j, serie, N, cont;
        printf("\nIngrese el numero de valores de la sucesion:\t");
        scanf("%d", &N);
        i=0;
        j=1;
        for(cont=0; cont<N; cont++)
        {
            serie=i+j;
            printf("%d ", serie);
            i=j;
            j=serie;
        }
        printf("\n");
}