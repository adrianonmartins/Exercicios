#Include"Fivewin.ch"
*******************
Function main()
*******************   
    	Exercicio31()
*******************
return nil

******* EXERCICIO 3.1 **********
    Function Exercicio31()
********************************       
       Local nInt := 0.00

       MsgGet("Exercicio 3.1","Informe seu numero",@nInt)
       MsgInfo(nInt+5,"Resultado")

    Return Nil
