/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20150603)
 * Generated C source code from <C:\\Des\\build\\Exercicios\\exercicios.prg>
 * Command: C:\Des\build\Exercicios\exercicios.prg /oC:\Des\build\Exercicios\exercicios.c /M /N /q 
 * Created: 2018.11.11 19:03:54 (Borland/Embarcadero C++ 7.0 (32-bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "C:\\Des\\build\\Exercicios\\exercicios.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( MAIN );
HB_FUNC( EXERCICIO31 );
HB_FUNC( EXERCICIO32 );
HB_FUNC( EXERCICIO33 );
HB_FUNC( EXERCICIO34 );
HB_FUNC( EXERCICIO35 );
HB_FUNC( EXERCICIO36 );
HB_FUNC( EXERCICIO37 );
HB_FUNC( EXERCICIO38 );
HB_FUNC( EXERCICIO41 );
HB_FUNC( EXERCICIO42 );
HB_FUNC( EXERCICIO43 );
HB_FUNC( EXERCICIO44 );
HB_FUNC( EXERCICIO45 );
HB_FUNC( EXERCICIO46 );
HB_FUNC( EXERCICIO47 );
HB_FUNC( EXERCICIO48 );
HB_FUNC( EXERCICIO51 );
HB_FUNC( EXERCICIO52 );
HB_FUNC( EXERCICIO53 );
HB_FUNC( EXERCICIO54 );
HB_FUNC( EXERCICIO55 );
HB_FUNC( EXERCICIO56 );
HB_FUNC( EXERCICIO57 );
HB_FUNC( EXERCICIO58 );
HB_FUNC( EXERCICIO59 );
HB_FUNC( EXERCICIO60 );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( GETPROCADD );
HB_FUNC_EXTERN( TACTIVEX );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_EXTERN( MSGGET );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( SQRT );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( MOD );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( MSGYESNO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_EXERCICIOS )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "GETPROCADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROCADD )}, NULL },
{ "TACTIVEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TACTIVEX )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "MAIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAIN )}, &ModuleFakeDyn },
{ "EXERCICIO60", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO60 )}, &ModuleFakeDyn },
{ "EXERCICIO31", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO31 )}, &ModuleFakeDyn },
{ "MSGGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGGET )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "EXERCICIO32", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO32 )}, &ModuleFakeDyn },
{ "EXERCICIO33", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO33 )}, &ModuleFakeDyn },
{ "EXERCICIO34", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO34 )}, &ModuleFakeDyn },
{ "EXERCICIO35", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO35 )}, &ModuleFakeDyn },
{ "EXERCICIO36", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO36 )}, &ModuleFakeDyn },
{ "EXERCICIO37", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO37 )}, &ModuleFakeDyn },
{ "EXERCICIO38", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO38 )}, &ModuleFakeDyn },
{ "EXERCICIO41", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO41 )}, &ModuleFakeDyn },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "SQRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQRT )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "MOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOD )}, NULL },
{ "EXERCICIO42", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO42 )}, &ModuleFakeDyn },
{ "ATVEICULO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EXERCICIO43", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO43 )}, &ModuleFakeDyn },
{ "EXERCICIO44", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO44 )}, &ModuleFakeDyn },
{ "EXERCICIO45", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO45 )}, &ModuleFakeDyn },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "NSALARIORECEBER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "EXERCICIO46", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO46 )}, &ModuleFakeDyn },
{ "EXERCICIO47", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO47 )}, &ModuleFakeDyn },
{ "EXERCICIO48", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO48 )}, &ModuleFakeDyn },
{ "EXERCICIO51", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO51 )}, &ModuleFakeDyn },
{ "EXERCICIO52", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO52 )}, &ModuleFakeDyn },
{ "EXERCICIO53", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO53 )}, &ModuleFakeDyn },
{ "EXERCICIO54", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO54 )}, &ModuleFakeDyn },
{ "EXERCICIO55", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO55 )}, &ModuleFakeDyn },
{ "EXERCICIO56", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO56 )}, &ModuleFakeDyn },
{ "EXERCICIO57", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO57 )}, &ModuleFakeDyn },
{ "EXERCICIO58", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO58 )}, &ModuleFakeDyn },
{ "EXERCICIO59", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXERCICIO59 )}, &ModuleFakeDyn },
{ "MSGYESNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGYESNO )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_EXERCICIOS )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_EXERCICIOS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_EXERCICIOS )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_PUSHSYMNEAR, 5,	/* EXERCICIO60 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00008 */ HB_P_LINEOFFSET, 2,	/* 7 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00013 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO31 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 1,	/* NINT */
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 14 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '3', '.', '1', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 's', 'e', 'u', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NINT */
	HB_P_DOSHORT, 3,
/* 00066 */ HB_P_LINEOFFSET, 3,	/* 15 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00090 */ HB_P_LINEOFFSET, 5,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00095 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO32 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 21, 0,	/* 21 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 1,	/* NINT */
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 23 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '3', '.', '2', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 's', 'e', 'u', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NINT */
	HB_P_DOSHORT, 3,
/* 00066 */ HB_P_LINEOFFSET, 3,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00090 */ HB_P_LINEOFFSET, 5,	/* 26 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00095 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO33 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 30, 0,	/* 30 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NINT 0*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 31 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NINT2 0*/
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 32 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '3', '.', '3', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'N', 'a', 's', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'o', 'm', ' ', '4', ' ', 'D', 'i', 'g', 'i', 't', 'o', 's', ':', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NINT */
	HB_P_DOSHORT, 3,
/* 00088 */ HB_P_LINEOFFSET, 3,	/* 33 */
	HB_P_PUSHINT, 220, 7,	/* 2012 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 2,	/* NINT2 */
/* 00098 */ HB_P_LINEOFFSET, 4,	/* 34 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NINT2 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'u', 'a', ' ', 'I', 'd', 'a', 'd', 'e', ' ', 'e', 'm', ' ', '2', '0', '1', '2', ' ', 'e', 'r', 'a', ':', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'I', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 3,
/* 00140 */ HB_P_LINEOFFSET, 6,	/* 36 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00145 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO34 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 40, 0,	/* 40 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NNOTA1 0*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 41 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NNOTA2 0*/
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 42 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NMEDIA 0*/
/* 00022 */ HB_P_LINEOFFSET, 4,	/* 44 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '3', '.', '4', 0, 
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'P', 'r', 'i', 'm', 'e', 'i', 'r', 'a', ' ', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NNOTA1 */
	HB_P_DOSHORT, 3,
/* 00074 */ HB_P_LINEOFFSET, 5,	/* 45 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '3', '.', '4', 0, 
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'P', 'r', 'i', 'm', 'e', 'i', 'r', 'a', ' ', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NNOTA2 */
	HB_P_DOSHORT, 3,
/* 00126 */ HB_P_LINEOFFSET, 7,	/* 47 */
	HB_P_PUSHLOCALNEAR, 1,	/* NNOTA1 */
	HB_P_PUSHLOCALNEAR, 2,	/* NNOTA2 */
	HB_P_PLUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_POPLOCALNEAR, 3,	/* NMEDIA */
/* 00138 */ HB_P_LINEOFFSET, 8,	/* 48 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NMEDIA */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'S', 'u', 'a', ' ', 'M', 233, 'd', 'i', 'a', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 233, ':', 0, 
	HB_P_DOSHORT, 2,
/* 00168 */ HB_P_LINEOFFSET, 10,	/* 50 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00173 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO35 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 54, 0,	/* 54 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NRAIO 0*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 55 */
	HB_P_PUSHDOUBLE, 31, 133, 235, 81, 184, 30, 9, 64, 10, 2,	/* 3.14, 10, 2 */
	HB_P_POPLOCALNEAR, 2,	/* NPI */
/* 00025 */ HB_P_LINEOFFSET, 2,	/* 56 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NCOMPRIMENTO 0*/
/* 00031 */ HB_P_LINEOFFSET, 4,	/* 58 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '3', '.', '5', 0, 
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'R', 'a', 'i', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NRAIO */
	HB_P_DOSHORT, 3,
/* 00083 */ HB_P_LINEOFFSET, 5,	/* 59 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 2,	/* NPI */
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 1,	/* NRAIO */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 3,	/* NCOMPRIMENTO */
/* 00095 */ HB_P_LINEOFFSET, 6,	/* 60 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NCOMPRIMENTO */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'O', ' ', 'C', 'o', 'p', 'r', 'i', 'm', 'e', 'n', 't', 'o', ' ', 't', 'o', 't', 'a', 'l', ' ', 233, ' ', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 2,
/* 00131 */ HB_P_LINEOFFSET, 8,	/* 62 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00136 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO36 )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 67, 0,	/* 67 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO37 )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 71, 0,	/* 71 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO38 )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 75, 0,	/* 75 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO41 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 81, 0,	/* 81 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 1,	/* NNUMERO1 */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 82 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '0', '4', '.', '1', 0, 
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NNUMERO1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 4,
/* 00066 */ HB_P_LINEOFFSET, 3,	/* 84 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NNUMERO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* NNUMERO1 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', ' ', 'd', 'o', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'a', 'o', ' ', 'Q', 'u', 'a', 'd', 'r', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00121 */ HB_P_LINEOFFSET, 4,	/* 85 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NNUMERO1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_POWER,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', ' ', 'd', 'o', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'a', 'o', ' ', 'Q', 'u', 'a', 'd', 'r', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00167 */ HB_P_LINEOFFSET, 5,	/* 86 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* SQRT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NNUMERO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'R', 'a', 'i', 'z', ' ', 'Q', 'u', 'a', 'd', 'r', 'a', 'd', 'a', 0, 
	HB_P_DOSHORT, 2,
/* 00197 */ HB_P_LINEOFFSET, 6,	/* 87 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NNUMERO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'a', 'r', 't', 'e', ' ', 'I', 'n', 't', 'e', 'i', 'r', 'a', ' ', 'd', 'o', ' ', 'N', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00246 */ HB_P_LINEOFFSET, 7,	/* 88 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* MOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NNUMERO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'P', 'a', 'r', 't', 'e', ' ', 'F', 'r', 'a', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'a', 0, 
	HB_P_DOSHORT, 2,
/* 00280 */ HB_P_LINEOFFSET, 9,	/* 90 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00285 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO42 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 103, 0,	/* 103 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 1,	/* KMINICIAL */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 104 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 2,	/* KMFINAL */
/* 00034 */ HB_P_LINEOFFSET, 2,	/* 105 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 3,	/* QTDLTGASTO */
/* 00049 */ HB_P_LINEOFFSET, 3,	/* 106 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 4,	/* PRECOLTCOMBT */
/* 00064 */ HB_P_LINEOFFSET, 4,	/* 107 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 5,	/* CPTANQUE */
/* 00079 */ HB_P_LINEOFFSET, 6,	/* 109 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '2', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'K', 'M', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* KMINICIAL */
	HB_P_DOSHORT, 3,
/* 00128 */ HB_P_LINEOFFSET, 7,	/* 110 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '2', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'K', 'M', ' ', 'F', 'I', 'N', 'A', 'L', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* KMFINAL */
	HB_P_DOSHORT, 3,
/* 00175 */ HB_P_LINEOFFSET, 8,	/* 111 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '2', 0, 
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'L', 'I', 'T', 'R', 'O', 'S', ' ', 'G', 'A', 'S', 'T', 'O', 'S', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* QTDLTGASTO */
	HB_P_DOSHORT, 3,
/* 00241 */ HB_P_LINEOFFSET, 9,	/* 112 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '2', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'P', 'R', 'E', 199, 'O', ' ', 'D', 'O', ' ', 'C', 'O', 'M', 'B', 'U', 'S', 'T', 'I', 'V', 'E', 'L', 0, 
	HB_P_PUSHLOCALREF, 4, 0,	/* PRECOLTCOMBT */
	HB_P_DOSHORT, 3,
/* 00300 */ HB_P_LINEOFFSET, 10,	/* 113 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '2', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'C', 'A', 'P', 'A', 'C', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'O', ' ', 'T', 'A', 'N', 'Q', 'U', 'E', 0, 
	HB_P_PUSHLOCALREF, 5, 0,	/* CPTANQUE */
	HB_P_DOSHORT, 3,
/* 00359 */ HB_P_LINEOFFSET, 12,	/* 115 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* KMFINAL */
	HB_P_PUSHLOCALNEAR, 1,	/* KMINICIAL */
	HB_P_MINUS,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'A', ' ', 'q', 'u', 'i', 'l', 'o', 'm', 'e', 't', 'r', 'a', 'g', 'e', 'm', ' ', 'r', 'o', 'd', 'a', 'd', 'a', ' ', 'f', 'o', 'i', ':', 0, 
	HB_P_DOSHORT, 2,
/* 00410 */ HB_P_LINEOFFSET, 13,	/* 116 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* KMFINAL */
	HB_P_PUSHLOCALNEAR, 1,	/* KMINICIAL */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 3,	/* QTDLTGASTO */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'K', 'm', ' ', 'p', 'o', 'r', ' ', 'L', 'i', 't', 'r', 'o', ':', 0, 
	HB_P_DOSHORT, 2,
/* 00450 */ HB_P_LINEOFFSET, 15,	/* 118 */
	HB_P_PUSHLOCALNEAR, 2,	/* KMFINAL */
	HB_P_PUSHLOCALNEAR, 1,	/* KMINICIAL */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 3,	/* QTDLTGASTO */
	HB_P_DIVIDE,
	HB_P_POPLOCALNEAR, 6,	/* KMPORLITRO */
/* 00462 */ HB_P_LINEOFFSET, 16,	/* 119 */
	HB_P_PUSHLOCALNEAR, 6,	/* KMPORLITRO */
	HB_P_PUSHLOCALNEAR, 5,	/* CPTANQUE */
	HB_P_MULT,
	HB_P_POPVARIABLE, 22, 0,	/* ATVEICULO */
/* 00472 */ HB_P_LINEOFFSET, 17,	/* 120 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* ATVEICULO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'A', 'u', 't', 'o', 'n', 'o', 'm', 'i', 'a', ' ', 'd', 'o', ' ', 'v', 'e', 237, 'c', 'u', 'l', 'o', ':', 0, 
	HB_P_DOSHORT, 2,
/* 00515 */ HB_P_LINEOFFSET, 19,	/* 122 */
	HB_P_PUSHLOCALNEAR, 4,	/* PRECOLTCOMBT */
	HB_P_PUSHLOCALNEAR, 2,	/* KMFINAL */
	HB_P_PUSHLOCALNEAR, 1,	/* KMINICIAL */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 6,	/* KMPORLITRO */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 7,	/* CUSTOVIAGEM */
/* 00530 */ HB_P_LINEOFFSET, 20,	/* 123 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CUSTOVIAGEM */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'u', 's', 't', 'o', ' ', 'd', 'a', ' ', 'v', 'i', 'a', 'g', 'e', 'm', ':', 0, 
	HB_P_DOSHORT, 2,
/* 00567 */ HB_P_LINEOFFSET, 22,	/* 125 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00572 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO43 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 129, 0,	/* 129 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 1,	/* NHORASTRABALHADAS */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 130 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 2,	/* NVALORHORATRABALHADA */
/* 00034 */ HB_P_LINEOFFSET, 2,	/* 131 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 3,	/* NVALORSALARIOMINIMO */
/* 00049 */ HB_P_LINEOFFSET, 3,	/* 132 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 4,	/* NVALORSALARIOLIQUIDO */
/* 00064 */ HB_P_LINEOFFSET, 4,	/* 133 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 5,	/* NVALORSALARIOBRUTO */
/* 00079 */ HB_P_LINEOFFSET, 5,	/* 134 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 6,	/* NVALORIMPOSTO */
/* 00094 */ HB_P_LINEOFFSET, 7,	/* 136 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '3', 0, 
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'q', 'u', 'a', 'n', 't', 'i', 'd', 'e', ' ', 'd', 'e', ' ', 'h', 'o', 'r', 'a', 's', ' ', 't', 'r', 'a', 'b', 'a', 'l', 'h', 'a', 'd', 'a', 's', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NHORASTRABALHADAS */
	HB_P_DOSHORT, 3,
/* 00162 */ HB_P_LINEOFFSET, 8,	/* 137 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '3', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'S', 'a', 'l', 'a', 'r', 'i', 'o', ' ', 'M', 'i', 'n', 'i', 'm', 'o', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* NVALORSALARIOMINIMO */
	HB_P_DOSHORT, 3,
/* 00224 */ HB_P_LINEOFFSET, 10,	/* 139 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORSALARIOMINIMO */
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 185, 63, 10, 1,	/* 0.1, 10, 1 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 2,	/* NVALORHORATRABALHADA */
/* 00242 */ HB_P_LINEOFFSET, 11,	/* 140 */
	HB_P_PUSHLOCALNEAR, 1,	/* NHORASTRABALHADAS */
	HB_P_PUSHLOCALNEAR, 2,	/* NVALORHORATRABALHADA */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 5,	/* NVALORSALARIOBRUTO */
/* 00251 */ HB_P_LINEOFFSET, 12,	/* 141 */
	HB_P_PUSHLOCALNEAR, 5,	/* NVALORSALARIOBRUTO */
	HB_P_PUSHDOUBLE, 184, 30, 133, 235, 81, 184, 158, 63, 10, 2,	/* 0.03, 10, 2 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 6,	/* NVALORIMPOSTO */
/* 00269 */ HB_P_LINEOFFSET, 13,	/* 142 */
	HB_P_PUSHLOCALNEAR, 5,	/* NVALORSALARIOBRUTO */
	HB_P_PUSHLOCALNEAR, 6,	/* NVALORIMPOSTO */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 4,	/* NVALORSALARIOLIQUIDO */
/* 00278 */ HB_P_LINEOFFSET, 21,	/* 150 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NVALORSALARIOBRUTO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'O', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'S', 'a', 'l', 'a', 'r', 'i', 'o', ' ', 'B', 'r', 'u', 't', 'o', ' ', 233, ':', 0, 
	HB_P_DOSHORT, 2,
/* 00326 */ HB_P_LINEOFFSET, 22,	/* 151 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* NVALORIMPOSTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'O', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'I', 'm', 'p', 'o', 's', 't', 'o', ' ', 233, ':', 0, 
	HB_P_DOSHORT, 4,
/* 00368 */ HB_P_LINEOFFSET, 23,	/* 152 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NVALORSALARIOLIQUIDO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'O', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'S', 'a', 'l', 'a', 'r', 'i', 'o', ' ', 'L', 'i', 'q', 'u', 'i', 'd', 'o', ' ', 233, ':', 0, 
	HB_P_DOSHORT, 4,
/* 00418 */ HB_P_LINEOFFSET, 25,	/* 154 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00423 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO44 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 158, 0,	/* 158 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 1,	/* NCUSTOQUILOWATT */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 159 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 2,	/* NVALORSALARIOMINIMO */
/* 00034 */ HB_P_LINEOFFSET, 2,	/* 160 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 3,	/* NQTDQUILOWATTCONSUMO */
/* 00049 */ HB_P_LINEOFFSET, 3,	/* 161 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 4,	/* NVALORAPAGAR */
/* 00064 */ HB_P_LINEOFFSET, 4,	/* 162 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 5,	/* NVALORDESC */
/* 00079 */ HB_P_LINEOFFSET, 5,	/* 163 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 6,	/* NVALORAPAGARDESC */
/* 00094 */ HB_P_LINEOFFSET, 7,	/* 165 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '4', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'S', 'a', 'l', 'a', 'r', 'i', 'o', ' ', 'M', 'i', 'n', 'i', 'm', 'o', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NVALORSALARIOMINIMO */
	HB_P_DOSHORT, 3,
/* 00156 */ HB_P_LINEOFFSET, 8,	/* 166 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '4', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'm', 'o', ' ', 'd', 'e', ' ', ' ', 'Q', 'u', 'i', 'l', 'o', 'w', 'a', 'a', 't', 's', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* NQTDQUILOWATTCONSUMO */
	HB_P_DOSHORT, 3,
/* 00217 */ HB_P_LINEOFFSET, 10,	/* 168 */
	HB_P_PUSHLOCALNEAR, 2,	/* NVALORSALARIOMINIMO */
	HB_P_PUSHDOUBLE, 252, 169, 241, 210, 77, 98, 80, 63, 10, 3,	/* 0.001, 10, 3 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 1,	/* NCUSTOQUILOWATT */
/* 00235 */ HB_P_LINEOFFSET, 11,	/* 169 */
	HB_P_PUSHLOCALNEAR, 1,	/* NCUSTOQUILOWATT */
	HB_P_PUSHLOCALNEAR, 3,	/* NQTDQUILOWATTCONSUMO */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 4,	/* NVALORAPAGAR */
/* 00244 */ HB_P_LINEOFFSET, 12,	/* 170 */
	HB_P_PUSHLOCALNEAR, 4,	/* NVALORAPAGAR */
	HB_P_PUSHDOUBLE, 51, 51, 51, 51, 51, 51, 195, 63, 10, 2,	/* 0.15, 10, 2 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 5,	/* NVALORDESC */
/* 00262 */ HB_P_LINEOFFSET, 13,	/* 171 */
	HB_P_PUSHLOCALNEAR, 4,	/* NVALORAPAGAR */
	HB_P_PUSHLOCALNEAR, 5,	/* NVALORDESC */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 6,	/* NVALORAPAGARDESC */
/* 00271 */ HB_P_LINEOFFSET, 15,	/* 173 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NCUSTOQUILOWATT */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'O', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'e', ' ', 'c', 'a', 'd', 'a', ' ', 'Q', 'u', 'i', 'l', 'o', 'w', 'a', 't', 't', ' ', 233, ':', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00321 */ HB_P_LINEOFFSET, 16,	/* 174 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NVALORAPAGAR */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'O', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'a', ' ', 'S', 'e', 'r', ' ', 'P', 'a', 'g', 'o', ' ', 'p', 'o', 'r', ' ', 'E', 's', 's', 'a', ' ', 'r', 'e', 's', 'i', 'd', 'e', 'n', 'c', 'i', 'a', ' ', 233, ':', 0, 
	HB_P_DOSHORT, 2,
/* 00383 */ HB_P_LINEOFFSET, 17,	/* 175 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* NVALORAPAGARDESC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'O', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'a', ' ', 'S', 'e', 'r', ' ', 'P', 'a', 'g', 'o', ' ', 'c', 'o', 'm', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 233, ':', 0, 
	HB_P_DOSHORT, 2,
/* 00438 */ HB_P_LINEOFFSET, 19,	/* 177 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00443 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO45 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 181, 0,	/* 181 */
	HB_P_PUSHSYMNEAR, 26,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* CNOMEVEND */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 182 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NNUCARROSVEND 0*/
/* 00021 */ HB_P_LINEOFFSET, 2,	/* 183 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NVALORTOTALVEND 0*/
/* 00027 */ HB_P_LINEOFFSET, 3,	/* 184 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 224, 133, 64, 10, 2,	/* 700.00, 10, 2 */
	HB_P_POPLOCALNEAR, 4,	/* NSALARIOBASE */
/* 00042 */ HB_P_LINEOFFSET, 4,	/* 185 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* NCOMISSAOCARRO 0*/
/* 00048 */ HB_P_LINEOFFSET, 5,	/* 186 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* NCOMISSAOVENDA 0*/
/* 00054 */ HB_P_LINEOFFSET, 7,	/* 188 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '5', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* CNOMEVEND */
	HB_P_DOSHORT, 3,
/* 00109 */ HB_P_LINEOFFSET, 8,	/* 189 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '5', 0, 
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'i', 'd', 'o', 's', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NNUCARROSVEND */
	HB_P_DOSHORT, 3,
/* 00166 */ HB_P_LINEOFFSET, 9,	/* 190 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '5', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'd', 'a', 's', ' ', 'V', 'e', 'n', 'd', 'a', 's', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* NVALORTOTALVEND */
	HB_P_DOSHORT, 3,
/* 00227 */ HB_P_LINEOFFSET, 11,	/* 192 */
	HB_P_PUSHLOCALNEAR, 2,	/* NNUCARROSVEND */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 5,	/* NCOMISSAOCARRO */
/* 00236 */ HB_P_LINEOFFSET, 12,	/* 193 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORTOTALVEND */
	HB_P_PUSHDOUBLE, 123, 20, 174, 71, 225, 122, 148, 63, 10, 2,	/* 0.02, 10, 2 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 6,	/* NCOMISSAOVENDA */
/* 00254 */ HB_P_LINEOFFSET, 14,	/* 195 */
	HB_P_PUSHLOCALNEAR, 4,	/* NSALARIOBASE */
	HB_P_PUSHLOCALNEAR, 5,	/* NCOMISSAOCARRO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 6,	/* NCOMISSAOVENDA */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 27, 0,	/* NSALARIORECEBER */
/* 00267 */ HB_P_LINEOFFSET, 16,	/* 197 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'O', ' ', 'F', 'U', 'N', 'C', 'I', 'O', 'N', 'A', 'R', 'I', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CNOMEVEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', 'A', ' ', 'O', ' ', 'S', 'A', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'E', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'R', 'S', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* NSALARIORECEBER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'X', 'E', 'R', 'C', 'I', 'C', 'I', 'O', ' ', '4', '.', '5', 0, 
	HB_P_DOSHORT, 2,
/* 00370 */ HB_P_LINEOFFSET, 18,	/* 199 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00375 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO46 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 203, 0,	/* 203 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NPRECOFABRICA 0*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 204 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NPERCIMPORTO 0*/
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 205 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NPERCLUCRODIST 0*/
/* 00022 */ HB_P_LINEOFFSET, 3,	/* 206 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* NVALORLUCRODIST 0*/
/* 00028 */ HB_P_LINEOFFSET, 4,	/* 207 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* NVALORIMPOSTO 0*/
/* 00034 */ HB_P_LINEOFFSET, 5,	/* 208 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* NVALORFINALVEICULO 0*/
/* 00040 */ HB_P_LINEOFFSET, 7,	/* 210 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '6', 0, 
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'P', 'r', 'e', 231, 'o', ' ', 'd', 'e', ' ', 'F', 'a', 'b', 'r', 'i', 'c', 'a', ' ', 'd', 'o', ' ', 'V', 'e', 'i', 'c', 'u', 'l', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NPRECOFABRICA */
	HB_P_DOSHORT, 3,
/* 00108 */ HB_P_LINEOFFSET, 8,	/* 211 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '6', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 't', 'e', ' ', 'a', 'o', ' ', 'i', 'm', 'p', 'o', 's', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NPERCIMPORTO */
	HB_P_DOSHORT, 3,
/* 00180 */ HB_P_LINEOFFSET, 9,	/* 212 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '6', 0, 
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 't', 'e', ' ', 'a', 'o', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'd', 'o', ' ', 'D', 'i', 's', 't', 'r', 'i', 'b', 'u', 'i', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* NPERCLUCRODIST */
	HB_P_DOSHORT, 3,
/* 00266 */ HB_P_LINEOFFSET, 11,	/* 214 */
	HB_P_PUSHLOCALNEAR, 1,	/* NPRECOFABRICA */
	HB_P_PUSHLOCALNEAR, 3,	/* NPERCLUCRODIST */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 4,	/* NVALORLUCRODIST */
/* 00278 */ HB_P_LINEOFFSET, 12,	/* 215 */
	HB_P_PUSHLOCALNEAR, 1,	/* NPRECOFABRICA */
	HB_P_PUSHLOCALNEAR, 4,	/* NVALORLUCRODIST */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* NVALORIMPOSTO */
/* 00287 */ HB_P_LINEOFFSET, 13,	/* 216 */
	HB_P_PUSHLOCALNEAR, 1,	/* NPRECOFABRICA */
	HB_P_PUSHLOCALNEAR, 4,	/* NVALORLUCRODIST */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* NVALORIMPOSTO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* NVALORFINALVEICULO */
/* 00299 */ HB_P_LINEOFFSET, 15,	/* 218 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NVALORLUCRODIST */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'O', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'd', 'o', ' ', 'D', 'i', 's', 't', 'r', 'u', 'b', 'u', 'i', 'd', 'o', 'r', ' ', 233, ':', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00338 */ HB_P_LINEOFFSET, 16,	/* 219 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NVALORIMPOSTO */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'O', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'I', 'm', 'p', 'o', 's', 't', 'o', ' ', 233, ':', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00372 */ HB_P_LINEOFFSET, 17,	/* 220 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* NVALORFINALVEICULO */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'O', ' ', 'P', 'r', 'e', 231, 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'i', 'c', 'u', 'l', 'o', ' ', 233, ':', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00412 */ HB_P_LINEOFFSET, 19,	/* 222 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00417 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO47 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 226, 0,	/* 226 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 1,	/* NVALORSALARIOBRUTO */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 227 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 2,	/* NDESCINSS */
/* 00034 */ HB_P_LINEOFFSET, 2,	/* 228 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 3,	/* NDESCIR */
/* 00049 */ HB_P_LINEOFFSET, 3,	/* 229 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 4,	/* NSALARIOLIQUIDO */
/* 00064 */ HB_P_LINEOFFSET, 5,	/* 231 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '7', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'S', 'a', 'l', 'a', 'r', 'i', 'o', ' ', 'B', 'r', 'u', 't', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NVALORSALARIOBRUTO */
	HB_P_DOSHORT, 3,
/* 00125 */ HB_P_LINEOFFSET, 7,	/* 233 */
	HB_P_PUSHLOCALNEAR, 1,	/* NVALORSALARIOBRUTO */
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 185, 63, 10, 1,	/* 0.1, 10, 1 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 2,	/* NDESCINSS */
/* 00143 */ HB_P_LINEOFFSET, 8,	/* 234 */
	HB_P_PUSHLOCALNEAR, 1,	/* NVALORSALARIOBRUTO */
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 201, 63, 10, 1,	/* 0.2, 10, 1 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 3,	/* NDESCIR */
/* 00161 */ HB_P_LINEOFFSET, 9,	/* 235 */
	HB_P_PUSHLOCALNEAR, 1,	/* NVALORSALARIOBRUTO */
	HB_P_PUSHLOCALNEAR, 2,	/* NDESCINSS */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 3,	/* NDESCIR */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 4,	/* NSALARIOLIQUIDO */
/* 00173 */ HB_P_LINEOFFSET, 11,	/* 237 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'I', 'N', 'S', 'S', ':', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NDESCINSS */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'I', 'R', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NDESCIR */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'S', 'a', 'l', 'a', 'r', 'i', 'o', ' ', 'L', 'i', 'q', 'u', 'i', 'd', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NSALARIOLIQUIDO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00302 */ HB_P_LINEOFFSET, 13,	/* 239 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00307 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO48 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 244, 0,	/* 244 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NQTDCHOC 0*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 245 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NVLCHOC 0*/
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 246 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NQTDREFRI 0*/
/* 00022 */ HB_P_LINEOFFSET, 3,	/* 247 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* NVLREFRI 0*/
/* 00028 */ HB_P_LINEOFFSET, 4,	/* 248 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* NQTDMISTOQUENTE 0*/
/* 00034 */ HB_P_LINEOFFSET, 5,	/* 249 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* NVLMISTOQUENTE 0*/
/* 00040 */ HB_P_LINEOFFSET, 6,	/* 250 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* NQTDSORTEVE 0*/
/* 00046 */ HB_P_LINEOFFSET, 7,	/* 251 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* NVLDSORTEVE 0*/
/* 00052 */ HB_P_LINEOFFSET, 8,	/* 252 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* NVALORDACOMPRA 0*/
/* 00058 */ HB_P_LINEOFFSET, 10,	/* 254 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '8', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'h', 'o', 'c', 'o', 'l', 'a', 't', 'e', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NQTDCHOC */
	HB_P_DOSHORT, 3,
/* 00120 */ HB_P_LINEOFFSET, 11,	/* 255 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '8', 0, 
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'R', 'e', 'f', 'r', 'i', 'g', 'e', 'r', 'a', 'n', 't', 'e', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* NQTDREFRI */
	HB_P_DOSHORT, 3,
/* 00185 */ HB_P_LINEOFFSET, 12,	/* 256 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '8', 0, 
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'M', 'i', 's', 't', 'o', ' ', 'Q', 'u', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHLOCALREF, 5, 0,	/* NQTDMISTOQUENTE */
	HB_P_DOSHORT, 3,
/* 00250 */ HB_P_LINEOFFSET, 13,	/* 257 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '4', '.', '8', 0, 
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'S', 'o', 'r', 'v', 'e', 't', 'e', 0, 
	HB_P_PUSHLOCALREF, 7, 0,	/* NQTDSORTEVE */
	HB_P_DOSHORT, 3,
/* 00310 */ HB_P_LINEOFFSET, 16,	/* 260 */
	HB_P_PUSHLOCALNEAR, 1,	/* NQTDCHOC */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 240, 63, 10, 2,	/* 1.00, 10, 2 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 2,	/* NVLCHOC */
/* 00328 */ HB_P_LINEOFFSET, 17,	/* 261 */
	HB_P_PUSHLOCALNEAR, 3,	/* NQTDREFRI */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 4, 64, 10, 2,	/* 2.50, 10, 2 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 4,	/* NVLREFRI */
/* 00346 */ HB_P_LINEOFFSET, 18,	/* 262 */
	HB_P_PUSHLOCALNEAR, 5,	/* NQTDMISTOQUENTE */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 8, 64, 10, 2,	/* 3.00, 10, 2 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 6,	/* NVLMISTOQUENTE */
/* 00364 */ HB_P_LINEOFFSET, 19,	/* 263 */
	HB_P_PUSHLOCALNEAR, 7,	/* NQTDSORTEVE */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 4, 64, 10, 2,	/* 2.50, 10, 2 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 8,	/* NVLDSORTEVE */
/* 00382 */ HB_P_LINEOFFSET, 20,	/* 264 */
	HB_P_PUSHLOCALNEAR, 2,	/* NVLCHOC */
	HB_P_PUSHLOCALNEAR, 4,	/* NVLREFRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 6,	/* NVLMISTOQUENTE */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 8,	/* NVLDSORTEVE */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* NVALORDACOMPRA */
/* 00397 */ HB_P_LINEOFFSET, 22,	/* 266 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'o', 'c', 'o', 'l', 'a', 't', 'e', ':', ' ', 'R', '$', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NVLCHOC */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'R', 'e', 'f', 'r', 'i', 'g', 'e', 'r', 'a', 'n', 't', 'e', ':', ' ', 'R', '$', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NVLREFRI */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'M', 'i', 's', 't', 'o', ' ', 'Q', 'u', 'e', 'n', 't', 'e', ':', ' ', 'R', '$', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* NVLMISTOQUENTE */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'o', 't', 'a', 'l', ' ', 'S', 'o', 'r', 'v', 'e', 't', 'e', ':', ' ', 'R', '$', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* NVLDSORTEVE */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'o', 'n', 's', 'u', 'm', 'o', ':', ' ', 'R', '$', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* NVALORDACOMPRA */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00688 */ HB_P_LINEOFFSET, 23,	/* 267 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00693 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO51 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 15, 1,	/* 271 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NINT 0*/
/* 00010 */ HB_P_LINEOFFSET, 2,	/* 273 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '1', 0, 
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'u', 'm', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NINT */
	HB_P_DOSHORT, 3,
/* 00056 */ HB_P_LINEOFFSET, 3,	/* 274 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_ZERO,
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 00134) */
/* 00064 */ HB_P_LINEOFFSET, 5,	/* 276 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 201, ' ', 'N', 227, 'o', ' ', 'N', 'e', 'g', 'a', 't', 'i', 'v', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 74,	/* 74 (abs: 00206) */
/* 00134 */ HB_P_LINEOFFSET, 8,	/* 279 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 00206) */
/* 00142 */ HB_P_LINEOFFSET, 9,	/* 280 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 201, ' ', 'N', 'e', 'g', 'a', 't', 'i', 'v', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00206 */ HB_P_LINEOFFSET, 14,	/* 285 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00211 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO52 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 33, 1,	/* 289 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NINT 0*/
/* 00010 */ HB_P_LINEOFFSET, 2,	/* 291 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '2', 0, 
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'u', 'm', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NINT */
	HB_P_DOSHORT, 3,
/* 00056 */ HB_P_LINEOFFSET, 3,	/* 292 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 69,	/* 69 (abs: 00131) */
/* 00064 */ HB_P_LINEOFFSET, 5,	/* 294 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 201, ' ', 'P', 'o', 's', 'i', 't', 'i', 'v', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 145, 0,	/* 145 (abs: 00273) */
/* 00131 */ HB_P_LINEOFFSET, 7,	/* 296 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00205) */
/* 00139 */ HB_P_LINEOFFSET, 8,	/* 297 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 201, ' ', 'N', 'e', 'g', 'a', 't', 'i', 'v', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 70,	/* 70 (abs: 00273) */
/* 00205 */ HB_P_LINEOFFSET, 10,	/* 299 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 00273) */
/* 00213 */ HB_P_LINEOFFSET, 11,	/* 300 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 201, ' ', 'Z', 'e', 'r', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00273 */ HB_P_LINEOFFSET, 14,	/* 303 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00278 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO53 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 51, 1,	/* 307 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NINT 0*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 308 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NINT2 0*/
/* 00016 */ HB_P_LINEOFFSET, 3,	/* 310 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '3', 0, 
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'u', 'm', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NINT */
	HB_P_DOSHORT, 3,
/* 00062 */ HB_P_LINEOFFSET, 4,	/* 311 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '3', 0, 
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'u', 'm', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NINT2 */
	HB_P_DOSHORT, 3,
/* 00108 */ HB_P_LINEOFFSET, 5,	/* 312 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHLOCALNEAR, 2,	/* NINT2 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 00181) */
/* 00117 */ HB_P_LINEOFFSET, 6,	/* 313 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 201, ' ', 'm', 'a', 'i', 'o', 'r', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 150, 0,	/* 150 (abs: 00328) */
/* 00181 */ HB_P_LINEOFFSET, 8,	/* 315 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHLOCALNEAR, 2,	/* NINT2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 00253) */
/* 00190 */ HB_P_LINEOFFSET, 9,	/* 316 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NINT2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 201, ' ', 'M', 'a', 'i', 'o', 'r', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 77,	/* 77 (abs: 00328) */
/* 00253 */ HB_P_LINEOFFSET, 11,	/* 318 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHLOCALNEAR, 2,	/* NINT2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00328) */
/* 00262 */ HB_P_LINEOFFSET, 12,	/* 319 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'O', 's', ' ', 'N', 'u', 'm', 'e', 'r', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'S', 227, 'o', ' ', 'I', 'g', 'u', 'a', 'i', 's', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00328 */ HB_P_LINEOFFSET, 15,	/* 322 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00333 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO54 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 26,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* CNOME */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 327 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NINT 0*/
/* 00021 */ HB_P_LINEOFFSET, 3,	/* 329 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '4', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 's', 'e', 'u', ' ', 'N', 'o', 'm', 'e', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* CNOME */
	HB_P_DOSHORT, 3,
/* 00068 */ HB_P_LINEOFFSET, 4,	/* 330 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '4', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 's', 'u', 'a', ' ', 'I', 'n', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NINT */
	HB_P_DOSHORT, 3,
/* 00117 */ HB_P_LINEOFFSET, 7,	/* 333 */
	HB_P_PUSHLOCALNEAR, 2,	/* NINT */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 00184) */
