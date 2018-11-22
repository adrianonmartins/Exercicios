//Area de identificação

 **************************************
 //  Exercicio: Cadastro de Clientes //
 //  Autor : Adriano                 //
 **************************************
#include "fivewin.ch"
#include "xbrowse.ch"
#include "report.ch"

FUNCTION main()

LOCAL oCli,aDBF:={},cFile:="cliente.dbf"

SET DATE french
SET DATE FORMAT TO "DD/MM/YYYY"
SET EPOCH TO 1950

if !file (cFile)
    aadd(aDBF,{'codigo','N',10,0}) 
    aadd(aDBF,{'nome','C',40,0}) 
    aadd(aDBF,{'tipo','N',1,0}) 
    aadd(aDBF,{'cpfcnpj','C',15,0}) 
    aadd(aDBF,{'endereco','C',40,0}) 
    aadd(aDBF,{'numero','C',10,0}) 
    aadd(aDBF,{'cep','C',10,0}) 
    aadd(aDBF,{'bairro','C',30,0}) 
    aadd(aDBF,{'cidade','C',30,0}) 
    aadd(aDBF,{'estado','C',2,0}) 
    aadd(aDBF,{'sexo','C',1,0})
    aadd(aDBF,{'telefone','C',15,0})
    aadd(aDBF,{'datanasc','D',8,0})
    aadd(aDBF,{'email','C',60,0})
    aadd(aDBF,{'limite','N',12,2})
    aadd(aDBF,{'saldo','N',12,2})
    aadd(aDBF,{'dtcadastro','D',6,0})
	 
	 DBCREATE(cFile,aDBF,"DBFNTX")
	 
endif 

SET DATE french
SET DATE FORMAT TO "DD/MM/YYYY"
SET EPOCH TO 1950

oCli:=tCliente():new()

oCli:Interface()

RETURN Nil

CREATE CLASS tCliente

DATA oWnd, oBrw  

METHOD New()CONSTRUCTOR
METHOD Interface()
METHOD Cadastro()
METHOD Editar ()
METHOD Excluir() 
METHOD ValidaCadastro()
METHOD Imprimir() 
//METHOD GerarCodigoContato()
METHOD PessoaFisicaJuridica()
METHOD ConsultaSaldo()
ENDCLASS

METHOD New()CLASS tCliente

RETURN Self

METHOD Interface()CLASS tCliente
LOCAL oBar,oBtn1,oBtn2,oBtn3,oBnt4,oBnt5
  
   USE cliente ALIAS 'dbcliente'
   DEFINE WINDOW ::oWnd TITLE "Cadastro de Clientes"
   
	DEFINE BUTTONBAR oBar SIZE 60,60 OF :: oWnd
   
   DEFINE BUTTON oBtn1 OF oBar ACTION(::PessoaFisicaJuridica(),obrw:refresh()) TOOLTIP "Novo Cliente"FILE"imagens\novo.bmp"
   oBtn1:bAction:={||::PessoaFisicaJuridica()}
   
	DEFINE BUTTON oBtn2 OF oBar FILE "imagens\alterar.bmp" TOOLTIP "Alteração de Cliente"   
	 oBtn2:bAction:={||::Editar()}
  
   DEFINE BUTTON oBtn3 OF oBar FILE "imagens\excluir.bmp" TOOLTIP "Excluisão de Cliente"
    oBtn3:bAction:={||::Excluir()}
    
   DEFINE BUTTON oBtn4 OF oBar FILE "imagens\imprimir.bmp" TOOLTIP "Impressão de Cliente"
    oBtn4:bAction:={||::Imprimir()}
   
	DEFINE BUTTON oBtn5 OF oBar FILE "imagens\consultaSaldo.bmp" TOOLTIP "Consulta Saldo de Cliente"
    oBtn5:bAction:={||::ConsultaSaldo()}
	    
   @0,0 XBROWSE ::oBrw OF :: oWnd ALIAS
   
	oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->codigo}
   oCol:nWidth = 60
   oCol:cHeader = 'código'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->nome}
   oCol:nWidth = 340
   oCol:cHeader = 'Nome do Cliente'
   
	oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->sexo}
   oCol:nWidth = 40
   oCol:cHeader = 'sexo'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->telefone}
   oCol:nWidth = 70
   oCol:cHeader = 'Telefone'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->email}
   oCol:nWidth = 260
   oCol:cHeader = 'E-mail'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->limite}
   oCol:nWidth = 70
   oCol:cHeader = 'Limite'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->saldo}
   oCol:nWidth = 70
   oCol:cHeader = 'Saldo'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->datanasc}
   oCol:nWidth = 70
   oCol:cHeader = 'Nascimento'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->endereco}
   oCol:nWidth = 270
   oCol:cHeader = 'Endereço'
   
	oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->numero}
   oCol:nWidth = 40
   oCol:cHeader = 'Número'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->bairro}
   oCol:nWidth = 230
   oCol:cHeader = 'Bairro'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->cidade}
   oCol:nWidth = 230
   oCol:cHeader = 'código'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->estado}
   oCol:nWidth = 40
   oCol:cHeader = 'UF'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->cep}
   oCol:nWidth = 70
   oCol:cHeader = 'C.E.P'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->tipo}
   oCol:nWidth = 60
   oCol:cHeader = 'Tipo'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->cpfcnpj}
   oCol:nWidth = 100
   oCol:cHeader = 'CPF/CNPJ'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbcliente->dtcadastro}
   oCol:nWidth = 70
   oCol:cHeader = 'Dt.Cadastro'
   
   ::oBrw:CreateFromCode()
   
   ::oWnd:oClient =::oBrw
   
   ACTIVATE WINDOW :: oWnd MAXIMIZED

