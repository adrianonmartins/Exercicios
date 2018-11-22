#Include"Fivewin.ch"
*******************
Function main()
*******************   
    	Exercicio60()
*******************
return nil

******* EXERCICIO 3.1 **********
    Function Exercicio31()
********************************       
       Local nInt := 0.00

       MsgGet("Exercicio 3.1","Informe seu numero",@nInt)
       MsgInfo(nInt+5,"Resultado")

    Return Nil
******* EXERCICIO 3.2 **********
    Function Exercicio32()
********************************          
       Local nInt := 0.00

       MsgGet("Exercicio 3.2","Informe seu numero",@nInt)
       MsgInfo(nInt*2,"Resultado")

    Return Nil
******* EXERCICIO 3.3 **********
    Function Exercicio33()
********************************         
       Local nInt:= 0
       Local nInt2:= 0
       MsgGet("Exercicio 3.3","Informe a data de Nascimento Com 4 Digitos:",@nInt)
       nInt2:= 2012 - nInt
       MsgInfo(nInt2,"Sua Idade em 2012 era:","Idade")

    Return Nil
******* EXERCICIO 3.4 *********
    Function Exercicio34()
*******************************          
       Local nNota1:= 0
       Local nNota2:= 0
       Local nMedia:= 0

       MsgGet("Exercicio 3.4","Informe a Primeira nota",@nNota1)
       MsgGet("Exercicio 3.4","Informe a Primeira nota",@nNota2)

       nMedia:= (nNota1+nNota2)/2
       MsgInfo(nMedia,"Sua Média Final é:")
    
    Return Nil
******* EXERCICIO 3.5 **********
    Function Exercicio35()
********************************
       Local nRaio:=0
       Local nPi:=3.14
       Local nComprimento:=0

       MsgGet("Exercicio 3.5","Informe o Valor do Raio",@nRaio)
       nComprimento:= (2*nPi)*nRaio
       MsgInfo(nComprimento,"O Coprimento total é de:")
       
    Return Nil
******* EXERCICIO 3.6 ***********
    Function Exercicio36()
*********************************

    Return Nil

    Function Exercicio37()

    Return Nil

    Function Exercicio38()

    Return Nil

*******  EXERCICIO 4.1 *********
    Function Exercicio41()
********************************
    local nNumero1  
      nNumero1:= 0.00
       msgget("Exercicio 04.1","Informe o numero",@nNumero1,)

       MsgInfo(STR((nNumero1*nNumero1),10,2),"Resultado do Numero ao Quadrado")
       MsgInfo(nNumero1^2,"Resultado do Numero ao Quadrado")
       MsgInfo(SQRT(nNumero1),"Raiz Quadrada")
       MsgInfo(STR(Int(nNumero1),10,2),"Parte Inteira do Numero")
       MsgInfo(Mod(nNumero1),"Parte Fracionaria")

    Return nil 

******* EXERCICIO 4.2 **********
    Function Exercicio42()
********************************
       Local kmInicial           
       Local kmFinal          
       Local qtdLtGasto         
       Local precoLtCombt          
       Local cptanque
       Local kmPorLitro
       Local custoViagem

       kmInicial:= 0.00          
       kmFinal:= 0.00          
       qtdLtGasto:= 0.00          
       precoLtCombt:= 0.00          
       cptanque:= 0.00

       MsgGet("Exercicio 4.2","Informe o KM INICIAL",@kmInicial)          
       MsgGet("Exercicio 4.2","Informe o KM FINAL",@kmFinal)          
       MsgGet("Exercicio 4.2","Informe o QUANTIDADE DE LITROS GASTOS",@qtdLtGasto)          
       MsgGet("Exercicio 4.2","Informe o PREÇO DO COMBUSTIVEL",@precoLtCombt)          
       MsgGet("Exercicio 4.2","Informe a CAPACIDADE DO TANQUE",@cptanque)

       MsgInfo(STR((kmFinal-kmInicial),10,2),"A quilometragem rodada foi:")          
       MsgInfo(STR(((kmFinal-kmInicial)/qtdLtGasto),10,2),"Km por Litro:")

       kmPorLitro:= (kmFinal-kmInicial)/qtdLtGasto
       atVeiculo :=  kmPorLitro*cptanque
       MsgInfo(STR((atVeiculo),10,2),"Autonomia do veículo:")

       custoViagem:= precoLtCombt*((kmFinal-kmInicial)/kmPorLitro)
       MsgInfo(STR((custoViagem),10,2),"Custo da viagem:")
    
	 Return Nil                 
