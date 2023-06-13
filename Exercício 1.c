/* Receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, mas não se preocupe em testar se o segundo número é zero.*/

#include <stdio.h>

int main() {
  int n1, n2, r1;
  printf ("digite um numero inteiro: ");
  scanf ("%d",&n1);
  printf ("digeite outro numero inteiro que lhe apresentarei a divisão entre os dois: ");
  scanf ("%d", &n2);

  if (n2 == 0) {
    printf( "Seu segundo número não pode ser zero.\n");
  }
  else {
    r1 = n1 / n2;
  }
    printf ("a divisão entre seus dois numero é %d\n", r1);
  return 0;
}
