﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SynHighlighterCSS.pas' rev: 28.00 (Windows)

#ifndef SynhighlightercssHPP
#define SynhighlightercssHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <SynEditTypes.hpp>	// Pascal unit
#include <SynEditHighlighter.hpp>	// Pascal unit
#include <SynHighlighterHashEntries.hpp>	// Pascal unit
#include <SynUnicode.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Synhighlightercss
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TtkTokenKind : unsigned char { tkComment, tkProperty, tkKey, tkNull, tkSpace, tkString, tkSymbol, tkText, tkUndefProperty, tkValue, tkColor, tkNumber, tkImportant };

enum DECLSPEC_DENUM TRangeState : unsigned char { rsComment, rsKey, rsParam, rsText, rsUnKnown, rsValue };

class DELPHICLASS TSynCssSyn;
class PASCALIMPLEMENTATION TSynCssSyn : public Synedithighlighter::TSynCustomHighlighter
{
	typedef Synedithighlighter::TSynCustomHighlighter inherited;
	
private:
	TRangeState fRange;
	TRangeState fCommentRange;
	TtkTokenKind fTokenID;
	Synedithighlighter::TSynHighlighterAttributes* fCommentAttri;
	Synedithighlighter::TSynHighlighterAttributes* fPropertyAttri;
	Synedithighlighter::TSynHighlighterAttributes* fKeyAttri;
	Synedithighlighter::TSynHighlighterAttributes* fSpaceAttri;
	Synedithighlighter::TSynHighlighterAttributes* fStringAttri;
	Synedithighlighter::TSynHighlighterAttributes* fColorAttri;
	Synedithighlighter::TSynHighlighterAttributes* fNumberAttri;
	Synedithighlighter::TSynHighlighterAttributes* fSymbolAttri;
	Synedithighlighter::TSynHighlighterAttributes* fTextAttri;
	Synedithighlighter::TSynHighlighterAttributes* fValueAttri;
	Synedithighlighter::TSynHighlighterAttributes* fUndefPropertyAttri;
	Synedithighlighter::TSynHighlighterAttributes* fImportantPropertyAttri;
	Synhighlighterhashentries::TSynHashEntryList* fKeywords;
	void __fastcall DoAddKeyword(System::UnicodeString AKeyword, int AKind);
	int __fastcall HashKey(System::WideChar * Str);
	TtkTokenKind __fastcall IdentKind(System::WideChar * MayBe);
	void __fastcall TextProc(void);
	void __fastcall CommentProc(void);
	void __fastcall BraceCloseProc(void);
	void __fastcall BraceOpenProc(void);
	void __fastcall CRProc(void);
	void __fastcall SemiProc(void);
	void __fastcall StartValProc(void);
	void __fastcall NumberProc(void);
	void __fastcall IdentProc(void);
	void __fastcall LFProc(void);
	void __fastcall NullProc(void);
	void __fastcall SpaceProc(void);
	void __fastcall StringProc(void);
	void __fastcall HashProc(void);
	void __fastcall SlashProc(void);
	void __fastcall ExclamProc(void);
	
protected:
	virtual System::UnicodeString __fastcall GetSampleSource(void);
	virtual bool __fastcall IsFilterStored(void);
	void __fastcall NextProcedure(void);
	
public:
	__classmethod virtual System::UnicodeString __fastcall GetLanguageName();
	__classmethod virtual System::UnicodeString __fastcall GetFriendlyLanguageName();
	__fastcall virtual TSynCssSyn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSynCssSyn(void);
	virtual Synedithighlighter::TSynHighlighterAttributes* __fastcall GetDefaultAttribute(int Index);
	virtual bool __fastcall GetEol(void);
	virtual void * __fastcall GetRange(void);
	TtkTokenKind __fastcall GetTokenID(void);
	virtual Synedithighlighter::TSynHighlighterAttributes* __fastcall GetTokenAttribute(void);
	virtual int __fastcall GetTokenKind(void);
	virtual bool __fastcall IsIdentChar(System::WideChar AChar);
	virtual void __fastcall Next(void);
	virtual void __fastcall SetRange(void * Value);
	virtual void __fastcall ResetRange(void);
	
__published:
	__property Synedithighlighter::TSynHighlighterAttributes* CommentAttri = {read=fCommentAttri, write=fCommentAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* PropertyAttri = {read=fPropertyAttri, write=fPropertyAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* ColorAttri = {read=fColorAttri, write=fColorAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* NumberAttri = {read=fNumberAttri, write=fNumberAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* KeyAttri = {read=fKeyAttri, write=fKeyAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* SpaceAttri = {read=fSpaceAttri, write=fSpaceAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* StringAttri = {read=fStringAttri, write=fStringAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* SymbolAttri = {read=fSymbolAttri, write=fSymbolAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* TextAttri = {read=fTextAttri, write=fTextAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* ValueAttri = {read=fValueAttri, write=fValueAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* UndefPropertyAttri = {read=fUndefPropertyAttri, write=fUndefPropertyAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* ImportantPropertyAttri = {read=fImportantPropertyAttri, write=fImportantPropertyAttri};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Synhighlightercss */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYNHIGHLIGHTERCSS)
using namespace Synhighlightercss;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SynhighlightercssHPP