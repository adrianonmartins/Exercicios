#include "Fivewin.ch"
#include "xbrowse.ch"  //Criar a interface principal do programa
#include "report.ch"
#Define CLR_SKY    nRGB( 202, 228, 255 )

FUNCTION Main()

LOCAL oCli, aDBF:={},cFile:="cliente.dbf" // criação da estrutura base de dados
   SET DATE BRIT   // Define a data em formato Françês
   SET DATE FORMAT TO "DD/MM/YYYY"  // Define o formato que eu quero
   SET EPOCH TO 1950 //Definir a época evitando o bug do M // a Variavel aDBF será uma matrix
   SET 3DLOOK ON    // Visual 3d no tema do programa
   SET SOFTSEEK OFF // Pesquisa sensivel Desativada
   SET CONFIRM ON   // Requer do Usuario presionar enter
   sethandlecount(250) // Quantidade de Arquivos que o Programa pode abrir
   SetBalloon( .T. )  // Funçao para Mudar o Formato do ToolTip

   REQUEST DBFCDX
   RDDSETDEFAULT("DBFCDX")


   if !file(cFile) // determina se um arquivo existe ou não no computador
      aadd(aDBF,{'codigo','N',10,0})    // Adicionar campo a matrix
      aadd(aDBF,{'nome','C',40,0})
      aadd(aDBF,{'tipo','N',1,0})
      aadd(aDBF,{'cpfcnpj','C',15,0})
      aadd(aDBF,{'endereco','C',40,0})
      aadd(aDBF,{'numero','C',10,0})
      aadd(aDBF,{'cep','C',10,0})
      aadd(aDBF,{'bairro','C',30,0})
      aadd(aDBF,{'cidade','C',30,0})
      aadd(aDBF,{'estado','C',2,0})
      aadd(aDBF,{'sexo','C',1,0})     //F-Feminino M-Masculino
      aadd(aDBF,{'telefone','C',15,0})
      aadd(aDBF,{'datanasc','D',8,0})
      aadd(aDBF,{'email','C',60,0})
      aadd(aDBF,{'limite','N',12,2})
      aadd(aDBF,{'saldo','N',12,2})
      aadd(aDBF,{'dtcadastro','D',8,0}) // Definir formato de data

      DBCREATE(cFile,aDBF) //nao precisa do ntx pois ja tem o cdx no inicio  // Criar meu arquivo Cliente.dbf

   endif
   

    if ! File("cliente.cdx")
       use cliente exclusive
            if !NetErr()
               pack
               index on codigo      tag cliente1 to cliente &&   Indexando os campos
               index on UPPER(nome) tag cliente2 to cliente &&   Não é necessario indexar todos os campos
               index on telefone    tag cliente3 to cliente &&   exite varias maneiras de usar indices de pesquisa
               index on CPFCNPJ     tag cliente4 to cliente
            endif
    Endif
    
    Close data

Interface ()

RETURN NIL

FUNCTION Interface()
LOCAL oBar,oBtn1,oBtn2,oBtn3,oBtn4,oBtn5,oBtn6,oBtn7,oBtn8

   USE cliente ALIAS 'dbcliente' //SHARED
   DEFINE WINDOW oWnd TITLE "Cadastro de clientes"

       DEFINE BUTTONBAR oBar SIZE 80,50 OF oWnd // Este comando define a barra de botões e Size define o tamanho dos botões

       DEFINE BUTTON oBtn1 OF oBar ACTION (PessoaFJ(), obrw:refresh()) TOOLTIP "Cadastro de Clientes" FILE ".\imagens\novo.bmp" Prompt "&1.Incluir"
       DEFINE BUTTON oBtn2 OF oBar ACTION (Editar(), obrw:refresh()) FILE "imagens\alterar.bmp" TOOLTIP "Alteração de Clientes" Prompt "&2.Alterar"
       DEFINE BUTTON oBtn3 OF oBar ACTION (Excluir(), obrw:refresh()) FILE "imagens\excluir.bmp" TOOLTIP "Exclusão de Clientes" Prompt "&3.Excluir"
       DEFINE BUTTON oBtn4 OF oBar ACTION (Imprimir(), obrw:refresh()) FILE "imagens\Imprimir.bmp" TOOLTIP "Imprimir Clientes" Prompt "&4.Imprimir"
       DEFINE BUTTON oBtn5 OF oBar ACTION (pesq_codigo()) FILE "imagens\pesquisar.bmp" TOOLTIP "Pesquisar Clientes" Prompt "&5.Código"
       DEFINE BUTTON oBtn6 OF oBar ACTION (pesq_nome()) FILE "imagens\pesquisar.bmp" TOOLTIP "Pesquisar Clientes" Prompt "&6.Nome"
       DEFINE BUTTON oBtn7 OF oBar ACTION (pesq_Telefone(), obrw:refresh()) FILE "imagens\pesquisar.bmp" TOOLTIP "Pesquisar Clientes" Prompt "&7.Telefone"
       DEFINE BUTTON oBtn8 OF oBar ACTION (pesq_CPFCNPJ(), obrw:refresh() ) FILE "imagens\pesquisar.bmp" TOOLTIP "Pesquisar Clientes" Prompt "&8.CPF/CNPJ"

       @0,0 XBROWSE oBrw OF oWnd ALIAS 'dbcliente'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| strzero(dbcliente->codigo,5,0)}
       oCol:nWidth            =60
       oCol:cHeader           ='Código'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->nome}
       oCol:nWidth            =340
       oCol:cHeader           ='Nome do cliente'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->tipo}
       oCol:nWidth            =50
       oCol:cHeader           ='Tipo'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->cpfcnpj}
       oCol:nWidth            =100
       oCol:cHeader           ='CPF/CNPJ'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->endereco}
       oCol:nWidth            =270
       oCol:cHeader           ='Endereço'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->numero}
       oCol:nWidth            =70
       oCol:cHeader           ='Número'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->cep}
       oCol:nWidth            =70
       oCol:cHeader           ='C.E.P.'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->bairro}
       oCol:nWidth            =230
       oCol:cHeader           ='Bairro'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->cidade}
       oCol:nWidth            =230
       oCol:cHeader           ='Cidade'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->estado}
       oCol:nWidth            =40
       oCol:cHeader           ='UF'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->sexo}
       oCol:nWidth            =40
       oCol:cHeader           ='Sexo'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->telefone}
       oCol:nWidth            =100
       oCol:cHeader           ='Telefone'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->datanasc}
       oCol:nWidth            =70
       oCol:cHeader           ='Nascimento'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->email}
       oCol:nWidth            =260
       oCol:cHeader           ='E-mail'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->limite}
       oCol:nWidth            =70
       oCol:cHeader           ='Limite'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->saldo}
       oCol:nWidth            =70
       oCol:cHeader           ='Saldo'

       oCol:=oBrw:AddCol()
       oCol:bStrData          = {|| dbcliente->dtcadastro}
       oCol:nWidth            =70
       oCol:cHeader           ='Dt. Cadastro'

       oBrw:CreateFromCode()  // Finalizamos a XBROWSE
       oWnd:oClient      = oBrw  //Definimos a XBROWSE como liente da Window

ACTIVATE WINDOW oWnd MAXIMIZED

RETURN NIL


FUNCTION GerarCodigoContato()
 Local cCodigo:= 0

   Select dbcliente
   SET order to 1
   Go Bottom

   cCodigo := dbcliente->codigo+1

   Return cCodigo




FUNCTION PessoaFJ () //CLASS tCliente
   LOCAL oDlg, oBtnCPF, oBtnCNPJ, oBtnSair, oBtnPJ, oBtnpf

   DEFINE DIALOG oDlg RESOURCE "CPFCNPJ" TITLE "Tipo"

      REDEFINE BUTTON oBtnCPF     ID 1010 OF oDlg  ACTION (CadastroPF(), obrw:refresh())
      //oBtnCPF:bAction:={|| ::CadastroPF()}

      REDEFINE BUTTON oBtnCNPJ     ID 1020 OF oDlg  ACTION (CadastroPJ(), obrw:refresh())
      //oBtnCNPJ:bAction:={|| ::CadastroPJ()}

      REDEFINE BUTTON oBtnSair   ID 1030 OF oDlg ACTION IIf(MsgYesNo("Deseja sair?","Pergunta"),odlg:end(),.f.)

      ACTIVATE DIALOG oDlg CENTERED

   RETURN NIL


FUNCTION CadastroPF()

LOCAL oDlg,cCodigo:=strzero(GerarCodigoContato(),5,0),cNome:=space(40),nTipo:=1,;
cCPFCNPJ:=space(14),cEmail:=space(100),dNascimento:=ctod(""),;
cEndereco:=space(40),cNumero:=space(7),cBairro:=space(30),;
cCidade:=space(30),cUF:=space(2),cFone:=space(16),cCEP:=space(10),;
nLimite:=0,nSaldo:=0,cSexo:=space(1),lGrava:=.f.

LOCAL oGetCodigo,oGetNome,oRtTipo,oGetCPFCNPJ,oGetMail,oGetNasc,;
oGetEnde,oGetNum,oGetBairro,oGetCida,oGetUF,oGetCEP,oGetFone,;
oGetLimite,oGetSaldo,oGetSexo,oBtnOk,oBtnSair


   DEFINE DIALOG oDlg RESOURCE "FICHA" TITLE "Cadastro de clientes"

      REDEFINE GET oGetCodigo    VAR cCodigo       ID 4004 OF oDlg
      oGetCodigo:disable()

      REDEFINE GET oGetNome      VAR cNome         ID 4005 OF oDlg

      REDEFINE RADIO oRdTipo     VAR nTipo         ID 4001,4002 OF oDlg

      REDEFINE GET oGetCPFCNPJ   VAR cCPFCNPJ      ID 4008 OF oDlg PICTURE "@R 999.999.999-99"
      REDEFINE GET oGetMail      VAR cEmail        ID 4026 OF oDlg
      REDEFINE GET oGetNasc      VAR dNascimento   ID 4024 OF oDlg

      REDEFINE GET oGetEnde      VAR cEndereco     ID 4010 OF oDlg
      REDEFINE GET oGetNum       VAR cNumero       ID 4012 OF oDlg
      REDEFINE GET oGetBairro    VAR cBairro       ID 4016 OF oDlg

      REDEFINE GET oGetCida      VAR cCidade       ID 4018 OF oDlg
      REDEFINE GET oGetUF        VAR cUF           ID 4020 OF oDlg  PICTURE "@!"
      REDEFINE GET oGetCEP       VAR cCEP          ID 4014 OF oDlg  PICTURE "@R 99.999-999"

      REDEFINE GET oGetFone      VAR cFone         ID 4022 OF oDlg  PICTURE "@R (99) 99999-9999"
      REDEFINE GET oGetLimite    VAR nLimite       ID 4028 OF oDlg  PICTURE "@E 99,999.99"
      REDEFINE GET oGetSaldo     VAR nSaldo        ID 4030 OF oDlg  PICTURE "@E 99,999.99"
      REDEFINE GET oGetSexo      VAR cSexo         ID 4032 OF oDlg  PICTURE "@!"  VALID cSexo$("MF")

      REDEFINE BUTTON oBtnOk     ID 5000 OF oDlg
      oBtnOk:bAction:={|| IF(ValidaCadastro  (cCodigo,cNome,cEmail), ;
                                             (lGrava:=.t.,oDlg:End()), ;
                                                         (lGrava:=.f.) ;
                             ) ;
                      }

      REDEFINE BUTTON oBtnSair   ID 5001 OF oDlg ACTION IIf(MsgYesNo("Deseja sair?","Pergunta"),odlg:end(),.f.)

   ACTIVATE DIALOG oDlg CENTERED

      IF lGrava = .t.
         dbcliente->(dbappend())
         dbcliente->codigo      :=val ( alltrim(cCodigo) )
         dbcliente->nome        :=cNome
         dbcliente->tipo        :=nTipo
         dbcliente->cpfcnpj     :=cCPFCNPJ
         dbcliente->endereco    :=cEndereco
         dbcliente->numero      :=cNumero
         dbcliente->cep         :=cCEP
         dbcliente->bairro      :=cBairro
         dbcliente->cidade      :=cCidade
         dbcliente->estado      :=cUF
         dbcliente->sexo        :=cSexo
         dbcliente->telefone    :=cFone
         dbcliente->datanasc    :=dNascimento
         dbcliente->email       :=cEmail
         dbcliente->limite      :=nLimite
         dbcliente->saldo       :=nSaldo
         dbcliente->dtcadastro  :=date()

         MsgInfo("Cliente cadastrado com sucesso!",'ok')
      ELSE
         MsgStop("Cliente não gravado!",'Erro')
      ENDIF