/* 00126 */ HB_P_LINEOFFSET, 8,	/* 334 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'V', 'o', 'c', 234, ' ', 233, ' ', 'm', 'a', 'i', 'o', 'r', ' ', 'd', 'e', ' ', 'I', 'd', 'a', 'd', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 58,	/* 58 (abs: 00240) */
/* 00184 */ HB_P_LINEOFFSET, 10,	/* 336 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'V', 'o', 'c', 234, ' ', 233, ' ', 'm', 'e', 'n', 'o', 'r', ' ', 'd', 'e', ' ', 'I', 'd', 'a', 'd', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00240 */ HB_P_LINEOFFSET, 12,	/* 338 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00245 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO55 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 86, 1,	/* 342 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NINT 0*/
/* 00010 */ HB_P_LINEOFFSET, 2,	/* 344 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '5', 0, 
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'u', 'm', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NINT */
	HB_P_DOSHORT, 3,
/* 00056 */ HB_P_LINEOFFSET, 4,	/* 346 */
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_MODULUS,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 00137) */
/* 00067 */ HB_P_LINEOFFSET, 5,	/* 347 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 233, ' ', 'u', 'm', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'p', 'a', 'r', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 00163) */
/* 00137 */ HB_P_LINEOFFSET, 7,	/* 349 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NINT */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'O', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'I', 'm', 'p', 'a', 'r', 0, 
	HB_P_DOSHORT, 2,
