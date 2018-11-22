#include "fivewin.ch"
#include "xbrowse.ch"
#include "report.ch"

FUNCTION main()
LOCAL oCli,aDBF:={},cFile:="produto.dbf"

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


oCli:=tproduto():new()

oCli:Interface()

RETURN Nil

CREATE CLASS tproduto

DATA oWnd, oBrw  

METHOD New()CONSTRUCTOR
METHOD Interface()
METHOD Cadastro()
METHOD Editar ()
METHOD Excluir() 
METHOD ValidaCadastro()
//METHOD Imprimir() 

ENDCLASS

METHOD New()CLASS tproduto

RETURN Self

METHOD Interface()CLASS tproduto
LOCAL oBar,oBtn1,oBtn2,oBtn3,oBnt4
  
   USE produto ALIAS 'dbproduto'
   
   
	DEFINE BUTTONBAR oBar SIZE 33,33 OF :: oWnd
   
   DEFINE BUTTON oBtn1 OF oBar FILE "imagens\novo.bmp" TOOLTIP "Cadastro de produto"
   oBtn1:bAction:={||::Cadastro()}
   
	DEFINE BUTTON oBtn2 OF oBar FILE "imagens\alterar.bmp" TOOLTIP "Alteração de produto"   
	 oBtn2:bAction:={||::Editar()}
  
   DEFINE BUTTON oBtn3 OF oBar FILE "imagens\excluir.bmp" TOOLTIP "Excluir de produto"
    oBtn3:bAction:={||::Excluir()}
    
   DEFINE BUTTON oBtn4 OF oBar FILE "imagens\imprimir.bmp" TOOLTIP "Impressão de produto"
    oBtn4:bAction:={||::Imprimir()} 
   
   @0,100 XBROWSE ::oBrw OF :: oWnd ALIAS
   
	oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->codigo}
   oCol:nWidth = 60
   oCol:cHeader = 'código'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->nome}
   oCol:nWidth = 340
   oCol:cHeader = 'Nome do produto'
   
	oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->sexo}
   oCol:nWidth = 40
   oCol:cHeader = 'sexo'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->telefone}
   oCol:nWidth = 70
   oCol:cHeader = 'Telefone'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->email}
   oCol:nWidth = 260
   oCol:cHeader = 'E-mail'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->limite}
   oCol:nWidth = 70
   oCol:cHeader = 'Limite'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->saldo}
   oCol:nWidth = 70
   oCol:cHeader = 'Saldo'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->datanasc}
   oCol:nWidth = 70
   oCol:cHeader = 'Nascimento'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->endereco}
   oCol:nWidth = 270
   oCol:cHeader = 'Endereço'
   
	oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->numero}
   oCol:nWidth = 40
   oCol:cHeader = 'Número'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->bairro}
   oCol:nWidth = 230
   oCol:cHeader = 'Bairro'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->cidade}
   oCol:nWidth = 230
   oCol:cHeader = 'código'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->estado}
   oCol:nWidth = 40
   oCol:cHeader = 'UF'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->cep}
   oCol:nWidth = 70
   oCol:cHeader = 'C.E.P'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->tipo}
   oCol:nWidth = 60
   oCol:cHeader = 'Tipo'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->cpfcnpj}
   oCol:nWidth = 100
   oCol:cHeader = 'CPF/CNPJ'
   
   oCol:=::oBrw:Addcol()
   oCol:bSTRData ={|| dbproduto->dtcadastro}
   oCol:nWidth = 70
   oCol:cHeader = 'Dt.Cadastro'
   
   ::oBrw:CreateFromCode()
   
   ::oWnd:oClient =::oBrw
   
   ACTIVATE WINDOW :: oWnd MAXIMIZED

RETURN NIL

//METHOD Imprimir()CLASS tproduto
//LOCAL  oRpt
 //REPORT oRpt TITLE "RELAÇÃO DE produtoS";
//             HEADER "Data:"+dtoc(date())+" - Hora:"+Time();
 //            FOOTER "Página:"+str(oRpt:nPage) RIGHT;
 //            PREVIEW 
             
