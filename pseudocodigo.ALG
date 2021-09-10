
Algoritmo "Pseudocodigo"

Var
 peso, altura, imc: real

Inicio
    escreva("Informe seu peso (em kg), usando valores reias: ")
    leia(peso)
    escreva("Informe sua altura (em metros), usando valores reias: ")
    leia(altura)

    imc <-   ( (peso) / ( altura * altura))
    escreval("Seu IMC é: ", imc)
    se imc > 30 entao
    escreval("Você está acima do peso")

    senao
    escreval("Você está com o peso normal")
    fimse


Fimalgoritmo