/* 00163 */ HB_P_LINEOFFSET, 9,	/* 351 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00168 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO56 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 99, 1,	/* 355 */
	HB_P_LOCALNEARSETSTR, 1, 4, 0,	/* NCODICLI 4*/
	'0', '0', '0', 0, 
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 356 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 10, 2,	/* 0.00, 10, 2 */
	HB_P_POPLOCALNEAR, 2,	/* NPRKLWTS */
/* 00029 */ HB_P_LINEOFFSET, 2,	/* 357 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NQTDKLWTS 0*/
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 358 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* NTOTALPAGAR 0*/
/* 00041 */ HB_P_LINEOFFSET, 4,	/* 359 */
	HB_P_PUSHDOUBLE, 205, 204, 204, 204, 204, 76, 53, 64, 10, 2,	/* 21.30, 10, 2 */
	HB_P_POPLOCALNEAR, 5,	/* NPAGARMINIMO */
/* 00056 */ HB_P_LINEOFFSET, 6,	/* 361 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '6', 0, 
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NCODICLI */
	HB_P_DOSHORT, 3,
/* 00114 */ HB_P_LINEOFFSET, 7,	/* 362 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '6', 0, 
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'o', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'r', 'e', 231, 'o', ' ', 'd', 'e', ' ', 'k', 'i', 'l', 'o', 'w', 'a', 't', 't', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NPRKLWTS */
	HB_P_DOSHORT, 3,
