/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int a,b,c,d,e,f,g,h,i,j,m;

int main()
{
    cin>>a;
    b=(a/100)+1;
    c=((3*b)/4)-12;
    e=(a%19)+1;
    f=((8*b)+5)/25-(5+c);
    g=5*a/4-(c+10);
    h=(11*e+20+f)%30;
    if(h!=25){
        if(h==24)h++;
    }
    if(e>11)h++;
    i=44-h;
    if(i<21)i=i+30;
    j=i+7-((g+i)%7);
    if(j<=31){
        d=j;
        m=3;
    }else{
        d=j-31;
        m=4;
    }
    
    cout<<d<<" "<<m;
    
    
    return 0;
}
