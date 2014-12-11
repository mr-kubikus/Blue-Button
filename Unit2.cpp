//---------------------------------------------------------------------------

#include <vcl.h>
#include <vector>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sButton"
#pragma link "sComboBox"
#pragma link "sEdit"
#pragma link "sRadioButton"
#pragma resource "*.dfm"
TForm2 *Form2;
extern std::vector<ButtonListItem> buttonList;
extern DWORD KeyToName(int key);
extern bool Saved;
extern bool Edit;
int GKey;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::sButton2Click(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::sButton1Click(TObject *Sender)
{
        String Direct;
        ButtonListItem newButton;

        if (sEdit1->Text==""||sEdit1->Text=="Введите клавишу...") {
                sEdit1->Text = "Введите клавишу...";
                sEdit1->SetFocus();
                return;
        }

        if (sRadioButton2->Checked) {
                Direct = "<--";
                newButton.direct = false;
         } else if (sRadioButton1->Checked) {
                Direct = "-->";
                newButton.direct = true;
                sRadioButton1->Checked = False;
        } else {
                ShowMessage("Выберите направление поворота");
                return;
        }


        if (Form1->StringGrid1->Cells[0][1]!=""&&!Edit)
                Form1->StringGrid1->RowCount=Form1->StringGrid1->RowCount+1;


        if (!Edit) {
        int temp = Form1->StringGrid1->RowCount-1;
        Form1->StringGrid1->Cells[0][temp] = sEdit1->Text;
        Form1->StringGrid1->Cells[1][temp] = sComboBox1->Text;
        Form1->StringGrid1->Cells[2][temp] = Direct;
        newButton.motor = sComboBox1->ItemIndex;
        newButton.key = GKey;
        buttonList.push_back(newButton);
        Form1->StringGrid1->Row = Form1->StringGrid1->RowCount-1;
        } else {
        int temp = Form1->StringGrid1->Row-1;
        Form1->StringGrid1->Cells[0][Form1->StringGrid1->Row] = sEdit1->Text;
        Form1->StringGrid1->Cells[1][Form1->StringGrid1->Row] = sComboBox1->Text;
        Form1->StringGrid1->Cells[2][Form1->StringGrid1->Row] = Direct;
        buttonList[temp].motor = sComboBox1->ItemIndex;
        buttonList[temp].key = GKey;
        buttonList[temp].direct = newButton.direct;
        Form1->StringGrid1->Row = Form1->StringGrid1->RowCount-1;
        }

        Saved = false;
        Edit = false;
        Form2->Close();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
        Form1->StringGrid1->SetFocus();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::sEdit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        sEdit1->Text = Char(KeyToName(Key));
        GKey = Key;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormShow(TObject *Sender)
{
        Form2->sRadioButton2->TabStop = True;
        Form2->sEdit1->SetFocus();
}
//---------------------------------------------------------------------------