/* 00181 */ HB_P_LINEOFFSET, 8,	/* 363 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '6', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'a', ' ', 'q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'c', 'o', 'n', 's', 'u', 'm', 'i', 'd', 'a', ' ', 'd', 'e', ' ', 'k', 'i', 'l', 'o', 'w', 'a', 't', 't', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* NQTDKLWTS */
	HB_P_DOSHORT, 3,
/* 00254 */ HB_P_LINEOFFSET, 10,	/* 365 */
	HB_P_PUSHLOCALNEAR, 2,	/* NPRKLWTS */
	HB_P_PUSHLOCALNEAR, 3,	/* NQTDKLWTS */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 4,	/* NTOTALPAGAR */
/* 00263 */ HB_P_LINEOFFSET, 12,	/* 367 */
	HB_P_PUSHLOCALNEAR, 4,	/* NTOTALPAGAR */
	HB_P_PUSHLOCALNEAR, 5,	/* NPAGARMINIMO */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00345) */
/* 00272 */ HB_P_LINEOFFSET, 13,	/* 368 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'O', 'D', 'I', 'G', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NCODICLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NTOTALPAGAR */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 73,	/* 73 (abs: 00416) */
/* 00345 */ HB_P_LINEOFFSET, 15,	/* 370 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'O', 'D', 'I', 'G', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NCODICLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NPAGARMINIMO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00416 */ HB_P_LINEOFFSET, 17,	/* 372 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00421 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO57 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 119, 1,	/* 375 */
	HB_P_LOCALNEARSETINT, 1, 208, 7,	/* NVERBA 2000*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 376 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NPASSAGEM 0*/
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 377 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NHOSPEDAGEM 0*/
/* 00022 */ HB_P_LINEOFFSET, 3,	/* 378 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* NALIMENTACAO 0*/
/* 00028 */ HB_P_LINEOFFSET, 4,	/* 379 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* NTOTALDEGASTO 0*/
/* 00034 */ HB_P_LINEOFFSET, 6,	/* 381 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '7', 0, 
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'P', 'a', 's', 's', 'a', 'g', 'e', 'm', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NPASSAGEM */
	HB_P_DOSHORT, 3,
