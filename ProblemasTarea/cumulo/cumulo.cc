#include <stdio.h>
#include <math.h>

 float raiz2(float x1,float x2,float y1,float y2);
int main()
{
    int i=0;
    float n=0,menor=1000,numero=100;
      float x[100];
      float y[100];
    
      scanf("%f",&n);
    if(n>=2 && n<=50000){
    for(i=0;i<n;i++){

        scanf("%f %f",&x[i],&y[i]);
        
    }
    for(int r=0;r<n;r++){
        for(int s=0;s<n;s++){
            
            //x1=x[r];y1=y[r];
            //x2=x[s];y2=y[s];
            numero=raiz2(x[r],x[s],y[r],y[s]);
           
            if(numero<menor&& numero!=0) menor=numero;
        
        }
    }
    
    
    printf("%0.3f",menor);
    }
    return 0;
}


 float raiz2(float x1,float x2,float y1,float y2){
     //float difx=x2-x1;
     float dify=y2-y1;
 
     float sqrt1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
     return sqrt1;
     
 }