RETURN NIL



FUNCTION CadastroPJ() //CLASS tCliente

LOCAL oDlg,cCodigo:=strzero(GerarCodigoContato(),5,0),cNome:=space(40),nTipo:=2,;
cCPFCNPJ:=space(14),cEmail:=space(100),;
cEndereco:=space(40),cNumero:=space(7),cBairro:=space(30),;
cCidade:=space(30),cUF:=space(2),cFone:=space(16),cCEP:=space(10),;
nLimite:=0,nSaldo:=0,lGrava:=.f.

LOCAL oGetCodigo,oGetNome,oRtTipo,oGetCPFCNPJ,oGetMail,;
oGetEnde,oGetNum,oGetBairro,oGetCida,oGetUF,oGetCEP,oGetFone,;
oGetLimite,oGetSaldo,oBtnOk,oBtnSair


   DEFINE DIALOG oDlg RESOURCE "FICHAPJ" TITLE "Cadastro de clientes"

      REDEFINE GET oGetCodigo    VAR cCodigo       ID 4004 OF oDlg
      oGetCodigo:disable()

      REDEFINE GET oGetNome      VAR cNome         ID 4005 OF oDlg

      REDEFINE RADIO oRdTipo     VAR nTipo         ID 4001,4002 OF oDlg

      REDEFINE GET oGetCPFCNPJ   VAR cCPFCNPJ      ID 4008 OF oDlg PICTURE "@R 99.999.999/9999-99"
      REDEFINE GET oGetMail      VAR cEmail        ID 4026 OF oDlg

      REDEFINE GET oGetEnde      VAR cEndereco     ID 4010 OF oDlg
      REDEFINE GET oGetNum       VAR cNumero       ID 4012 OF oDlg
      REDEFINE GET oGetBairro    VAR cBairro       ID 4016 OF oDlg

      REDEFINE GET oGetCida      VAR cCidade       ID 4018 OF oDlg
      REDEFINE GET oGetUF        VAR cUF           ID 4020 OF oDlg  PICTURE "@!"
      REDEFINE GET oGetCEP       VAR cCEP          ID 4014 OF oDlg  PICTURE "@R 99.999-999"

      REDEFINE GET oGetFone      VAR cFone         ID 4022 OF oDlg  PICTURE "@R (99) 99999-9999"
      REDEFINE GET oGetLimite    VAR nLimite       ID 4028 OF oDlg  PICTURE "@E 99,999.99"
      REDEFINE GET oGetSaldo     VAR nSaldo        ID 4030 OF oDlg  PICTURE "@E 99,999.99"

      REDEFINE BUTTON oBtnOk     ID 5000 OF oDlg
      oBtnOk:bAction:={|| IF(ValidaCadastro  (cCodigo,cNome,cEmail), ;
                                             (lGrava:=.t.,oDlg:End()), ;
                                                         (lGrava:=.f.) ;
                             ) ;
                      }

      REDEFINE BUTTON oBtnSair   ID 5001 OF oDlg ACTION IIf(MsgYesNo("Deseja sair?","Pergunta"),odlg:end(),.f.)

   ACTIVATE DIALOG oDlg CENTERED

      IF lGrava = .t.
         dbcliente->(dbappend())
         dbcliente->codigo      :=val ( alltrim(cCodigo) )
         dbcliente->nome        :=cNome
         dbcliente->tipo        :=nTipo
         dbcliente->cpfcnpj     :=cCPFCNPJ
         dbcliente->endereco    :=cEndereco
         dbcliente->numero      :=cNumero
         dbcliente->cep         :=cCEP
         dbcliente->bairro      :=cBairro
         dbcliente->cidade      :=cCidade
         dbcliente->estado      :=cUF
         dbcliente->telefone    :=cFone
         dbcliente->email       :=cEmail
         dbcliente->limite      :=nLimite
         dbcliente->saldo       :=nSaldo
         dbcliente->dtcadastro  :=date()

         MsgInfo("Cliente cadastrado com sucesso!",'ok')
      ELSE
         MsgStop("Cliente não gravado!",'Erro')
      ENDIF

