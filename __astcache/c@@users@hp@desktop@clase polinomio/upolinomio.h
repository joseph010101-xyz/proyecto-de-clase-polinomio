//---------------------------------------------------------------------------
#include <System.Classes.hpp>
 #include <Vcl.Controls.hpp>
 #include <vcl.h>
#ifndef UPOLINOMIOH
#define UPOLINOMIOH
//---------------------------------------------------------------------------

const int max=100;

class CPolinomio
{   private:
	   int n,m;
	   float V[max];
	 //  TCanvas *L;
	  // int X,Y;
	   int GetN();

	   int Getm();
	   void SetN(int valor);
	   void Setm(int valor);
	   float GetElem(int pos);
	   void SetElem(int pos, int elem);

	   public:
	   CPolinomio();
	   __property int Dimension={ read=GetN, write=SetN};
	   __property int Celda[int pos]={ read=GetElem, write=SetElem};
	   void Suma(CPolinomio *A, CPolinomio *B);
	   void Resta(CPolinomio *A, CPolinomio *B);
	   void Derivar(CPolinomio *A);
	  // void CompletarVector( CPolinomio *A, CPolinomio *B);
	  UnicodeString multiplicar(CPolinomio *A,CPolinomio *B);
	  int contador(int r);
	  void Integrar(CPolinomio *A);
      void Dividir(CPolinomio *A, CPolinomio *B);
};
#endif