/* 00090 */ HB_P_LINEOFFSET, 7,	/* 382 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '7', 0, 
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'P', 'a', 's', 's', 'a', 'g', 'e', 'm', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* NHOSPEDAGEM */
	HB_P_DOSHORT, 3,
/* 00146 */ HB_P_LINEOFFSET, 8,	/* 383 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '7', 0, 
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'P', 'a', 's', 's', 'a', 'g', 'e', 'm', 0, 
	HB_P_PUSHLOCALREF, 4, 0,	/* NALIMENTACAO */
	HB_P_DOSHORT, 3,
/* 00202 */ HB_P_LINEOFFSET, 11,	/* 386 */
	HB_P_PUSHLOCALNEAR, 2,	/* NPASSAGEM */
	HB_P_PUSHLOCALNEAR, 3,	/* NHOSPEDAGEM */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* NALIMENTACAO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* NTOTALDEGASTO */
/* 00214 */ HB_P_LINEOFFSET, 13,	/* 388 */
	HB_P_PUSHLOCALNEAR, 1,	/* NVERBA */
	HB_P_PUSHLOCALNEAR, 5,	/* NTOTALDEGASTO */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 00287) */
/* 00223 */ HB_P_LINEOFFSET, 14,	/* 389 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'e', 'u', ' ', 'd', 'i', 'n', 'h', 'e', 'i', 'r', 'o', ' ', 's', 'e', 'r', 'a', ' ', 's', 'u', 'f', 'i', 'c', 'i', 'e', 'n', 't', 'e', ' ', 'p', 'a', 'r', 'a', ' ', 'b', 'r', 'i', 'n', 'c', 'a', 'r', ' ', 'o', ' ', 'c', 'a', 'r', 'n', 'a', 'v', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 92,	/* 92 (abs: 00377) */
/* 00287 */ HB_P_LINEOFFSET, 16,	/* 391 */
	HB_P_PUSHLOCALNEAR, 1,	/* NVERBA */
	HB_P_PUSHLOCALNEAR, 5,	/* NTOTALDEGASTO */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 83,	/* 83 (abs: 00377) */
/* 00296 */ HB_P_LINEOFFSET, 17,	/* 392 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'S', 'e', 'u', ' ', 'd', 'i', 'n', 'h', 'e', 'i', 'r', 'o', ' ', 'n', 227, 'o', ' ', 's', 'e', 'r', 'a', ' ', 's', 'u', 'f', 'i', 'c', 'i', 'e', 'n', 't', 'e', ' ', 'p', 'a', 'r', 'a', ' ', 'b', 'r', 'i', 'n', 'c', 'a', 'r', ' ', 'o', ' ', 'c', 'a', 'r', 'n', 'a', 'v', 'a', 'l', ',', ' ', 'F', 'I', 'Q', 'U', 'E', ' ', 'E', 'M', ' ', 'C', 'A', 'S', 'A', 0, 
	HB_P_DOSHORT, 1,
/* 00377 */ HB_P_LINEOFFSET, 19,	/* 394 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00382 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO58 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 141, 1,	/* 397 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NVALORVENDA 0*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 398 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NCUPOM 0*/
/* 00016 */ HB_P_LINEOFFSET, 3,	/* 400 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '8', ':', ' ', 0, 
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NVALORVENDA */
	HB_P_DOSHORT, 3,
/* 00071 */ HB_P_LINEOFFSET, 5,	/* 402 */
	HB_P_PUSHLOCALNEAR, 1,	/* NVALORVENDA */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DIVIDE,
	HB_P_POPLOCALNEAR, 2,	/* NCUPOM */
