//---------------------------------------------------------------------------

#ifndef UPRINCIPALH
#define UPRINCIPALH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *SGA;
	TLabel *Label1;
	TStringGrid *SGB;
	TLabel *Label2;
	TStringGrid *SGC;
	TLabel *Label3;
	TButton *Button1;
	TButton *Button2;
	TEdit *EDimensionA;
	TEdit *EDimensionB;
	TLabel *Label4;
	TLabel *Label5;
	TMainMenu *MainMenu1;
	TMenuItem *Funciones1;
	TMenuItem *Procedimientos1;
	TMenuItem *Suma1;
	TMenuItem *Resta1;
	TMenuItem *Derivar1;
	TMenuItem *multiplicar1;
	TMenuItem *integrar1;
	TMenuItem *integrar2;
	TEdit *EResultado;
	TLabel *Label6;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Suma1Click(TObject *Sender);
	void __fastcall Resta1Click(TObject *Sender);
	void __fastcall Derivar1Click(TObject *Sender);
	void __fastcall multiplicar1Click(TObject *Sender);
	void __fastcall integrar1Click(TObject *Sender);
	void __fastcall integrar2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void ClaseAForm(CPolinomio *V, TStringGrid *SG);
	void FormAClase(TStringGrid *SG, CPolinomio *V);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