******* EXERCICIO 4.3 **********       
    Function Exercicio43 ()
********************************
       Local nHorasTrabalhadas:=0.00
       Local nValorHoraTrabalhada:=0.00
       Local nValorSalarioMinimo:=0.00
       Local nValorSalarioLiquido:=0.00
       Local nValorSalarioBruto:=0.00
       Local nValorImposto:=0.00
       
       MsgGet("Exercicio 4.3","Informe a quantide de horas trabalhadas",@nHorasTrabalhadas)
       MsgGet("Exercicio 4.3","Informe o Valor do Salario Minimo",@nValorSalarioMinimo)
       
       nValorHoraTrabalhada:= nValorSalarioMinimo*0.1
       nValorSalarioBruto:= nHorasTrabalhadas*nValorHoraTrabalhada
       nValorImposto:= nValorSalarioBruto*0.03
       nValorSalarioLiquido:= nValorSalarioBruto-nValorImposto
       
       
      /* ?nValorHoraTrabalhada
       ?nValorSalarioBruto
       ?nValorImposto
       ?nValorSalarioLiquido */
       
       MsgInfo(STR((nValorSalarioBruto),5,2),"O Valor do Salario Bruto é:")
       MsgInfo(STR(nValorImposto),5,2,"O Valor do Imposto é:")
       MsgInfo(STR(nValorSalarioLiquido),5,2,"O Valor do Salario Liquido é:")  
       
    Return Nil
******* EXERCICIO 4.4 ****************       
    Function Exercicio44()
**************************************       
       Local nCustoQuilowatt:=0.00
       Local nValorSalarioMinimo:=0.00
       Local nQtdQuilowattConsumo:=0.00
       Local nValorApagar:=0.00
       Local nValorDesc:=0.00
       Local nValorApagarDesc:=0.00
       
       MsgGet("Exercicio 4.4","Informe o Valor do Salario Minimo",@nValorSalarioMinimo)
       MsgGet("Exercicio 4.4","Informe o Consumo de  Quilowaats",@nQtdQuilowattConsumo)
       
       nCustoQuilowatt:= nValorSalarioMinimo*0.001
       nValorApagar := nCustoQuilowatt*nQtdQuilowattConsumo 
		 nValorDesc:= nValorApagar*0.15
		 nValorApagarDesc:=nValorApagar-nValorDesc 
		 
		 MsgInfo(STR((nCustoQuilowatt),5,2),"O Valor de cada Quilowatt é: ")
		 MsgInfo(STR((nValorApagar),6,2),"O Valor a Ser Pago por Essa residencia é:")
		 MsgInfo(STR((nValorApagarDesc),5,2),"O valor a Ser Pago com Desconto é:")    
       
    Return Nil
******* EXERCICIO 4.5 ****************       
    Function Exercicio45()
**************************************       
		 Local cNomeVend:= Space(20)
       Local nNuCarrosVend:= 0
       Local nValorTotalVend:= 0
       Local nSalarioBase:=700.00
       Local nComissaoCarro:= 0
       Local nComissaovenda:= 0
       
       MsgGet("Exercicio 4.5","Informe o Nome do Vendedor",@cNomeVend)
       MsgGet("Exercicio 4.5","Informe o Numero de Vendidos",@nNuCarrosVend)
       MsgGet("Exercicio 4.5","Informe o Valor Total das Vendas",@nValorTotalVend)
       
       nComissaoCarro := nNuCarrosVend*50
       nComissaovenda := nValorTotalVend*0.02
       
       nSalarioReceber:= nSalarioBase+nComissaoCarro+nComissaovenda
       
       MsgInfo("O FUNCIONARIO: "+alltrim(cNomeVend)+" RECEBERA O SALARIO DE: "+" RS "+alltrim(STR(nSalarioReceber),10,2),"EXERCICIO 4.5")
		 
    Return Nil
******* EXERCICIO 4.6 ******************		 
    Function Exercicio46()
