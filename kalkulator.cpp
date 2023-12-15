//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kalkulator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tformutama *formutama;
//---------------------------------------------------------------------------
__fastcall Tformutama::Tformutama(TComponent* Owner)
	: TForm(Owner)
{
		oprt = ' ';
		titik= false;

}

	void Tformutama ::operasikan(char o){
			 BtnhitungClick(Btntambah);
			 operand1= StrToInt(Txthasil->Text);
			 Timpa = true;
			 oprt = o;
	}

	void  Tformutama ::tekanangka(char a){

		if (Timpa) {
			Txthasil->Text = a;
			Timpa = false;

		}else{
			Txthasil->Text= Txthasil->Text + a;
		}
	}
		bool  Tformutama ::key(char o){
				bool hasil;
			switch(o){
				case '+':
					hasil=true;

				break;

				case '-':
					hasil=true;
				break;

				case 'x':
					hasil=true;
				break;

				case '/':
					  hasil=true;
				break;
				default:  hasil=false;
				break;


			}
				return hasil;
	  }



//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall Tformutama::BtnkosongClick(TObject *Sender)
{

	oprt = ' ';
	operand1=0;
	operand2=0;
	hasil = 0;
	Txthasil->Text=0;
	Timpa=true;
	titik=false;
}
void __fastcall Tformutama::BtntitikClick(TObject *Sender)
{
	if (!titik) {
	   Txthasil->Text = Txthasil -> Text + '.';
	   titik= true;
	}
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::BtnhitungClick(TObject *Sender)
{
	operand2 = StrToFloat(Txthasil->Text);
	switch (oprt) {
		case  '+' :
		hasil = operand1 + operand2;

	   break;

		case  '-' :
		hasil = operand1 - operand2;
		break;

		case 'x' :
		hasil = operand1 * operand2;
		break;

		case ':' :
		hasil = operand1 / operand2;
		break;
	default:
		;
	}
	if (oprt != ' ') {
	Txthasil->Text = FloatToStr(hasil);
	Timpa = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::BtnkurangClick(TObject *Sender)
{
	operasikan('-');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::BtnkaliClick(TObject *Sender)
{
	operasikan('x');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::BtnbagiClick(TObject *Sender)
{
	operasikan(':');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::BtntambahClick(TObject *Sender)
{
		  operasikan('+');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn8Click(TObject *Sender)
{
				tekanangka('8');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn9Click(TObject *Sender)
{
    tekanangka('9');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn4Click(TObject *Sender)
{
    tekanangka('4');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn5Click(TObject *Sender)
{
		 tekanangka('5');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn6Click(TObject *Sender)
{
			  tekanangka('6');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn1Click(TObject *Sender)
{
					 tekanangka('1');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn2Click(TObject *Sender)
{
					   tekanangka('2');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn3Click(TObject *Sender)
{
					tekanangka('3');
}
//---------------------------------------------------------------------------
void __fastcall Tformutama::Btn0Click(TObject *Sender)
{
                        tekanangka('0');
}
void __fastcall Tformutama::Btn7Click(TObject *Sender)
{
	tekanangka('7');
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


void  Tformutama::tekan(char Key){
	if ((Key>='0') && (Key<='9') || key(Key) || (Key=='=') || (Key==8)) {
			 switch(Key){
			 case '+':
				operasikan('+');
			 break;
				 case '-':
				  operasikan('-');
			 break;
				 case 'x':
					operasikan('x');
			 break;
				 case '*':
				   operasikan('x');
			 break;
				 case '/':
				   operasikan('/');
			 break;
				 case ':':
					 operasikan('/');
			 break;
			 case '=':
				BtnhitungClick(this);
			 break;
			 case 8:
				BtnhapusClick(this);
			 break;
			 default:
			 tekanangka(Key);
			 }
	}
}

void __fastcall Tformutama::Btn3KeyPress(TObject *Sender, System::WideChar &Key)
{
	tekan(Key);	
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::Btn5KeyPress(TObject *Sender, System::WideChar &Key)
{
	tekan(Key);	
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::Btn6KeyPress(TObject *Sender, System::WideChar &Key)
{
	tekan(Key);	
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::Btn8KeyPress(TObject *Sender, System::WideChar &Key)
{
	tekan(Key);	
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::Btn9KeyPress(TObject *Sender, System::WideChar &Key)
{
	tekan(Key);	
}
//---------------------------------------------------------------------------
  void __fastcall Tformutama::Btn0KeyPress(TObject *Sender, System::WideChar &Key)
{
	tekan(Key);
//---------------------------------------------------------------------------
}
void __fastcall Tformutama::Btn1KeyPress(TObject *Sender, System::WideChar &Key)
{
		tekan(Key);
}
void __fastcall Tformutama::Btn2KeyPress(TObject *Sender, System::WideChar &Key)
{
		   tekan(Key);
}
void __fastcall Tformutama::Btn4KeyPress(TObject *Sender, System::WideChar &Key)
{
		   tekan(Key);
}
void __fastcall Tformutama::Btn7KeyPress(TObject *Sender, System::WideChar &Key)
{
           tekan(Key);
}

void __fastcall Tformutama::BtnbagiKeyPress(TObject *Sender, System::WideChar &Key)

{
		tekan(Key);
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::BtnhitungKeyPress(TObject *Sender, System::WideChar &Key)

{
			tekan(Key);
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::BtnkaliKeyPress(TObject *Sender, System::WideChar &Key)

{
				tekan(Key);
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::BtnkosongKeyPress(TObject *Sender, System::WideChar &Key)

{
				tekan(Key);
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::BtnkurangKeyPress(TObject *Sender, System::WideChar &Key)

{
					tekan(Key);
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::BtntambahKeyPress(TObject *Sender, System::WideChar &Key)

{
				tekan(Key);
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::BtntitikKeyPress(TObject *Sender, System::WideChar &Key)

{
					tekan(Key);
}


void __fastcall Tformutama::BtnhapusClick(TObject *Sender)

{

	operandS= Txthasil->Text;
	 p= operandS.Length();

	operandS.SetLength(p-1);
	 Txthasil->Text=operandS;
}
//---------------------------------------------------------------------------

void __fastcall Tformutama::BtnhapusKeyPress(TObject *Sender, System::WideChar &Key)

{
					tekan(Key);
}
//---------------------------------------------------------------------------