RETURN NIL

FUNCTION GerarCodigoContato()
 Local cCodigo:= 0

   Select dbcliente
   SET order to 1
   Go Bottom

   cCodigo := dbcliente->codigo+1

   Return cCodigo

METHOD Imprimir()CLASS tCliente
LOCAL  oRpt

REPORT oRpt TITLE "RELAÇÃO DE CLIENTES";
             HEADER "Data:"+dtoc(date())+" - Hora:"+Time();
             FOOTER "Página:"+str(oRpt:nPage) RIGHT;
             PREVIEW;
				 CAPTION "RELAÇÃO DE CLIENTES - PROJETO FIVEWIN " 
             
COLUMN oCol1 TITLE "Código" SIZE 10 DATA dbcliente->codigo             
COLUMN oCol2 TITLE "Nome" SIZE 40 DATA dbcliente->nome             
COLUMN oCol3 TITLE "Limite" SIZE 15 DATA dbcliente->limite;
				 PICTURE"@E 99,999.99";
     			 TOTAL
COLUMN oCo14 TITLE "Cadastro" SIZE 10 DATA dbcliente->dtcadastro;
				 PICTURE "@D 99/99/9999"
ENDREPORT
ACTIVATE REPORT oRpt				 	 												                  

RETURN NIL

METHOD PessoaFisicaJuridica () //CLASS tCliente
   LOCAL oDlg, oBtnFisica, oBtnJuridica, oBtnVoltar, oBtnPJ, oBtnpf, obrw

   DEFINE DIALOG oDlg RESOURCE "PFISICAPJURIDICA" TITLE "TIPO"

//    REDEFINE BUTTON  FILENAME oBtnpf+"PFISICA.bmp" +  ID  4005 OF oDlg  
 //     REDEFINE BUTTON oBtnjf    ID 2006 OF oDlg  ACTION (FILE "imagens\PJURIDICA.bmp")


      REDEFINE BUTTON oBtnFisica    ID 2010 OF oDlg  ACTION (::Cadastro(), obrw:refresh())
  
      //oBtnCPF:bAction:={|| ::CadastroPF()}

      REDEFINE BUTTON oBtnJuridica   ID 2020 OF oDlg  ACTION (::Cadastro(), obrw:refresh())
      //oBtnCNPJ:bAction:={|| ::CadastroPJ()}

     REDEFINE BUTTON oBtnVoltar   ID 2021 OF oDlg ACTION IIf(MsgYesNo("Deseja sair?","Pergunta"),odlg:end(),.f.)

     ACTIVATE DIALOG oDlg CENTERED

   RETURN NIL