/* 00080 */ HB_P_LINEOFFSET, 7,	/* 404 */
	HB_P_PUSHLOCALNEAR, 2,	/* NCUPOM */
	HB_P_ONE,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 00135) */
/* 00088 */ HB_P_LINEOFFSET, 8,	/* 405 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'N', 227, 'o', ' ', 'P', 'o', 's', 's', 'u', 'i', ' ', 'd', 'i', 'r', 'e', 'i', 'r', 'o', ' ', 'a', ' ', 'c', 'u', 'p', 'o', 'n', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 82,	/* 82 (abs: 00215) */
/* 00135 */ HB_P_LINEOFFSET, 9,	/* 406 */
	HB_P_PUSHLOCALNEAR, 2,	/* NCUPOM */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 00215) */
/* 00143 */ HB_P_LINEOFFSET, 10,	/* 407 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'D', 'i', 'r', 'e', 'i', 't', 'o', ' ', 'a', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NCUPOM */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'u', 'p', 'o', 'n', 's', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00215 */ HB_P_LINEOFFSET, 14,	/* 411 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00220 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO59 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 159, 1,	/* 415 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* NLADO1 0*/
/* 00010 */ HB_P_LINEOFFSET, 1,	/* 416 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* NLADO2 0*/
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 417 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NLADO3 0*/
/* 00022 */ HB_P_LINEOFFSET, 4,	/* 419 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '9', ':', ' ', 0, 
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', '1', 176, ' ', 'l', 'a', 'd', 'o', ' ', 'd', 'o', ' ', 't', 'r', 'i', 'a', 'n', 'g', 'u', 'l', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 1, 0,	/* NLADO1 */
	HB_P_DOSHORT, 3,
/* 00094 */ HB_P_LINEOFFSET, 5,	/* 420 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '9', ':', ' ', 0, 
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', '2', 186, ' ', 'l', 'a', 'd', 'o', ' ', 'd', 'o', ' ', 't', 'r', 'i', 'a', 'n', 'g', 'u', 'l', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* NLADO2 */
	HB_P_DOSHORT, 3,
/* 00166 */ HB_P_LINEOFFSET, 6,	/* 421 */
	HB_P_PUSHSYMNEAR, 7,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'x', 'e', 'r', 'c', 'i', 'c', 'i', 'o', ' ', '5', '.', '9', ':', ' ', 0, 
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', '3', 186, ' ', 'l', 'a', 'd', 'o', ' ', 'd', 'o', ' ', 't', 'r', 'i', 'a', 'n', 'g', 'u', 'l', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALREF, 3, 0,	/* NLADO3 */
	HB_P_DOSHORT, 3,
/* 00238 */ HB_P_LINEOFFSET, 9,	/* 424 */
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_PLUS,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 00272) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_PLUS,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00272) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_PLUS,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 80,	/* 80 (abs: 00352) */
/* 00274 */ HB_P_LINEOFFSET, 10,	/* 425 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'T', 'r', 'i', 'a', 'n', 'g', 'u', 'l', 'o', ' ', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'o', ' ', 'a', ' ', 's', 'o', 'm', 'a', ' ', 'd', 'e', ' ', 'd', 'o', 'i', 's', ' ', 'l', 'a', 'd', 'o', 's', ' ', 233, ' ', 'm', 'e', 'n', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'o', ' ', 'c', 'o', 'm', 'p', 'r', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 5, 1,	/* 261 (abs: 00610) */
/* 00352 */ HB_P_LINEOFFSET, 11,	/* 426 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00368) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 00425) */
/* 00370 */ HB_P_LINEOFFSET, 12,	/* 427 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'T', 'r', 'i', 'a', 'n', 'g', 'u', 'l', 'o', ' ', 'E', 'q', 'u', 'i', 'l', 'a', 't', 'e', 'r', 'o', ' ', 'P', 'o', 's', 's', 'u', 'i', ' ', '3', ' ', 'l', 'a', 'd', 'o', 's', ' ', 'i', 'g', 'u', 'a', 'i', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 188, 0,	/* 188 (abs: 00610) */
/* 00425 */ HB_P_LINEOFFSET, 13,	/* 428 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 00451) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00451) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00477) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 00477) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00477) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 00539) */
/* 00479 */ HB_P_LINEOFFSET, 14,	/* 429 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'T', 'r', 'i', 'a', 'n', 'g', 'u', 'l', 'o', ' ', 'I', 's', 'o', 's', 'c', 'e', 'l', 'e', 's', ' ', 'P', 'o', 's', 's', 'u', 'i', ' ', 'a', 'p', 'e', 'n', 'a', 's', ' ', '2', ' ', 'L', 'a', 'd', 'o', 's', ' ', 'i', 'g', 'u', 'a', 'i', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 73,	/* 73 (abs: 00610) */
/* 00539 */ HB_P_LINEOFFSET, 15,	/* 430 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 1,	/* NLADO1 */
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00555) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 2,	/* NLADO2 */
	HB_P_PUSHLOCALNEAR, 3,	/* NLADO3 */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 00610) */
