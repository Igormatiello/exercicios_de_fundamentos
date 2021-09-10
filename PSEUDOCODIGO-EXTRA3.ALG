Algoritmo "pseudocodigo-extra3"
// Considere que em uma determinada universidade a média para ser aprovado é 7,0.
//Dadas duas notas obtidas por um aluno em uma disciplina, faça um algoritmo que
//calcule e informe a média aritmética do aluno e verifique se o mesmo está ou não
//aprovado na disciplina.

Var
nota1,nota2,media:real



Inicio

escreva("Informe sua primeira nota: ")
leia(nota1)
escreva("Informe sua segunda nota: ")
leia(nota2)

media <- ((nota1 + nota2)/2)
escreval("Sua média é: ",media)

se (media >= 7) entao
escreval("Aprovado")
senao
escreval("Reprovado")
fimse






Fimalgoritmo