METHOD Cadastro()CLASS tCliente
LOCAL oDlg, cCodigo:=space(8),cNome:=space(40),nTipo:=1,;
cCPFCNPJ:=space(14),cEmail:=space(100),dNascimento:=ctod(""),;
cEndereco:=space(40),cNumero:=space(7),cBairro:=space(30),;
cCidade:=space(30),cUF:=space(2),cCEP:=space(10),;
Cfone:=space(15),;
nLimite:=0,;
nSaldo:=0,;
cSexo:=space(1)
LOCAL lGrava:=.f.

LOCAL oGetCodigo,OGetNome,oRdTipo,oGetCPF,oGetEmail,oGetNasc,;
oGetEnde,oGetNum,oGetBairro,oGetCida,oGetUF,oGetCEP,oGetfone,;
oGetLimite,oGetSaldo,oGetSexo
Local oBtnOk
Local oBtSair

DEFINE DIALOG oDlg RESOURCE "CLI_FICHA" TITLE "Cadastro de Clientes"

 REDEFINE GET oGetCodigo VAR cCodigo       ID 4014 OF oDlg
 oGetCodigo:disable() 
 REDEFINE GET oGetNome   VAR cNome         ID 4015 OF oDlg PICTURE "@!"

 REDEFINE RADIO oRdTipo  var nTipo         ID 4016,4018 OF oDlg

 REDEFINE Get oGetCPF    var cCPFCNPJ      ID 4020 OF oDlg
 REDEFINE Get oGetEmail  var cEmail        ID 4021 OF oDlg
 REDEFINE Get oGetNasc   var dNascimento   ID 4022 OF oDlg

 REDEFINE Get oGetEnde   var cEndereco     ID 4023 OF oDlg  PICTURE "@!"
 REDEFINE Get oGetNum    var cNumero       ID 4024 OF oDlg
 REDEFINE Get oGetBairro var cBairro       ID 4025 OF oDlg  PICTURE "@!"

 REDEFINE Get oGetCida   var cCidade       ID 4026 OF oDlg PICTURE "@!"
 REDEFINE Get oGetUF     var cUF           ID 4027 OF oDlg PICTURE "@!"
 REDEFINE Get oGetCEP    var cCEP          ID 4028 OF oDlg PICTURE "@R 99.999-999"

 REDEFINE Get oGetfone   var Cfone         ID 4029 OF oDlg PICTURE "@R (99)99999-9999"
 REDEFINE Get oGetLimite var nLimite       ID 4030 OF oDlg PICTURE "@E 99,999.99" 
 REDEFINE Get oGetSaldo  var nSaldo        ID 4031 OF oDlg PICTURE "@E 99,999.99" 
 REDEFINE Get oGetSexo   var cSexo         ID 4032 OF oDlg PICTURE "@!" VALID cSexo$("MF")

 REDEFINE BUTTON oBtnOk    ID  4034 OF oDlg
 oBtnOk:bAction:={||IF(::ValidaCadastro(cCodigo,cNome,cEmail),;
 							(lGrava:=.t.,oDlg:End()),(lGrava:=.f.))}

 REDEFINE BUTTON oBtnSair  ID  4035 OF oDlg
 oBtnSair:bAction:={|| oDlg:end()} 
 

