//---------------------------------------------------------------------------

#ifndef kalkulatorH
#define kalkulatorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class Tformutama : public TForm
{
__published:	// IDE-managed Components
	TEdit *Txthasil;
	TButton *Btn7;
	TButton *Btn8;
	TButton *Btn9;
	TButton *Btn4;
	TButton *Btn5;
	TButton *Btn6;
	TButton *Btn1;
	TButton *Btn2;
	TButton *Btn3;
	TButton *Btnhitung;
	TButton *Btntitik;
	TButton *Btn0;
	TButton *Btntambah;
	TButton *Btnkurang;
	TButton *Btnkali;
	TButton *Btnbagi;
	TButton *Btnkosong;
	TButton *Btnhapus;
	void __fastcall Btn7Click(TObject *Sender);
	void __fastcall BtnkosongClick(TObject *Sender);
	void __fastcall BtnhitungClick(TObject *Sender);
	void __fastcall BtnkurangClick(TObject *Sender);
	void __fastcall BtnkaliClick(TObject *Sender);
	void __fastcall BtnbagiClick(TObject *Sender);
	void __fastcall BtntambahClick(TObject *Sender);
	void __fastcall Btn8Click(TObject *Sender);
	void __fastcall Btn9Click(TObject *Sender);
	void __fastcall Btn4Click(TObject *Sender);
	void __fastcall Btn5Click(TObject *Sender);
	void __fastcall Btn6Click(TObject *Sender);
	void __fastcall Btn1Click(TObject *Sender);
	void __fastcall Btn2Click(TObject *Sender);
	void __fastcall Btn3Click(TObject *Sender);
	void __fastcall Btn0Click(TObject *Sender);
	void __fastcall BtntitikClick(TObject *Sender);
	void __fastcall Btn0KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn3KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn5KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn6KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn8KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn9KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BtnbagiKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BtnhitungKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BtnkaliKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BtnkosongKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BtnkurangKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BtntambahKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BtntitikKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn4KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Btn7KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BtnhapusClick(TObject *Sender);
	void __fastcall BtnhapusKeyPress(TObject *Sender, System::WideChar &Key);
private:
   float operand1 , operand2, hasil;
	String operandS;
   char	oprt;
	bool Timpa = true;
	bool titik;
     int p;
	void operasikan(char o);
	void tekanangka(char a);
	void tekan(char key);

	bool key(char o);


public:		// User declarations
	__fastcall Tformutama(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tformutama *formutama;

//---------------------------------------------------------------------------
#endif
