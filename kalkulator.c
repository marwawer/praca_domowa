#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dzialanie;
    double a, b, wynik;
    
    puts("\t KALKULATOR \n");
    printf("     Wybierz dzialanie  \n\n dzielenie [/]\n\n mnozenie [*]\n\n odejmowanie [-]\n\n dodawanie [+] \n\n ");
    scanf("%c", &dzialanie);
    printf("Podaj liczbe a: \n");
    scanf("%lf", &a);
    printf("Podaj liczbe b: \n");
    scanf("%lf", &b);
    
    switch (dzialanie)
    {
        case '+':
	    wynik=a+b;
            printf(" Suma %f+%f =%f \n ", a, b, wynik);
            break;
        case '-':
	    wynik=a-b;
            printf("Roznica %f - %f = %f \n ", a, b, wynik); 
            break;
        case '*':
            wynik = a * b;
            printf("Iloczyn %f * %f =%f \n ", a, b, wynik);
            break;
        case '/':
            wynik = a / b;
            if (b!=0)
            	{
                printf("Iloraz %f/%f=%f \n ",a, b, wynik);
            	}
            else
            	{
                printf(" Nie moge podzieliæ %f przez 0 dzia³anie niewykonalne \n ", a);
            	}

            break;
        default:
            printf("Bledny znak nie obsluguje takiego dzialania \n ");
            break;
    }
}