ACTIVATE DIALOG oDlg CENTERED

  IF lGrava =.t.
    dbcliente->(dbappend())
    dbcliente->codigo        :=val(alltrim(cCodigo))
    dbcliente->nome          :=cNome
    dbcliente->tipo          :=nTipo
    dbcliente->cpfcnpj       :=cCPFCNPJ
    dbcliente->endereco      :=cEndereco
    dbcliente->numero        :=cNumero
    dbcliente->cep           :=cCEP
    dbcliente->bairro        :=cBairro
    dbcliente->cidade        :=cCidade
    dbcliente->estado        :=cUF
    dbcliente->sexo          :=cSexo
    dbcliente->telefone      :=Cfone
    dbcliente->datanasc      :=dNascimento
    dbcliente->email         :=cEmail
    dbcliente->limite        :=nLimite
    dbcliente->saldo         :=nSaldo
    dbcliente->dtcadastro    :=date()
    
	 MsgInfo("Cliente Gravado com Sucesso!","Ok")
   ELSE   
    MsgStop("Cliente Não Gravado!","ERRO")
  ENDIF

  RETURN NIL

METHOD ValidaCadastro(cCodigo,cNome,cEmail) CLASS tCliente

  // 2° Tomadas de Decisões
****************************************************************
//  IF empty(cCodigo)                                           //
//     MsgStop("Informa o Codigo para continuar","ERRO")        //
//     return(.f.)                                              //
//  ENDIF                                                       //
//  IF empty(cNome)                                             //
//     MsgStop("Informa o Nome para continuar","ERRO")          //
//     return(.f.)                                              //
//  ENDIF                                                       //
//  IF empty(cEmail)                                            //
//     MsgStop("Informa o E-mail para continuar","ERRO")        //
//     return(.f.)                                              //
//  ENDIF                                                       //
//                                                              //
// RETURN .T.                                                   //
****************************************************************
DO CASE
  CASE empty(cCodigo)
     MsgStop("Informa o Codigo para continuar","ERRO")
     return(.f.)
    
  CASE empty(cNome)
     MsgStop("Informa o Nome para continuar","ERRO")
     return(.f.)

  CASE empty(cEmail)
     MsgStop("Informa o E-mail para continuar","ERRO")
     return(.f.)
ENDCASE

METHOD Editar()CLASS tCliente
LOCAL oDlg
LOCAL cCodigo:=space(8)
LOCAL cNome:=space(40)
LOCAL nTipo:=1
LOCAL cCPFCNPJ:=space(14)
LOCAL cEmail:=space(100)
LOCAL dNascimento:=ctod("")
LOCAL cEndereco:=space(40)
LOCAL cNumero:=space(7)
LOCAL cBairro:=space(30)
LOCAL cCidade:=space(30)
LOCAL cUF:=space(2)
LOCAL cCEP:=space(10)
LOCAL Cfone:=space(15)
LOCAL nLimite:=0
LOCAL nSaldo:=0
LOCAL cSexo:=space(1)
LOCAL lGrava:=.f.

LOCAL oGetCodigo,OGetNome,oRdTipo,oGetCPF,oGetEmail,oGetNasc,;
oGetEnde,oGetNum,oGetBairro,oGetCida,oGetUF,oGetCEP,oGetfone,;
oGetLimite,oGetSaldo,oGetSexo
Local oBtnOk
Local oBtSair

cCodigo         :=STR(dbcliente->codigo,8)        
cNome           :=dbcliente->nome
nTipo           :=dbcliente->tipo
cCPFCNPJ        :=dbcliente->cpfcnpj      
cEndereco       :=dbcliente->endereco
cNumero         :=dbcliente->numero
cCEP            :=dbcliente->cep          
cBairro         :=dbcliente->bairro
cCidade         :=dbcliente->cidade
cUF             :=dbcliente->estado
cSexo           :=dbcliente->sexo          
Cfone           :=dbcliente->telefone      
dNascimento     :=dbcliente->datanasc 
cEmail          :=dbcliente->email         
nLimite         :=dbcliente->limite  
nSaldo          :=dbcliente->saldo     

