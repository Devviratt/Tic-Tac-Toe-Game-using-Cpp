//---------------------------------------------------------------------------

#ifndef tic_gameH
#define tic_gameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *btn7;
	TButton *btn4;
	TButton *btn1;
	TButton *btn2;
	TButton *btn5;
	TButton *btn8;
	TButton *btn9;
	TButton *btn6;
	TButton *btn3;
	TButton *btnReset;
	TButton *btnNewGame;
	TButton *btnExit;
	void __fastcall scorekeeper(TObject *Sender);
	void __fastcall CallEnable(TObject *Sender);
	void __fastcall btn1Click(TObject *Sender);
	void __fastcall btn2Click(TObject *Sender);
	void __fastcall btn3Click(TObject *Sender);
	void __fastcall btn4Click(TObject *Sender);
	void __fastcall btn5Click(TObject *Sender);
	void __fastcall btn6Click(TObject *Sender);
	void __fastcall btn7Click(TObject *Sender);
	void __fastcall btn8Click(TObject *Sender);
	void __fastcall btn9Click(TObject *Sender);
	void __fastcall btnResetClick(TObject *Sender);
	void __fastcall btnNewGmaeClick(TObject *Sender);
	void __fastcall btnCloseClick(TObject *Sender);
	void __fastcall btnNewGmaeClick(TObject *Sender);
	void __fastcall btnNewGameClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
.cpp Code
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ticgame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
bool checker;
//---------------------------------------------------------------------------
	  void __fastcall TForm1::CallEnable(TObject *Sender){

			   btn1->Enabled = false;
				btn2->Enabled = false;
				btn3->Enabled = false;
				btn4->Enabled = false;
				 btn5->Enabled = false;
				  btn6->Enabled = false;
				   btn7->Enabled = false;
					btn8->Enabled = false;
					 btn9->Enabled = false;
	  }
