//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "XPManifest.h"
#include "acSlider.hpp"
#include "sButton.hpp"
#include "sGroupBox.hpp"
#include "sListBox.hpp"
#include "sPanel.hpp"
#include "sSkinManager.hpp"
#include <ExtCtrls.hpp>
#include "sComboBox.hpp"
#include <Menus.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
struct ButtonListItem {
        int key;
        int motor;
        bool direct;
};

class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TsGroupBox *sGroupBox1;
        TsButton *sButton1;
        TsButton *sButton2;
        TsButton *sButton3;
        TsSkinManager *sSkinManager1;
        TMainMenu *MainMenu1;
        TMenuItem *A1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N9;
        TMenuItem *N10;
        TMenuItem *N11;
        TsGroupBox *sGroupBox2;
        TsComboBox *sComboBox1;
        TsButton *sButton4;
        TsButton *sButton5;
        TsButton *sButton6;
        TsButton *sButton7;
        TsButton *sButton8;
        TStringGrid *StringGrid1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall sButton1Click(TObject *Sender);
        void __fastcall sButton5Click(TObject *Sender);
        void __fastcall sButton7Click(TObject *Sender);
        void __fastcall sButton8Click(TObject *Sender);
        void __fastcall sButton6Click(TObject *Sender);
        void __fastcall sButton3Click(TObject *Sender);
        void __fastcall StringGrid1KeyPress(TObject *Sender, char &Key);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
        void __fastcall N11Click(TObject *Sender);
        void __fastcall sButton4Click(TObject *Sender);
        void __fastcall sButton2Click(TObject *Sender);
        void __fastcall StringGrid1DrawCell(TObject *Sender, int ACol,
          int ARow, TRect &Rect, TGridDrawState State);
        void __fastcall StringGrid1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall StringGrid1KeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
protected:
        bool BI;
	void __fastcall SetBI(bool BInterface);
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        __property bool BlockInterface = {write = SetBI, read = BI};
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