/* 00557 */ HB_P_LINEOFFSET, 16,	/* 431 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'T', 'r', 'i', 'a', 'n', 'g', 'u', 'l', 'o', ' ', 'E', 's', 'c', 'a', 'l', 'e', 'n', 'o', ' ', 'P', 'o', 's', 's', 'u', 'i', ' ', '3', ' ', 'l', 'a', 'd', 'o', 's', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00610 */ HB_P_LINEOFFSET, 18,	/* 433 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00615 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXERCICIO60 )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 41,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'O', ' ', 'E', 'q', 'u', 'i', 'p', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', 's', 't', 'a', ' ', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'n', 'd', 'o', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 00097) */
/* 00043 */ HB_P_LINEOFFSET, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'e', 'i', 'x', 'a', ' ', 'c', 'o', 'm', 'o', ' ', 'e', 's', 't', 'a', '.', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'V', 'o', 'c', 'e', ' ', 'n', 227, 'o', ' ', 't', 'e', 'm', ' ', 'P', 'r', 'o', 'b', 'l', 'e', 'm', 'a', '.', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 97, 2,	/* 609 (abs: 00703) */
/* 00097 */ HB_P_LINEOFFSET, 3,	/* 439 */
	HB_P_PUSHSYMNEAR, 41,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'o', 'c', 'e', ',', ' ', 'm', 'e', 'x', 'e', 'u', ' ', 'n', 'e', 'l', 'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 104, 1,	/* 360 (abs: 00483) */
/* 00126 */ HB_P_LINEOFFSET, 4,	/* 440 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'V', 'o', 'c', 'e', ' ', 'n', 227, 'o', ' ', 'd', 'e', 'v', 'i', 'a', ' ', 't', 'e', 'r', ' ', 'f', 'e', 'i', 't', 'o', ' ', 'i', 's', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00165 */ HB_P_LINEOFFSET, 5,	/* 441 */
	HB_P_PUSHSYMNEAR, 41,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'e', 'm', ' ', 'c', 'o', 'm', 'o', ' ', 'P', 'r', 'o', 'v', 'a', 'r', ' ', 'q', 'u', 'e', ' ', 'a', ' ', 'c', 'u', 'l', 'p', 'a', ' ', 'n', 227, 'o', ' ', 233, ' ', 's', 'u', 'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 00249) */
/* 00214 */ HB_P_LINEOFFSET, 6,	/* 442 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'V', 'o', 'c', 234, ' ', 'n', 227, 'o', ' ', 't', 'e', 'm', ' ', 'P', 'r', 'o', 'b', 'l', 'e', 'm', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 201, 1,	/* 457 (abs: 00703) */
/* 00249 */ HB_P_LINEOFFSET, 8,	/* 444 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'g', 'o', 'r', 'a', ' ', 'P', 'i', 'o', 'r', 'o', 'u', '!', ' ', 'M', 'a', 'i', 's', ' ', 'v', 'o', 'c', 234, ' ', 'a', 'i', 'n', 'd', 'a', ' ', 't', 'e', 'm', ' ', 'u', 'm', 'a', ' ', 'c', 'h', 'a', 'n', 'c', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00303 */ HB_P_LINEOFFSET, 9,	/* 445 */
	HB_P_PUSHSYMNEAR, 41,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'A', 'l', 'g', 'u', 'e', 'm', ' ', 's', 'a', 'b', 'e', ' ', 'q', 'u', 'e', ' ', 'v', 'o', 'c', 234, ' ', 'm', 'e', 'x', 'e', 'u', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 73,	/* 73 (abs: 00412) */
/* 00341 */ HB_P_LINEOFFSET, 10,	/* 446 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'R', 'e', 'l', 'a', 'x', 'e', '!', ' ', 'M', 'a', 'i', 's', ' ', 'c', 'e', 'd', 'o', ' ', 'o', 'u', ' ', 'm', 'a', 'i', 's', ' ', 't', 'a', 'r', 'd', 'e', ' ', 'v', 'o', 'c', 234, ' ', 'r', 'e', 'c', 'e', 'b', 'e', 'r', 'a', ' ', 'a', ' ', 'r', 'e', 'p', 'r', 'e', 'e', 'n', 's', 227, 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 38, 1,	/* 294 (abs: 00703) */
/* 00412 */ HB_P_LINEOFFSET, 12,	/* 448 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'T', 'e', 'n', 't', 'e', ' ', 'R', 'e', 's', 'o', 'l', 'v', 'e', 'r', ' ', 'o', 'u', ' ', 'E', 'n', 'c', 'o', 't', 'r', 'a', 'r', ' ', 'u', 'm', 'a', ' ', 'b', 'o', 'a', ' ', 'e', 'x', 'p', 'l', 'i', 'c', 'a', 231, 227, 'o', ' ', 'U', 'r', 'g', 'e', 'n', 't', 'e', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 223, 0,	/* 223 (abs: 00703) */
/* 00483 */ HB_P_LINEOFFSET, 16,	/* 452 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'P', 'r', 'e', 'p', 'a', 'r', 'e', '-', 's', 'e', '!', ' ', 'A', 'l', 'g', 'u', 'e', 'm', ' ', 'p', 'o', 'd', 'e', ' ', 'j', 'o', 'g', 'a', 'r', ' ', 'a', ' ', 'c', 'u', 'l', 'p', 'a', ' ', 'e', 'm', ' ', 'v', 'o', 'c', 234, 0, 
	HB_P_DOSHORT, 1,
/* 00538 */ HB_P_LINEOFFSET, 17,	/* 453 */
	HB_P_PUSHSYMNEAR, 41,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'V', 'o', 'c', 234, ' ', 's', 'a', 'b', 'e', ' ', 'd', 'i', 'r', 'e', 'i', 't', 'i', 'n', 'h', 'o', ' ', 'a', ' ', 'c', 'a', 'u', 's', 'a', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm', 'a', '?', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 00633) */
/* 00592 */ HB_P_LINEOFFSET, 18,	/* 454 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'A', 's', 's', 'i', 'm', ' ', 'v', 'o', 'c', 234, ' ', 'n', 227, 'o', ' ', 't', 'e', 'r', 'a', ' ', 'P', 'r', 'o', 'b', 'l', 'e', 'm', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 72,	/* 72 (abs: 00703) */
/* 00633 */ HB_P_LINEOFFSET, 20,	/* 456 */
	HB_P_PUSHSYMNEAR, 8,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'T', 'o', 'r', 231, 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'n', 227, 'o', ' ', 's', 'o', 'b', 'r', 'a', 'r', ' ', 'p', 'r', 'a', ' ', 'v', 'o', 'c', 234, ',', ' ', 'm', 'a', 'i', 's', ' ', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'e', ' ', 's', 'e', ' ', 'p', 'r', 'e', 'p', 'a', 'r', 'a', 'n', 'd', 'o', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00703 */ HB_P_LINEOFFSET, 23,	/* 459 */
	HB_P_ENDPROC
/* 00706 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 42, 0, 1, 0,	/* symbol (_INITSTATICS), 1 statics */
	HB_P_SFRAME, 42, 0,	/* symbol (_INITSTATICS) */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPSTATIC, 1, 0,	/* AFWSTACK */
	HB_P_ENDPROC
/* 00015 */
   };

   hb_vmExecute( pcode, symbols );
}

