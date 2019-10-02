//* codigo de la coladera
//(a)crear un arreglo con todos los elementos inicializados a 1 (verdadero). Los elementos del arreglo que
//tenga subíndices primeros permanecerán en 1. los demas elementos del arreglo en algún momento se establesca a cero
//(b)

using namespace std;
#include<iostream>
void llenar(int v[], int n);
void mostrar(int v[], int n);
void coladera(int v[], int n);
main()
{
  int v[1000];
  llenar(v,1000);
  coladera(v,1000);
  mostrar(v,1000);

  cin.get();
}
void llenar(int v[], int n)
{
	int num=1;
  for(int i=0; i<n; i++)
  {
	v[i]=num;
  }
}
void mostrar(int v[], int n)
{
    for(int i=0; i<n; i++)
    {
		if(v[i]==1)
			cout<<"-"<<i<<endl;
	}
}
void coladera(int v[], int n)
{
     for(int i=2; i<n; i++)
     {
			if(v[i]==1)
			for(int j=i+1;j<n;j++)
			{
				if(j%i==0)
				v[j]==0;
			}
	 }
}
