#include <stdio.h>
#include <stdlib.h>
// 1
/*

int a,b,c = 0;
int max;
int main()
{
    puts("Podaj trzy liczby");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    max = (a>b)&&(a>c)?a:(b>a)&&(b>c)?b:c;
    printf("%d",max);
    return 0;
}
*/
//2
/*
char a,b,c;
int max;
int main()
{
    puts("Podaj trzy znaki");
    scanf("%c",&a);
    scanf(" %c",&b);
    scanf(" %c",&c);
    max = (a>b)&&(a>c)?a:(b>a)&&(b>c)?b:c;
    printf("%c",max);
    return 0;
}
*/
//3
/*
unsigned int a,b,and,or,xor;
int main()
{   puts("Podaj dwe liczby");
    scanf("%u",&a);
    scanf("%u",&b);
    and = a&b;
    or = a|b;
    xor = a^b;
    printf("Dziesietnie\nWynik and: %u \nWynik or: %u \nWynik xor: %u\n",and,or,xor);
    printf("Szesnastkowo\nWynik and: %x \nWynik or: %x \nWynik xor: %x",and,or,xor);
    return 0;
}
*/
//4
/*
int a;
short int b;
double c;
int main()
{
    printf("int %d\n short int %hd\n double %lf ",a,b,c);
    return 0;
}
*/
//5
/*
int a,b;
int main()
{   puts("Podaj dwie liczby typu int");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Wynik: %d",a/b);
    return 0;
}
*/
//6
/*
int a,b;
int main()
{   puts("Podaj dwie liczby typu calkowite");
    scanf("%d",&a);
    scanf("%d",&b);
    (a%b==0)?printf("%d",a):printf("%d",b);
    return 0;
    }
*/
//7
/*
int czyparzysta(float a)
{
    int b = (int)a/2*2;
    if (a==b)
        return 1;
    return 0;
}
int a;
int main()
{
    puts("Podaj liczbe!");
    scanf("%d", &a);
    if (czyparzysta(a))
        puts("TAK");
    else
        puts("NIE");
    return 0;
}
*/
//8 Jest to tak zwany niedomiar zmiennoprzecinkowy
// odejmujac od 0 jedynke dostanie sie w systemie osemkowym 1111 1111. Limit zmiennej unsigned powoduje ze wzorzec 1111 1111 jest zarezerwowany dla liczby 255
// poniewaz nie posiada sie tutaj bitu znaku.
/*
unsigned char a;
int main(){
printf("%u",a-1);
return 0;
}
*/
//9
//Zaprzeczenie koniunkcji dwóch zdań ∼(p∧q) jest równoważne alternatywie zaprzeczeń tych zdań  (∼p)∨(∼q)
/*
int a,b,alternatywa,koniunkcja,iloczyn,suma;
int main()
{
    puts("Podaj dwie liczby!");
    scanf("%d",&a);
    scanf("%d",&b);
    iloczyn = a&b;
    suma = a|b;
    alternatywa = ~a|~b;
    koniunkcja =~alternatywa;
    printf("Iloczyn: %d\n Alternatywa = %d\n Koniunkcja = %d\n",iloczyn,alternatywa,koniunkcja);
    koniunkcja = ~a&~b;
    alternatywa = ~koniunkcja;
    printf("Suma: %d\n Alternatywa: %d\n",suma,alternatywa);
    return 0;

}
/*