RETURN NIL



FUNCTION ValidaCadastro(cCodigo,cNome,cEmail) //CLASS tCliente

   IF empty(cCodigo)
      MsgStop("Você deve informar o código para o cliente!",'Erro')
      return(.f.)
   ENDIF
   
   IF empty(cNome)
      MsgStop("Você deve informar um nome para o cliente!",'Erro')
      return(.f.)
   ENDIF
   
   IF empty(cEmail)
      MsgStop("Você deve informar um email para o cliente!",'Erro')
      return(.f.)
   ENDIF

   RETURN .T.
   
FUNCTION Imprimir()
      LOCAL oRpt

      REPORT oRpt TITLE "Relação de Clientes" ;
                  HEADER "Data:" + dtoc(date()) + " - Hora:" + Time() ;
                  FOOTER "Página:" + str( oRpt:nPage) RIGHT ;
                  PREVIEW ;
                  CAPTION  "Relação de Clientes - Projeto Fivewin"

      COLUMN oCol1 TITLE "Código"   SIZE 10 DATA dbcliente->codigo
      COLUMN oCol2 TITLE "Nome"     SIZE 40 DATA dbcliente->nome
      COLUMN oCol3 TITLE "Limite"   SIZE 15 DATA dbcliente->limite ;
                   PICTURE "@E 999,999.99" ;
                   TOTAL

      COLUMN oCol4 TITLE "Cadastro" SIZE 10 DATA dbcliente->dtcadastro ;
                   PICTURE "@D 99/99/9999"

      ENDREPORT
      ACTIVATE  REPORT oRpt

RETURN NIL

