#include <iostream>
#include <cstring>
#include <fstream>
#include <string.h>

using namespace std;


int main() {
  string archivo1="archivo1.txt";
  ifstream archivo(archivo1.c_str());
  string linea,nomb,n1,n2,n3,n4;
  int nota1,nota2,nota3,nota4;
  int res,lon,i,j=0;
  char arreglo[100];
  string alumno1[100];
  char b,l;
  int c=1;
  while (getline(archivo,linea)) {
   
    lon = linea.length();
    for (i=0;i<lon;i++){
      l=linea[i];
      b=' ';
      if (l!=b){
        if (j==0)
          nomb=nomb+linea[i];
        if (j==1)
          n1=n1+linea[i];
        if (j==2)
          n2=n2+linea[i];
        if (j==3)
          n3=n3+linea[i];
        if (j==4)
          n4=n4+linea[i];    
      }
      else
        
        j++;
    }
    cout<<"Nombre: "<<nomb<<endl;
    cout<<endl;
    nota1 = stoi(n1);
    cout<<"Nota 1: "<<nota1<<endl;
    nota2 = stoi(n2);
    cout<<"Nota 2: "<<nota2<<endl;
    nota3 = stoi(n3);
    cout<<"Nota 3: "<<nota3<<endl;
    nota4 = stoi(n4);
    cout<<"Nota 4: "<<nota4<<endl;
    cout<<endl;
    
    j=0;
    nomb="";
    n1="";
    n2="";
    n3="";
    n4="";
  }

}
using std::stoi;