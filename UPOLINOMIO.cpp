//---------------------------------------------------------------------------

#pragma hdrstop
#include "vcl.h"
#include "UPOLINOMIO.h"
#include <iostream>
#include <cmath>
#include <conio.h>
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)

CPolinomio::CPolinomio()
{ n=0; }
int CPolinomio::GetN()
{  return n;}

int CPolinomio::Getm()
{  return m;}

void CPolinomio::SetN(int valor)
{   if(valor<=max)
	{  n=valor;}
	else
	{  ShowMessage("Dimensión  errónea");}
}

void CPolinomio::Setm(int valor)
{   if(valor<=max)
	{  m=valor;}
	else
	{  ShowMessage("Dimensión  errónea");}
}


float CPolinomio::GetElem(int pos)
{   if(pos<n)
	{  return V[pos];}
	else
	{  ShowMessage("Posición x errónea");}
}
void CPolinomio::SetElem(int pos, int elem)
{   if(pos<n)
	{  V[pos]=elem;}
	else
	{  ShowMessage("Posición errónea");}
}



 void CPolinomio::Suma(CPolinomio *A, CPolinomio *B)
 {    n=A->Dimension;     m=B->Dimension;
	 if (n==m) {
		 for (int i= 0; i < n; i++)
	  {
		 V[i]=A->Celda[i]+B->Celda[i];
	  }
	 }
	 else
	 {
	   ShowMessage("Las dimensiones deben ser iguales");
	 }


 }
 void CPolinomio::Resta(CPolinomio *A, CPolinomio *B)
 {    n=A->Dimension;    m=B->Dimension;
	 if (n==m) {
		 for (int i= 0; i < n; i++)
		 {
		  V[i]=A->Celda[i]-B->Celda[i];
		 }
	 }
	 else
	 {
	   ShowMessage("Las dimensiones deben ser iguales");
	 }

 }

 void CPolinomio::Derivar(CPolinomio *A)
 {      n=A->Dimension;
	 for (int i= 0; i < n; i++)
		 {
		  V[i]=A->Celda[i]*i;
		 }
 }
 UnicodeString CPolinomio::multiplicar(CPolinomio *A, CPolinomio *B)

 {
	 n=A->Dimension;    m=B->Dimension;
	 UnicodeString vector=""; UnicodeString espacio="  ";
	 if (n==m) {
		 for (int i= 0; i < n; i++)
		 {
			for (int j= 0; j < m; j++){
				V[i+j]+=A->Celda[i]*B->Celda[j];
				if(i==n-1 or j==0){
				int esponente=i+j;
				vector+=espacio+V[i+j]+"x^"+esponente;
				}
			}
			int j=0;
		 }
	 }
	 else
	 {
	   ShowMessage("Las dimensiones deben ser iguales");
	 }
	 return vector;

 }
 void CPolinomio::Integrar(CPolinomio *A)
 {    n=A->Dimension;
	  for (int i= 0; i < n; i++)
		 {   float x= i+1;
			 float y=A->Celda[i];
		  float z =  y / x;
		  V[i]=z;
		 }
 }
  void CPolinomio::Dividir(CPolinomio *A, CPolinomio *B)
  {  n=A->Dimension;     m=B->Dimension;
	 if (n==m) {
		   for (int i= 0; i < n; i++)
		 {
			 float x=A->Celda[i]; float y=B->Celda[i];
			  V[i]=x/y;
				V[i]=round(V[i]*100.0)/100.0;
		 }
	 }
	 else
	 {
	   ShowMessage("Las dimensiones deben ser iguales");
	 }
  }



