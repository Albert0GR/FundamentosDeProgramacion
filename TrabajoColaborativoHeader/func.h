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

void coordenadas_convert(){
    printf("\n       Conversion de coordenadas           ");
    printf("\n-------------------------------------------");
    printf("\n");
    printf("\n1-Polares a cartesianas");
    printf("\n2-Cartesianas a polares");
    printf("\nIngresa una opción:\t");
    scanf("%d",&opc4);

    switch (opc4)
    {
    case 1:
        polar_to_cartesian();
        break;
    case 2:
        cartesian_to_polar();
        break;    
    default:
        printf("Opcioón invalida");
        break;
    }

}

void polar_to_cartesian(){

    double val = PI / 180;
    double theta,r,x,y;

    printf("Ingrese valor de magnitud(r):   \t");
    scanf("%lf",&r);
    printf("Ingrese valor de angulo(grados):\t");
    scanf("%lf",&theta);              

        x=r*cos(theta*val);
        y=r*sin(theta*val);
    printf("\nSalida de coordenadas cartesianas:");
    printf("\n-----------------------------------");
    printf("\n( x = %0.3lf , y = %0.3lf )\n",x,y);    
}

void cartesian_to_polar(){

    double theta=0,r=0,x=0,y=0;
    double val = PI / 180;
    printf("\nIngrese valor de x:\t");
    scanf("%lf",&x);
    printf("Ingrese valor de y:\t");
    scanf("%lf",&y);       
               
        r=sqrt(x*x+y*y);
        theta=atan(y/x);
        theta/=val;

    printf("\nSalida de coordenadas polares:");
    printf("\n------------------------------\n");
    printf("r =   \t %0.3lf \ntheta =\t %0.3lf\n",r,theta);   

}

void raices_ecuacion(){

    printf("Raices de una ecuación cuadrática\n");
    printf("Ingresa en orden a b c");
        /* datos de entrada*/
    float a, b, c, d, x1, x2;
        /* leer datos*/
    printf("\n  \t\t");
    scanf("%f %f %f", &a, &b, &c);
        //validaciones/
        d= b*b - 4*a*c;
    
        if(a!=0 && d >= 0){
            x1 =(-b + sqrt(d))/(2*a);
            x2 =(-b - sqrt(d))/(2*a);
            printf("X1 = %f, X2 = %f", x1, x2);
        }else{
            printf("Sin solución");
        }
        
    
}

void numero_secreto(){

    int secreto =0;
    int n;
    secreto = rand() % 10 + 1;
    printf("==Descubre el numero entero secreto================ \n\n");
    printf("--El numero secreto esta en el rango de 0 a 9--\t");
    scanf("%d", &n);
        while (secreto != n){
            if(secreto > n) printf("--El numero secreto es mayor--\t");
                else printf("--El numero secreto es menor--\t");
                
            if (n %2 == 0 && secreto % 2 == 1 ) printf("El numero secreto es impar--\t");
            
            if (n % 2 ==1 && secreto % 2 == 0 ) printf("El numero secreto es par--\t");
                scanf("%d", &n);
            
        };
    
    printf("\n * El numero secreto es: %d *", n);
}

void area_perimetro(){
    float area, perimetro, a, b;
    printf("Area y perimetro de rectangulo\n");
    printf("-----------------------------------------");
    printf("\nIngresa base:\t");
    scanf("%a",&a);
    printf("Ingresa altura:\t");
    scanf("%a",&b);
    //datos de entrada/
    
    //lectura de datos/
    //scanf ("%f %f", &a, &b);
    //validacion/
        if(a>0 && b>0 && a<=100 && b<=200){
    //Calculos/
            area= a*b;
            perimetro= 2*a + 2*b;
    //desplegar resultados/
            printf("\nArea = %f,Periemetro = %f\n",area,perimetro);
        } else
            printf("Las dimensiones del rectangulo no son validas");
}

void numero_letras(){
    //datos de entrada/
    int numero;
    //lectura de datos/
    printf(" Introduzca un numero entero [1-9]:\t");
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
    printf("\nEL NUMERO DEBE ESTAR EN EL RANGO VALIDO\n");
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
    printf("\n");
    
}

void operaciones(){
    
    float numero1,numero2;
    float suma, multiplicacion, division, resta;
    /* lectura de datos (entradas) */
    printf("\n--------Operaciones---------");
    printf("\nIngrese numero A:\t");
    scanf("%f",&numero1);
    printf("\nIngrese numero B:\t");
    scanf("%f",&numero2);
    
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;
    /* desplegado de datos (salidas) */
    printf("\n--------Resultados----------");
    printf("\nSuma:        \t%.3f \n", suma);
    printf("Resta:         \t%.3f\n", resta);
    printf("Multiplicacion:\t%.3f\n", multiplicacion);
    printf("Division:      \t%.3f\n", division);
}

void serie(){
    int i, j, serie, N, cont;
        printf("\nIngrese el numero de valores de la sucesion:\t");
        scanf("%d", &N);
        printf("\n");
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