FUNCTION Editar() //CLASS tCliente

   LOCAL oDlg,cCodigo:=space(8),cNome:=space(40),nTipo:=1,;
   cCPFCNPJ:=space(14),cEmail:=space(100),dNascimento:=ctod(""),;
   cEndereco:=space(40),cNumero:=space(7),cBairro:=space(30),;
   cCidade:=space(30),cUF:=space(2),cFone:=space(16),cCEP:=space(10),;
   nLimite:=0,nSaldo:=0,cSexo:=space(1),lGrava:=.f.

   LOCAL oGetCodigo,oGetNome,oRtTipo,oGetCPF,oGetMail,oGetNasc,;
   oGetEnde,oGetNum,oGetBairro,oGetCida,oGetUF,oGetCEP,oGetFone,;
   oGetLimite,oGetSaldo,oGetSexo,oBtnOk,oBtnSair

      cCodigo           :=strzero(dbcliente->codigo,5,0)
      cNome             :=dbcliente->nome
      nTipo             :=dbcliente->tipo
      cCPFCNPJ          :=dbcliente->cpfcnpj
      cEndereco         :=dbcliente->endereco
      cNumero           :=dbcliente->numero
      cCEP              :=dbcliente->cep
      cBairro           :=dbcliente->bairro
      cCidade           :=dbcliente->cidade
      cUF               :=dbcliente->estado
      cSexo             :=dbcliente->sexo
      cFone             :=dbcliente->telefone
      dNascimento       :=dbcliente->datanasc
      cEmail            :=dbcliente->email
      nLimite           :=dbcliente->limite
      nSaldo            :=dbcliente->saldo


   IF nTipo=1

      DEFINE DIALOG oDlg RESOURCE "FICHA" TITLE "Alteração de clientes"

      REDEFINE GET oGetCodigo    VAR cCodigo       ID 4004 OF oDlg
      oGetCodigo:disable()
      REDEFINE GET oGetNome      VAR cNome         ID 4005 OF oDlg

      REDEFINE RADIO oRdTipo     VAR nTipo         ID 4001,4002 OF oDlg

      REDEFINE GET oGetCPF       VAR cCPFCNPJ      ID 4008 OF oDlg PICTURE "@R 999.999.999-99"
      REDEFINE GET oGetMail      VAR cEmail        ID 4026 OF oDlg
      REDEFINE GET oGetNasc      VAR dNascimento   ID 4024 OF oDlg

      REDEFINE GET oGetEnde      VAR cEndereco     ID 4010 OF oDlg
      REDEFINE GET oGetNum       VAR cNumero       ID 4012 OF oDlg
      REDEFINE GET oGetBairro    VAR cBairro       ID 4016 OF oDlg

      REDEFINE GET oGetCida      VAR cCidade       ID 4018 OF oDlg
      REDEFINE GET oGetUF        VAR cUF           ID 4020 OF oDlg  PICTURE "@!"
      REDEFINE GET oGetCEP       VAR cCEP          ID 4014 OF oDlg  PICTURE "@R 99.999-999"

      REDEFINE GET oGetFone      VAR cFone         ID 4022 OF oDlg  PICTURE "@R (99) 99999-9999"
      REDEFINE GET oGetLimite    VAR nLimite       ID 4028 OF oDlg  PICTURE "@E 99,999.99"
      REDEFINE GET oGetSaldo     VAR nSaldo        ID 4030 OF oDlg  PICTURE "@E 99,999.99"
      REDEFINE GET oGetSexo      VAR cSexo         ID 4032 OF oDlg  PICTURE "@!"  VALID cSexo$("MF")

      REDEFINE BUTTON oBtnOk     ID 5000 OF oDlg
      oBtnOk:bAction:={|| IF(ValidaCadastro  (cCodigo,cNome,cEmail), ;
                                             (lGrava:=.t.,oDlg:End()), ;
                                                         (lGrava:=.f.) ;
                             ) ;
                      }

      REDEFINE BUTTON oBtnSair   ID 5001 OF oDlg ACTION IIf(MsgYesNo("Deseja sair?","Pergunta"),odlg:end(),.f.)

      ACTIVATE DIALOG oDlg CENTERED

            IF lGrava = .t.

               dbcliente->codigo      :=val ( alltrim(cCodigo) )
               dbcliente->nome        :=cNome
               dbcliente->tipo        :=nTipo
               dbcliente->cpfcnpj     :=cCPFCNPJ
               dbcliente->endereco    :=cEndereco
               dbcliente->numero      :=cNumero
               dbcliente->cep         :=cCEP
               dbcliente->bairro      :=cBairro
               dbcliente->cidade      :=cCidade
               dbcliente->estado      :=cUF
               dbcliente->sexo        :=cSexo
               dbcliente->telefone    :=cFone
               dbcliente->datanasc    :=dNascimento
               dbcliente->email       :=cEmail
               dbcliente->limite      :=nLimite
               dbcliente->saldo       :=nSaldo


               MsgInfo("Cliente alterado com sucesso!",'ok')
            ELSE
               MsgStop("Cliente não gravado!",'Erro')
            ENDIF

            RETURN NIL

  ELSE

      DEFINE DIALOG oDlg RESOURCE "FICHAPJ" TITLE "Cadastro de clientes"

      REDEFINE GET oGetCodigo    VAR cCodigo       ID 4004 OF oDlg
      oGetCodigo:disable()

      REDEFINE GET oGetNome      VAR cNome         ID 4005 OF oDlg

      REDEFINE RADIO oRdTipo     VAR nTipo         ID 4001,4002 OF oDlg

      REDEFINE GET oGetCPFCNPJ   VAR cCPFCNPJ      ID 4008 OF oDlg PICTURE "@R 99.999.999/9999-99"
      REDEFINE GET oGetMail      VAR cEmail        ID 4026 OF oDlg

      REDEFINE GET oGetEnde      VAR cEndereco     ID 4010 OF oDlg
      REDEFINE GET oGetNum       VAR cNumero       ID 4012 OF oDlg
      REDEFINE GET oGetBairro    VAR cBairro       ID 4016 OF oDlg

      REDEFINE GET oGetCida      VAR cCidade       ID 4018 OF oDlg
      REDEFINE GET oGetUF        VAR cUF           ID 4020 OF oDlg  PICTURE "@!"
      REDEFINE GET oGetCEP       VAR cCEP          ID 4014 OF oDlg  PICTURE "@R 99.999-999"

      REDEFINE GET oGetFone      VAR cFone         ID 4022 OF oDlg  PICTURE "@R (99) 99999-9999"
      REDEFINE GET oGetLimite    VAR nLimite       ID 4028 OF oDlg  PICTURE "@E 99,999.99"
      REDEFINE GET oGetSaldo     VAR nSaldo        ID 4030 OF oDlg  PICTURE "@E 99,999.99"

      REDEFINE BUTTON oBtnOk     ID 5000 OF oDlg
      oBtnOk:bAction:={|| IF(ValidaCadastro  (cCodigo,cNome,cEmail), ;
                                             (lGrava:=.t.,oDlg:End()), ;
                                                         (lGrava:=.f.) ;
                             ) ;
                      }

      REDEFINE BUTTON oBtnSair   ID 5001 OF oDlg ACTION IIf(MsgYesNo("Deseja sair?","Pergunta"),odlg:end(),.f.)

      ACTIVATE DIALOG oDlg CENTERED

      IF lGrava = .t.
         //dbcliente->(dbappend())
         dbcliente->codigo      :=val ( alltrim(cCodigo) )
         dbcliente->nome        :=cNome
         dbcliente->tipo        :=nTipo
         dbcliente->cpfcnpj     :=cCPFCNPJ
         dbcliente->endereco    :=cEndereco
         dbcliente->numero      :=cNumero
         dbcliente->cep         :=cCEP
         dbcliente->bairro      :=cBairro
         dbcliente->cidade      :=cCidade
         dbcliente->estado      :=cUF
         dbcliente->telefone    :=cFone
         dbcliente->email       :=cEmail
         dbcliente->limite      :=nLimite
         dbcliente->saldo       :=nSaldo
         dbcliente->dtcadastro  :=date()

         MsgInfo("Cliente cadastrado com sucesso!",'ok')
      ELSE
         MsgStop("Cliente não gravado!",'Erro')
      ENDIF

      RETURN NIL

   ENDIF