****************************************		 
		 Local nPrecoFabrica:=0
		 Local nPercImporto:=0
		 Local nPercLucroDist:=0
		 Local nValorLucroDist:=0
		 Local nValorImposto:=0
		 Local nValorFinalVeiculo:=0
		 
		 MsgGet("Exercicio 4.6","Informe o Preço de Fabrica do Veiculo: ",@nPrecoFabrica)
		 MsgGet("Exercicio 4.6","Informe o Percentual referente ao imposto: ",@nPercImporto)
		 MsgGet("Exercicio 4.6","Informe o Percentual referente ao Lucro do Distribuidor: ",@nPercLucroDist)
		 
		 nValorLucroDist:=nPrecoFabrica*(nPercLucroDist/100)
		 nValorImposto:= nPrecoFabrica+nValorLucroDist
		 nValorFinalVeiculo:=nPrecoFabrica+nValorLucroDist+nValorImposto
		 
		 MsgInfo(nValorLucroDist,"O Lucro do Distrubuidor é: ")
		 MsgInfo(nValorImposto,"O Valor do Imposto é: ")
		 MsgInfo(nValorFinalVeiculo,"O Preço Final do Veiculo é: ")
		 
    Return Nil
******* Exercicio 4.7 ****************
    Function Exercicio47()
**************************************	 
	    Local nValorSalarioBruto:=0.00
	    Local nDescInss:=0.00
	    Local nDescIr:=0.00
	    Local nSalarioLiquido:=0.00
	 
	    MsgGet("Exercicio 4.7","Informe o Valor do Salario Bruto",@nValorSalarioBruto)
	 
	    nDescInss:= nValorSalarioBruto*0.1
       nDescIr := nValorSalarioBruto*0.2
       nSalarioLiquido:= nValorSalarioBruto- nDescInss- nDescIr
       
       MsgInfo("Desconto INSS:"+alltrim(STR(nDescInss,10,2))+" Desconto de IR: "+alltrim(STR(nDescIr,10,2))+" Salario Liquido:"+alltrim (STR(nSalarioLiquido,10,2)),"Resultado")
	 
	 Return Nil    
       
******* Exercicio 4.8 ***************
    Function Exercicio48()
*************************************	    
		 Local nQtdChoc:=0	    
	    Local nVlChoc:=0	    
	    Local nQtdRefri:=0	    
	    Local nVlRefri:=0	    
	    Local nQtdMistoQuente:=0	    
	    Local nVlMistoQuente:=0	    
	    Local nQtdSorteve:=0
	    Local nVldSorteve:=0
		 Local nValordaCompra:=0
		 
		 MsgGet("Exercicio 4.8","Informe a Quantidade de Chocolate",@nQtdChoc)	    
		 MsgGet("Exercicio 4.8","Informe a Quantidade de Refrigerante",@nQtdRefri)	    
		 MsgGet("Exercicio 4.8","Informe a Quantidade de Misto Quente",@nQtdMistoQuente)	    
		 MsgGet("Exercicio 4.8","Informe a Quantidade de Sorvete",@nQtdSorteve)
		 
		 
		 nVlChoc:= nQtdChoc*1.00
		 nVlRefri:= nQtdRefri*2.50
		 nVlMistoQuente:= nQtdMistoQuente*3.00
		 nVldSorteve:= nQtdSorteve*2.50
		 nValordaCompra:= nVlChoc+nVlRefri+nVlMistoQuente+nVldSorteve
		 
		 MsgInfo("Total Chocolate: R$"+alltrim(STR(nVlChoc,10,2))+""+CRLF+"Total Refrigerante: R$"+alltrim(STR(nVlRefri,10,2))+""+CRLF+"Total Misto Quente: R$"+alltrim(STR(nVlMistoQuente,10,2))+""+CRLF+"Total Sorvete: R$"+alltrim(STR(nVldSorteve,10,2))+""+CRLF+"Total Consumo: R$"+alltrim(STR(nValordaCompra,10,2))+""+CRLF," Resultado")
    Return Nil
************* Exercicio 5.1 *****************     
    Function Exercicio51()
