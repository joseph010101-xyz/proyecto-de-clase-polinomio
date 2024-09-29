//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UPOLINOMIO.h"
#include "UPRINCIPAL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CPolinomio *A,*B,*C;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{   A =new  CPolinomio;
	B =new  CPolinomio;
	C =new  CPolinomio;
}

void TForm1::ClaseAForm(CPolinomio *V, TStringGrid *SG)
{   SG->ColCount=V->Dimension;
	for(int i=0;i<V->Dimension;i++)
	{   SG->Cells[i][0]=FloatToStr(V->Celda[i]); }
}
void TForm1::FormAClase(TStringGrid *SG, CPolinomio *V)
{   V->Dimension=SG->ColCount;
	for(int i=0;i<SG->ColCount;i++)
	{  V->Celda[i]=StrToInt(SG->Cells[i][0]);}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   SGA->ColCount=StrToInt(EDimensionA->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
   SGB->ColCount=StrToInt(EDimensionB->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Suma1Click(TObject *Sender)
{
	 FormAClase(SGA,A);
	 FormAClase(SGB,B);
	 C->Suma(A,B);
	 ClaseAForm(C,SGC);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Resta1Click(TObject *Sender)
{
	FormAClase(SGA,A);
	 FormAClase(SGB,B);
	 C->Resta(A,B);
	 ClaseAForm(C,SGC);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Derivar1Click(TObject *Sender)
{
		FormAClase(SGA,A);
		C->Derivar(A);
	   ClaseAForm(C,SGC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::multiplicar1Click(TObject *Sender)
{
		FormAClase(SGA,A);
		FormAClase(SGB,B);
		EResultado->Text=C->multiplicar(A,B);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::integrar1Click(TObject *Sender)
{
         FormAClase(SGA,A);
		C->Integrar(A);

	 ClaseAForm(C,SGC);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::integrar2Click(TObject *Sender)
{
        		FormAClase(SGA,A);
	 FormAClase(SGB,B);
	 C->Dividir(A,B);
	 ClaseAForm(C,SGC);

}
//---------------------------------------------------------------------------