DEFINE DIALOG oDlg RESOURCE "CLI_FICHA" TITLE "Alteração de Clientes"

 REDEFINE GET oGetCodigo VAR cCodigo       ID 4014 OF oDlg
 oGetCodigo:disable()
 REDEFINE GET oGetNome   VAR cNome         ID 4015 OF oDlg PICTURE "@!"

 REDEFINE RADIO oRdTipo  var nTipo         ID 4016,4018 OF oDlg

 REDEFINE Get oGetCPF    var cCPFCNPJ      ID 4020 OF oDlg
 REDEFINE Get oGetEmail  var cEmail        ID 4021 OF oDlg
 REDEFINE Get oGetNasc   var dNascimento   ID 4022 OF oDlg

 REDEFINE Get oGetEnde   var cEndereco     ID 4023 OF oDlg  PICTURE "@!"
 REDEFINE Get oGetNum    var cNumero       ID 4024 OF oDlg
 REDEFINE Get oGetBairro var cBairro       ID 4025 OF oDlg  PICTURE "@!"

 REDEFINE Get oGetCida   var cCidade       ID 4026 OF oDlg
 REDEFINE Get oGetUF     var cUF           ID 4027 OF oDlg PICTURE "@!"
 REDEFINE Get oGetCEP    var cCEP          ID 4028 OF oDlg PICTURE "@R 99.999-999"

 REDEFINE Get oGetfone   var Cfone         ID 4029 OF oDlg PICTURE "@R (99)99999-9999"
 REDEFINE Get oGetLimite var nLimite       ID 4030 OF oDlg PICTURE "@E 99,999.99" 
 REDEFINE Get oGetSaldo  var nSaldo        ID 4031 OF oDlg PICTURE "@E 99,999.99" 
 REDEFINE Get oGetSexo   var cSexo         ID 4032 OF oDlg PICTURE "@!" VALID cSexo$("MF")

 REDEFINE BUTTON oBtnOk    ID  4034 OF oDlg
 oBtnOk:bAction:={||IF(::ValidaCadastro(cCodigo,cNome,cEmail),;
 							(lGrava:=.t.,oDlg:End()),(lGrava:=.f.))}

 REDEFINE BUTTON oBtnSair  ID  4035 OF oDlg
 oBtnSair:bAction:={|| oDlg:end()} 
 

ACTIVATE DIALOG oDlg CENTERED

  IF lGrava =.t.

    dbcliente->codigo        :=val(alltrim(cCodigo))
    dbcliente->nome          :=cNome
    dbcliente->tipo          :=nTipo
    dbcliente->cpfcnpj       :=cCPFCNPJ
    dbcliente->endereco      :=cEndereco
    dbcliente->numero        :=cNumero
    dbcliente->cep           :=cCEP
    dbcliente->bairro        :=cBairro
    dbcliente->cidade        :=cCidade
    dbcliente->estado        :=cUF
    dbcliente->sexo          :=cSexo
    dbcliente->telefone      :=Cfone
    dbcliente->datanasc      :=dNascimento
    dbcliente->email         :=cEmail
    dbcliente->limite        :=nLimite
    dbcliente->saldo         :=nSaldo
   
  
    
	 MsgInfo("Cliente Alterado com Sucesso!","Ok")
  ELSE   
    MsgStop("Cliente Não Alterado!","Atenção")
  ENDIF
RETURN NIL

METHOD Excluir()CLASS tCliente
if MsgYesNo("Tem certeza que deseja escluir o cliente ?","Exclusão")=.T.
	dbcliente->(dbdelete())
	dbcliente->(dbpack())
ENDIF
METHOD ConsultaSaldo()CLASS tCliente
    //Area de Ajustes iniciais
***************************************************************************************
	    Local nLimite:=0.00                                                           //
	    Local nSaldo:=0.00                                                            //
	    Local nGasto:=0.00                                                            //
***************************************************************************************
    // Corpo do Programa                                                             
***************************************************************************************	                   
	    MsgGet("Calcula Limite Disponivel","Informe o Limite do Cliente",@nLimite)    //
	    MsgGet("Calcula Limite Disponivel","Informe Informar o Valor Gasto",@nGasto)  //
	                                                                                  //
       nSaldo:= nLimite - nGasto                                                     //
***************************************************************************************
    // Area de Encerramento
***************************************************************************************    
       MsgInfo("Saldo Disponivel: "+alltrim(STR(nSaldo),8,2)+"$ Reais","Saldo")      //
***************************************************************************************																												 //
RETURN