RETURN


FUNCTION Excluir() //CLASS tCliente


      IF MsgYesNo('Tem certeza que deseja excluir o cliente?','Exclusão') = .T.
         dbcliente->(dbdelete())  //Marca para exclusão
         dbcliente->(dbpack()) //EMpacota o registro marcado para exclusão
      ENDIF

RETURN

FUNCTION pesq_codigo()

      Local cCodigo:=0
      nRegistro:= RecNo()

      If MsgGet("Informe o Codigo","Codigo do Contato:",@cCodigo,"imagens\pesquisa.bmp")
         Select dbcliente
         set order to 1
         seek cCodigo
         if eof()
            MsgInfo("Codigo não Encontrado!!!","Informação")
            go nRegistro
            return .t.
         endif
      oBrw:Refresh()
      endif

  
RETURN


FUNCTION pesq_nome()

      Local cNome:=  SPACE(LEN(dbcliente->nome))
      nRegistro:= RecNo()
      If MsgGet("Informe o Nome","Nome do Contato:",@cnome,"pesquisa.bmp")
         Select dbcliente                 && Esta pesquisa é Semelhante as outras
         set order to 2             && a Diferença que o Indice esta criado maiusculo
         seek ALLTRIM(UPPER(cNOME)) && e entao eu converto a string para maiusculo assim nao tem problema com a pesquisa
         if eof()
            MsgInfo("Nome não Encontrado!!!","Informação")
            go nRegistro
            return .t.
         endif
      endif
      
 oBrw:Refresh()

FUNCTION pesq_telefone()
      local cFone:=space(len(dbcliente->telefone))
      nRegistro:= RecNo()
      If MsgGet("Informe o Telefone","Telefone do Contato:",@cFone,"pesquisa.bmp")
         Select dbcliente
         set order to 3
         seek cFone
         oBrw:Refresh()
         if eof()
            MsgInfo("Telefone não Encontrado!!!","Informação")
            go nRegistro
            return .t.
         endif
         return .t.
      endif

FUNCTION pesq_CPFCNPJ()
      local cCPFCNPJ:=space(len(dbcliente->cpfcnpj))
      nRegistro:= RecNo()
      If MsgGet("Informe o CPF/CNPJ","CPF/CNPJ do Contato:",@cCPFCNPJ,"pesquisa.bmp")
         Select dbcliente
         set order to 4
         seek cCPFCNPJ
         oBrw:Refresh()
         if eof()
            MsgInfo("CPF/CNPJ não Encontrado!!!","Informação")
            go nRegistro
            return .t.
         endif
         return .t.
      endif