//COLUMN oCol1 TITLE "Código" SIZE 10 DATA dbproduto->codigo             
//COLUMN oCol2 TITLE "Nome" SIZE 40 DATA dbproduto->nome             
//COLUMN oCol3 TITLE "Limite" SIZE 15 DATA dbproduto->limite PICTURE"@E 99,999.99";
 //                                   TOTAL                  
//RETURN NIL

METHOD Cadastro()CLASS tproduto
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

DEFINE DIALOG oDlg RESOURCE "CLI_FICHA" TITLE "Cadastro de produtos"

 REDEFINE GET oGetCodigo VAR cCodigo       ID 4014 OF oDlg 
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
    dbproduto->(dbappend())
    dbproduto->codigo        :=val(alltrim(cCodigo))
    dbproduto->nome          :=cNome
    dbproduto->tipo          :=nTipo
    dbproduto->cpfcnpj       :=cCPFCNPJ
    dbproduto->endereco      :=cEndereco
    dbproduto->numero        :=cNumero
    dbproduto->cep           :=cCEP
    dbproduto->bairro        :=cBairro
    dbproduto->cidade        :=cCidade
    dbproduto->estado        :=cUF
    dbproduto->sexo          :=cSexo
    dbproduto->telefone      :=Cfone
    dbproduto->datanasc      :=dNascimento
    dbproduto->email         :=cEmail
    dbproduto->limite        :=nLimite
    dbproduto->saldo         :=nSaldo
    dbproduto->dtcadastro    :=date()
    
	 MsgInfo("produto Gravado com Sucesso!","Ok")
   ELSE   
    MsgStop("produto Não Gravado!","ERRO")
  ENDIF

  RETURN NIL

METHOD ValidaCadastro(cCodigo,cNome,cEmail) CLASS tproduto
  IF empty(cCodigo)
     MsgStop("Informa o Codigo para continuar","ERRO")
     return(.f.)
  ENDIF   
  IF empty(cNome)
     MsgStop("Informa o Nome para continuar","ERRO")
     return(.f.)
  ENDIF
  IF empty(cEmail)
     MsgStop("Informa o E-mail para continuar","ERRO")
     return(.f.)
  ENDIF
 
 RETURN .T.

METHOD Editar()CLASS tproduto
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

cCodigo         :=STR(dbproduto->codigo,8)        
cNome           :=dbproduto->nome
nTipo           :=dbproduto->tipo
cCPFCNPJ        :=dbproduto->cpfcnpj      
cEndereco       :=dbproduto->endereco
cNumero         :=dbproduto->numero
cCEP            :=dbproduto->cep          
cBairro         :=dbproduto->bairro
cCidade         :=dbproduto->cidade
cUF             :=dbproduto->estado
cSexo           :=dbproduto->sexo          
Cfone           :=dbproduto->telefone      
dNascimento     :=dbproduto->datanasc 
cEmail          :=dbproduto->email         
nLimite         :=dbproduto->limite  
nSaldo          :=dbproduto->saldo     

DEFINE DIALOG oDlg RESOURCE "CLI_FICHA" TITLE "Alteração de produtos"

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

    dbproduto->codigo        :=val(alltrim(cCodigo))
    dbproduto->nome          :=cNome
    dbproduto->tipo          :=nTipo
    dbproduto->cpfcnpj       :=cCPFCNPJ
    dbproduto->endereco      :=cEndereco
    dbproduto->numero        :=cNumero
    dbproduto->cep           :=cCEP
    dbproduto->bairro        :=cBairro
    dbproduto->cidade        :=cCidade
    dbproduto->estado        :=cUF
    dbproduto->sexo          :=cSexo
    dbproduto->telefone      :=Cfone
    dbproduto->datanasc      :=dNascimento
    dbproduto->email         :=cEmail
    dbproduto->limite        :=nLimite
    dbproduto->saldo         :=nSaldo
   
  
    
	 MsgInfo("produto Alterado com Sucesso!","Ok")
  ELSE   
    MsgStop("produto Não Alterado!","Atenção")
  ENDIF




RETURN NIL

METHOD Excluir()CLASS tproduto
if MsgYesNo("Tem certeza que deseja escluir o produto ?","Exclusão")=.T.
	dbproduto->(dbdelete())
	dbproduto->(dbpack())
ENDIF

RETURN