//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sGauge.hpp"
#include "sLabel.hpp"
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TsGauge *sGauge1;
        TsLabel *sLabel1;
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