*********************************************       
		 Local nInt := 0
		 
		 MsgGet("Exercicio 5.1","Informe um numero",@nInt)
		 If nInt >= 0
		 
		 MsgInfo("O Numero: "+alltrim(STR(nInt,10,2))+" É Não Negativo","Resultado")
		
		 Else 
		 If nInt < 0
		 MsgInfo("O Numero: "+alltrim(STR(nInt,10,2))+" É Negativo","Resultado")
       
		 
		 Endif    
       Endif
	 Return Nil
***************** Exercicio 5.2 *******************	 
	 Function Exercicio52()
***************************************************       
		 Local nInt := 0
		 
		 MsgGet("Exercicio 5.2","Informe um numero",@nInt)
		 If nInt > 0
		 
		 MsgInfo("O Numero: "+alltrim(STR(nInt,10,2))+" É Positivo","Resultado")
		
		 Elseif  nInt < 0
		 MsgInfo("O Numero: "+alltrim(STR(nInt,10,2))+" É Negativo","Resultado")
		 
		 Elseif nInt ==0
		 MsgInfo("O Numero: "+alltrim(STR(nInt,10,2))+" É Zero","Resultado")
       		 		     
       Endif
	 Return Nil
*********** Exercicio 5.3 ****************	 
	 Function Exercicio53()
******************************************       
		 Local nInt := 0
		 Local nInt2:= 0
		 
		 MsgGet("Exercicio 5.3","Informe um numero",@nInt)
		 MsgGet("Exercicio 5.3","Informe um numero",@nInt2)
		 If nInt > nInt2
		 MsgInfo("O Numero: "+alltrim(STR(nInt,10,2))+" É maior","Resultado")
		
		 Elseif  nInt < nInt2
		 MsgInfo("O Numero: "+alltrim(STR(nInt2,10,2))+" É Maior","Resultado")
		 
		 Elseif nInt == nInt2
		 MsgInfo("Os Numeros: "+alltrim(STR(nInt,10,2))+" São Iguais","Resultado")    
       
		 Endif
	 Return Nil
************ Exercicio 5.4 ********************	 
	 Function Exercicio54()
***********************************************	    
		 Local cNome:= space(40)
	    Local nInt:=0
	 
	    MsgGet("Exercicio 5.4","Informe seu Nome: ",@cNome)
	    MsgGet("Exercicio 5.4","Informe sua Indade: ",@nInt)
	 
	 
	    If nInt >= 18
	    MsgInfo(""+alltrim(cNome)+" Você é maior de Idade","Resultado")
	    Else
	    MsgInfo(""+alltrim(cNome)+" Você é menor de Idade","Resultado")
		 Endif
	 Return Nil
**************Exercicio 5.5 *******************************	 
    Function Exercicio55()
*********************************************************** 	    
		  Local nInt := 0
	 
	    MsgGet("Exercicio 5.5","Informe um numero",@nInt)	 	 
	 
	    If nInt % 2 = 0
       MsgInfo("O Numero: "+alltrim(STR(nInt,10,0))+" é um numero par","Resultado")	  
	    Else
	    MsgInfo(nInt,"O Numero Impar") 
	    Endif
    Return Nil
************ Exercicio 5.6 **************************    
    Function Exercicio56()
*****************************************************       
		 Local nCodiCli:=[000]
       Local nPrKlwts:=0.00
       Local nQtdKlwts:=0
       Local nTotalPagar:=0
       Local nPagarMinimo:=21.30
    
       MsgGet("Exercicio 5.6","Informa o Codigo do Cliente: ", @nCodiCli)
       MsgGet("Exercicio 5.6","Informa o Informar Preço de kilowatt: ",@nPrKlwts)
       MsgGet("Exercicio 5.6","Informa a quantidade consumida de kilowatt: ",@nQtdKlwts)
    
       nTotalPagar:= nPrKlwts*nQtdKlwts
    
       If nTotalPagar > nPagarMinimo
          MsgInfo("CODIGO CLIENTE: "+alltrim(nCodiCli)+""+alltrim(STR(nTotalPagar,10,2))+"","Resultado")
       Else
          MsgInfo("CODIGO CLIENTE: "+alltrim(nCodiCli)+""+alltrim(STR(nPagarMinimo,10,2))+"","Resultado")
	    Endif
    Return Nil
************************************	 
	 Function Exercicio57()