//---------------------------------------------------------------------------
void __fastcall TForm1::scorekeeper(TObject *Sender){

		   Integer i,q;

		   i=StrToInt(lblPlayerX->Caption);
		   q=StrToInt(lblPlayer0->Caption);

		   if((btn1->Caption=="X")&&(btn2->Caption=="X")&&(btn3->Caption=="X"))
		   {
			   lblPlayerX->Caption=IntToStr(i+1);
			   ShowMessage("The winner is player X");
			   CallEnable(Sender);
		   }
			if((btn1->Caption=="X")&&(btn4->Caption=="X")&&(btn7->Caption=="X"))
		   {
			   lblPlayerX->Caption=IntToStr(i+1);
			   ShowMessage("The winner is player X");
			   CallEnable(Sender);
		   }
			if((btn1->Caption=="X")&&(btn5->Caption=="X")&&(btn9->Caption=="X"))
		   {
			   lblPlayerX->Caption=IntToStr(i+1);
			   ShowMessage("The winner is player X");
			   CallEnable(Sender);
		   }
			if((btn3->Caption=="X")&&(btn5->Caption=="X")&&(btn7->Caption=="X"))
		   {
			   lblPlayerX->Caption=IntToStr(i+1);
			   ShowMessage("The winner is player X");
			   CallEnable(Sender);
		   }
			if((btn2->Caption=="X")&&(btn5->Caption=="X")&&(btn8->Caption=="X"))
		   {
			   lblPlayerX->Caption=IntToStr(i+1);
			   ShowMessage("The winner is player X");
			   CallEnable(Sender);
		   }
			if((btn7->Caption=="X")&&(btn8->Caption=="X")&&(btn9->Caption=="X"))
		   {
			   lblPlayerX->Caption=IntToStr(i+1);
			   ShowMessage("The winner is player X");
			   CallEnable(Sender);
		   }
		   if((btn4->Caption=="X")&&(btn5->Caption=="X")&&(btn6->Caption=="X"))
		   {
			   lblPlayerX->Caption=IntToStr(i+1);
			   ShowMessage("The winner is player X");
			   CallEnable(Sender);
		   }
		   if((btn3->Caption=="X")&&(btn6->Caption=="X")&&(btn9->Caption=="X"))
		   {
			   lblPlayerX->Caption=IntToStr(i+1);
			   ShowMessage("The winner is player X");
			   CallEnable(Sender);
		   }

//---------------------------------------------------------------------------
	  if((btn1->Caption=="0")&&(btn2->Caption=="0")&&(btn3->Caption=="0"))
		   {
			   lblPlayerX->Caption=IntToStr(q+1);
			   ShowMessage("The winner is player 0");
			   CallEnable(Sender);
		   }
			if((btn1->Caption=="0")&&(btn4->Caption=="0")&&(btn7->Caption=="0"))
		   {
			   lblPlayerX->Caption=IntToStr(q+1);
			   ShowMessage("The winner is player 0");
			   CallEnable(Sender);
		   }
			if((btn1->Caption=="0")&&(btn5->Caption=="0")&&(btn9->Caption=="0"))
		   {
			   lblPlayerX->Caption=IntToStr(q+1);
			   ShowMessage("The winner is player 0");
			   CallEnable(Sender);
		   }
			if((btn3->Caption=="0")&&(btn5->Caption=="0")&&(btn7->Caption=="0"))
		   {
			   lblPlayerX->Caption=IntToStr(q+1);
			   ShowMessage("The winner is player 0");
			   CallEnable(Sender);
		   }
			if((btn2->Caption=="0")&&(btn5->Caption=="0")&&(btn8->Caption=="0"))
		   {
			   lblPlayerX->Caption=IntToStr(q+1);
			   ShowMessage("The winner is player 0");
			   CallEnable(Sender);
		   }
			if((btn7->Caption=="0")&&(btn8->Caption=="0")&&(btn9->Caption=="0"))
		   {
			   lblPlayerX->Caption=IntToStr(q+1);
			   ShowMessage("The winner is player 0");
			   CallEnable(Sender);
		   }
		   if((btn4->Caption=="0")&&(btn5->Caption=="0")&&(btn6->Caption=="0"))
		   {
			   lblPlayerX->Caption=IntToStr(q+1);
			   ShowMessage("The winner is player 0");
			   CallEnable(Sender);
		   }
		   if((btn3->Caption=="0")&&(btn6->Caption=="0")&&(btn9->Caption=="0"))
		   {
			   lblPlayerX->Caption=IntToStr(q+1);
			   ShowMessage("The winner is player 0");
			   CallEnable(Sender);
		   }
		    if((btn1-> Caption =="0")&&(btn2 -> Caption == "X")&&(btn3->Caption == "0")&&(btn4->Caption == "0") &&(btn5->Caption == "0")&&(btn6->Caption == "X")&&(btn7->Caption == "X")&&(btn8->Caption == "0")&&(btn9->Caption == "X"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
		   if((btn1-> Caption =="X")&&(btn2 -> Caption == "0")&&(btn3->Caption == "X")&&(btn4->Caption == "0") &&(btn5->Caption == "0")&&(btn6->Caption == "X")&&(btn7->Caption == "X")&&(btn8->Caption == "X")&&(btn9->Caption == "0"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
		   if((btn1-> Caption =="X")&&(btn2 -> Caption == "0")&&(btn3->Caption == "X")&&(btn4->Caption == "0") &&(btn5->Caption == "X")&&(btn6->Caption == "X")&&(btn7->Caption == "0")&&(btn8->Caption == "X")&&(btn9->Caption == "0"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
		   if((btn1-> Caption =="0")&&(btn2 -> Caption == "0")&&(btn3->Caption == "X")&&(btn4->Caption == "X") &&(btn5->Caption == "X")&&(btn6->Caption == "0")&&(btn7->Caption == "0")&&(btn8->Caption == "X")&&(btn9->Caption == "X"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
            if((btn1-> Caption =="0")&&(btn2 -> Caption == "0")&&(btn3->Caption == "X")&&(btn4->Caption == "X") &&(btn5->Caption == "X")&&(btn6->Caption == "0")&&(btn7->Caption == "0")&&(btn8->Caption == "X")&&(btn9->Caption == "0"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
            if((btn1-> Caption =="0")&&(btn2 -> Caption == "X")&&(btn3->Caption == "0")&&(btn4->Caption == "X") &&(btn5->Caption == "X")&&(btn6->Caption == "0")&&(btn7->Caption == "X")&&(btn8->Caption == "0")&&(btn9->Caption == "X"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
            if((btn1-> Caption =="X")&&(btn2 -> Caption == "0")&&(btn3->Caption == "X")&&(btn4->Caption == "X") &&(btn5->Caption == "X")&&(btn6->Caption == "0")&&(btn7->Caption == "0")&&(btn8->Caption == "X")&&(btn9->Caption == "0"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
            if((btn1-> Caption =="X")&&(btn2 -> Caption == "0")&&(btn3->Caption == "0")&&(btn4->Caption == "0") &&(btn5->Caption == "0")&&(btn6->Caption == "X")&&(btn7->Caption == "X")&&(btn8->Caption == "X")&&(btn9->Caption == "0"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
            if((btn1-> Caption =="0")&&(btn2 -> Caption == "X")&&(btn3->Caption == "0")&&(btn4->Caption == "X") &&(btn5->Caption == "0")&&(btn6->Caption == "X")&&(btn7->Caption == "X")&&(btn8->Caption == "0")&&(btn9->Caption == "X"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
            if((btn1-> Caption =="X")&&(btn2 -> Caption == "0")&&(btn3->Caption == "X")&&(btn4->Caption == "0") &&(btn5->Caption == "0")&&(btn6->Caption == "X")&&(btn7->Caption == "0")&&(btn8->Caption == "X")&&(btn9->Caption == "0"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
            if((btn1-> Caption =="X")&&(btn2 -> Caption == "0")&&(btn3->Caption == "X")&&(btn4->Caption == "X") &&(btn5->Caption == "0")&&(btn6->Caption == "X")&&(btn7->Caption == "0")&&(btn8->Caption == "X")&&(btn9->Caption == "0"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
           if((btn1-> Caption =="X")&&(btn2 -> Caption == "X")&&(btn3->Caption == "0")&&(btn4->Caption == "0") &&(btn5->Caption == "0")&&(btn6->Caption == "X")&&(btn7->Caption == "X")&&(btn8->Caption == "0")&&(btn9->Caption == "0"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }
           if((btn1-> Caption =="X")&&(btn2 -> Caption == "X")&&(btn3->Caption == "0")&&(btn4->Caption == "0") &&(btn5->Caption == "0")&&(btn6->Caption == "X")&&(btn7->Caption == "X")&&(btn8->Caption == "0")&&(btn9->Caption == "X"))
		   {
			ShowMessage(" DRAW!!");
			   CallEnable(Sender);
		   }

}

//---------------------------------------------------------------------------


__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn1Click(TObject *Sender)
{
	 if (checker == false) {
		  btn1->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn1->Caption="0";
		  checker= false;
	 }

	 scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn2Click(TObject *Sender)
{
   if (checker == false) {
		  btn2->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn2->Caption="0";
		  checker= false;
	 }

	   scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn3Click(TObject *Sender)
{
  if (checker == false) {
		  btn3->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn3->Caption="0";
		  checker= false;
	 }

	 scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn4Click(TObject *Sender)
{
  if (checker == false) {
		  btn4->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn4->Caption="0";
		  checker= false;
	 }

	 scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn5Click(TObject *Sender)
{
   if (checker == false) {
		  btn5->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn5->Caption="0";
		  checker= false;
	 }

	 scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn6Click(TObject *Sender)
{
  if (checker == false) {
		  btn6->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn6->Caption="0";
		  checker= false;
	 }

	 scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn7Click(TObject *Sender)
{
   if (checker == false) {
		  btn7->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn7->Caption="0";
		  checker= false;
	 }

	 scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn8Click(TObject *Sender)
{
  if (checker == false) {
		  btn8->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn8->Caption="0";
		  checker= false;
	 }

	 scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn9Click(TObject *Sender)
{
  if (checker == false) {
		  btn9->Caption="X";
		  checker= true;
	}
	else if (checker == true) {
		  btn9->Caption="0";
		  checker= false;
	 }

	 scorekeeper(Sender);
   }
//---------------------------------------------------------------------------

void __fastcall TForm1::btnResetClick(TObject *Sender)
{
	lblPlayerX->Caption = "0";
	lblPlayer0->Caption = "0";

	btnNewGameClick(Sender);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::btnNewGameClick(TObject *Sender)
{
             btn1->Caption="";
			 btn2->Caption="";
			 btn3->Caption="";
			 btn4->Caption="";
			 btn5->Caption="";
			 btn6->Caption="";
			 btn7->Caption="";
			 btn8->Caption="";
			 btn9->Caption="";

			 btn1->Enabled = true;
			 btn2->Enabled = true;
			 btn3->Enabled = true;
			 btn4->Enabled = true;
			 btn5->Enabled = true;
			 btn6->Enabled = true;
			 btn7->Enabled = true;
			 btn8->Enabled = true;
			 btn9->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::btnExitClick(TObject *Sender)
{
            Close();
}
//---------------------------------------------------------------------------
