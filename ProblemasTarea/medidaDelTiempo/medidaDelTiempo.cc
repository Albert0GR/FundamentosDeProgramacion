#include <iostream>
using namespace std;
int constant[]={31536000,86400,3600,60};
int var[4];
int s=0,aux=0;

int main() {
  //std::cin.tie(nullptr);
  //std::ios_base::sync_with_stdio(false);
  cin>>s;
  for(int i=0;i<4;i++){
    var[i]=s/constant[i];
    aux=s%constant[i];
    s=aux;
    cout<<var[i]<<" ";
  }
    cout<<s;     

  return 0;
}