************************************	 
	    Local nVerba:=2000
	    Local nPassagem:=0
	    Local nHospedagem:=0
	    Local nAlimentacao:=0
	    Local nTotaldeGasto:=0
	    
	    MsgGet("Exercicio 5.7","Informe o Valor da Passagem",@nPassagem)
	    MsgGet("Exercicio 5.7","Informe o Valor da Passagem",@nHospedagem)
	    MsgGet("Exercicio 5.7","Informe o Valor da Passagem",@nAlimentacao)
	    
	    
	    nTotaldeGasto:= nPassagem+nHospedagem+nAlimentacao
	    
	    If nVerba>nTotaldeGasto
	    MsgInfo("Seu dinheiro sera suficiente para brincar o carnaval")
	    
		 Elseif nVerba<nTotaldeGasto
		 MsgInfo("Seu dinheiro não sera suficiente para brincar o carnaval, FIQUE EM CASA")
	    Endif
	 Return Nil
***********************************	    
    Function Exercicio58()
***********************************    
	    Local nValorVenda:=0
	    Local nCupom:=0
	    
	    MsgGet("Exercicio 5.8: ","Informe o valor da venda",@nValorVenda)
	    
	    nCupom=nValorVenda/20
	    
	    If nCupom<1
	    MsgInfo("Cliente Não Possui direiro a cupons")
	    Elseif nCupom>1
	    MsgInfo("Cliente possui Direito a"+alltrim(STR(nCupom,5,0))+"Cupons","Resultado")
	    Endif
		  
	 
	 Return Nil  
*********** Exercicio 5.9 *******************************
    Function Exercicio59()
*********************************************************	    
		 Local nLado1:=0
	    Local nLado2:=0
	    Local nLado3:=0
	    
		 MsgGet("Exercicio 5.9: ","Informe o valor do 1° lado do triangulo: ",@nLado1)	       
		 MsgGet("Exercicio 5.9: ","Informe o valor do 2º lado do triangulo: ",@nLado2)	       
		 MsgGet("Exercicio 5.9: ","Informe o valor do 3º lado do triangulo: ",@nLado3)
		 
		 
		 If  (nLado1>nLado2+nLado3).OR.(nLado2>nLado1+nLado3).OR.(nLado3>nLado1+nLado2)
          MsgInfo("Triangulo Invalido a soma de dois lados é menor que o comprimento")
		 Elseif (nLado1==nLado2) .AND. (nLado2 == nLado3)
		    MsgInfo("Triangulo Equilatero Possui 3 lados iguais")
		 Elseif ((nLado1==nLado2).OR.(nLado1==nLado3).OR.(nLado2==NLado3)).AND.((nLado1<>nLado2).OR.(nLado2<>nLado3).OR.(nLado1<>nLado3))
		    MsgInfo("Triangulo Isosceles Possui apenas 2 Lados iguais")    
       ElseIf (nLado1<>nLado2) .AND. (nLado2 <> nLado3)
		    MsgInfo("Triangulo Escaleno Possui 3 lados Diferente")
		 Endif
	    Return Nil
		 
    Function Exercicio60()
	    If MsgYesNo("O Equipamento esta Funcionando")
             MsgInfo("Deixa como esta.","Voce não tem Problema.")

       ElseIF MsgYesNo("Voce, mexeu nele")
           MsgInfo("Voce não devia ter feito isso") 
	        if MsgYesNo("Tem como Provar que a culpa não é sua")
             MsgInfo("Você não tem Problema.") 
           Else 
			    MsgInfo("Agora Piorou! Mais você ainda tem uma chance")
                  If MsgYesNo("Alguem sabe que você mexeu")
                     MsgInfo("Relaxe! Mais cedo ou mais tarde você recebera a repreensão")
                  Else
						   MsgInfo("Tente Resolver ou Encotrar uma boa explicação Urgentemente") 
                  Endif 		     			  			  
		     Endif	
      Else 
         MsgInfo("Prepare-se! Alguem pode jogar a culpa em você") 
         if MsgYesNo("Você sabe direitinho a causa do problema? ")
         MsgInfo("Assim você não tera Problema.")
      Else
	    MsgInfo("Torça para não sobrar pra você, mais continue se preparando.")
     Endif
 Endif
Return 	 			 	       