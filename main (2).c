#include <stdio.h>
#include <math.h>

int main(void) {
  printf("Aula If e Else\n\n\n");

  /*
  //Questão 1
  float nota1, nota2, nota3, media;
  printf("Digite a nota 1\n");
  scanf("%f", &nota1);
  printf("Digite a nota 2\n");
  scanf("%f", &nota2);
  printf("Digite a nota 3\n");
  scanf("%f", &nota3);

  media = (nota1+nota2+nota3)/3;

  if(media < 7) {
    printf("MEDIA: %.2f - Você está reprovado :(", media);
  } else {
    printf("MEDIA: %.2f - Você está aprovado!", media);
  }

  

  
  //Questão 2
  float n1, n2, n3, n4, mdia;

  printf("Digite a nota 1\n");
  scanf("%f", &n1);
  printf("Digite a nota 2\n");
  scanf("%f", &n2);
  printf("Digite a nota 3\n");
  scanf("%f", &n3);
  printf("Digite a nota 4\n");
  scanf("%f", &n4);

  mdia = ((n1*1)+(n2*2)+(n3*3)+(n4*4))/(1+2+3+4);

  if (mdia >= 7) {
    printf("MEDIA: %.2f - Você foi aprovado!", mdia);
  } else {
    printf("MEDIA: %.2f - Você foi reprovado.", mdia);
  }

  

  // Questão 3
  float med;
  int faltas;

  printf("Digite a sua média\n");
  scanf("%f", &med);
  printf("Digite quantas faltas teve no semestre\n");
  scanf("%d", &faltas);

  if (med < 7) {
    printf("Você foi reprovado por média");
  } else if (faltas >= 5) {
    printf("Você foi reprovado por faltas");
  } else {
    printf("Você foi aprovado!");
  }

  

  //Questão 4

  int idade;
  printf("Digite sua idade:\n");
  scanf("%d", &idade);

  if ((idade >=5) && (idade <= 7)){
    printf("Você é da categoria Infantil A");
  } else if ((idade >= 8) && (idade <= 10)) {
    printf("Você é da categoria Infantil B");
  } else if ((idade >= 11) && (idade <= 13)) {
    printf("Você é da categoria Juvenil A");
  } else if ((idade >= 14) && (idade <= 17)) {
    printf("Você é da categoria Juvenil B");
  } else if (idade >= 18) {
    printf("Você é da categoria Adulto");
  } else {
    printf("Você é muito novo para participar da competição");
  }

  
  // Questão 5
  int num1, num2, num3;

  printf("Digite a nota 1\n");
  scanf("%d", &num1);
  printf("Digite a nota 2\n");
  scanf("%d", &num2);
  printf("Digite a nota 3\n");
  scanf("%d", &num3);

  if (num1 > num2 && num1 > 3) {
    printf("O maior número é: %d", num1);
  }
  if (num2 > num3) {
    printf("O maior número é: %d", num2);
  } else {
    printf("O maior número é: %d", num3);
  }

  

  //Questão 6

  int n;

  printf("Digite o número\n");
  scanf("%d", &n);

  if ((n % 2 == 0) && (n >= 0)) {
    printf("Esse número é par e positivo");
  } else if ((n % 2 == 0) && (n < 0)) {
  printf("Esse número é par e negativo");} else if ((n % 2 != 0) && (n >= 0)) {
    printf("Esse número é impar e positivo");
  } else {
    printf("Esse número é impar e negativo");
  }


  */
  //Questão 7

  float peso, altura, imc;

  printf("Digite seu peso\n");
  scanf("%f", &peso);
  printf("Digite sua altura\n");
  scanf("%f", &altura);

  imc = peso/(altura*altura);

  printf("%.1f \n", imc);

  if (imc < 18.5) {
    printf("Você está abaixo do peso");
  } else if ((imc >= 18.5) && (imc <= 24.9)) {
    printf("Parabéns, você está no peso ideal!");
  } else if ((imc >= 25) && (imc <= 29.9)) {
    printf("Você está em sobrepeso");
  } else if ((imc >= 30) && (imc<=34.9)) {
    printf("Você tem Obesidade Grau I");
  } else if ((imc>=35) && (imc<=39.9)) {
    printf("Você tem Obesidade Grau II");
  } else {
    printf("Você tem Obesidade Grau III");
  }
  
  
  return 0;
}