Algoritmo "pseudocodigo-extra3"
// Considere que em uma determinada universidade a m�dia para ser aprovado � 7,0.
//Dadas duas notas obtidas por um aluno em uma disciplina, fa�a um algoritmo que
//calcule e informe a m�dia aritm�tica do aluno e verifique se o mesmo est� ou n�o
//aprovado na disciplina.

Var
nota1,nota2,media:real



Inicio

escreva("Informe sua primeira nota: ")
leia(nota1)
escreva("Informe sua segunda nota: ")
leia(nota2)

media <- ((nota1 + nota2)/2)
escreval("Sua m�dia �: ",media)

se (media >= 7) entao
escreval("Aprovado")
senao
escreval("Reprovado")
fimse






Fimalgoritmo