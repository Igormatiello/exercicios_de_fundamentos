
Algoritmo "Pseudocodigo"

Var
 peso, altura, imc: real

Inicio
    escreva("Informe seu peso (em kg), usando valores reias: ")
    leia(peso)
    escreva("Informe sua altura (em metros), usando valores reias: ")
    leia(altura)

    imc <-   ( (peso) / ( altura * altura))
    escreval("Seu IMC �: ", imc)
    se imc > 30 entao
    escreval("Voc� est� acima do peso")

    senao
    escreval("Voc� est� com o peso normal")
    fimse


Fimalgoritmo

