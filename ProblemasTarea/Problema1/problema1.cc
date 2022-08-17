#include<stdio.h>
#include<math.h>
#define PI 3.14159265

void polar_to_cartesian();
void cartesian_to_polar();

int main(){

   polar_to_cartesian();
   cartesian_to_polar();
    return 0;
}

void polar_to_cartesian(){
    
    double theta,r,x,y;
    printf("Ingrese valor de magnitud(r)");
    scanf("%lf",&r);
    printf("Ingrese valor de angulo(grados)");
    scanf("%lf",&theta);
  
         double val = PI / 180;
               

        x=r*cos(theta*val);
        y=r*sin(theta*val);

    printf("( %0.3lf , %0.3lf )",x,y);

    
}

void cartesian_to_polar(){

    double theta=0,r=0,x=0,y=0;
    printf("Ingrese valor de x");
    scanf("%lf",&x);
    printf("Ingrese valor de y");
    scanf("%lf",&y);
  
         double val = PI / 180;
               
        r=sqrt(x*x+y*y);
        theta=atan(y/x);
        theta/=val;

    printf("( r=%0.3lf \n theta= %0.3lf )",r,theta);

    

}