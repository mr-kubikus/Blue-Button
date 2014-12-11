//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sButton.hpp"
#include "sComboBox.hpp"
#include "sEdit.hpp"
#include "sRadioButton.hpp"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TsComboBox *sComboBox1;
        TsEdit *sEdit1;
        TsButton *sButton1;
        TsButton *sButton2;
        TsRadioButton *sRadioButton1;
        TsRadioButton *sRadioButton2;
        void __fastcall sButton2Click(TObject *Sender);
        void __fastcall sButton1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall sEdit1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
