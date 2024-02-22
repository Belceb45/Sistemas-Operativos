// Realizar una calcualdora y subirla a git

#include <stdio.h>
#include <math.h>
#include <string.h>

void multiplicacion(float *,float *,float*);

int main()
{
    char opt[30];
    float a, b,res;
    int condicion = 0;

    printf("\nCalculadora\nA: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);

    printf("\n\nIngrese la opcion: ");
    scanf("%s", opt);
    do
    {
        if (stricmp(opt, "suma") == 0)
        {
            printf("\nSuma");
          
        }
        else if (stricmp(opt, "resta") == 0)
        {
            printf("\nResta");
        }

        else if (stricmp(opt, "multiplicacion") == 0)
        {
            printf("\nmMultiplicacion");
            multiplicacion(&a,&b,&res);
            printf("\nResultado: %.1f, res");
        }
        else if (stricmp(opt, "division") == 0)
        {
            printf("\nDivision");
        }
        else
        {
            printf("\nIntente de nuevo");
            return 0;
        }

    } while (condicion);

}

void multiplicacion(float *x, float *y, float *res)
{
    *res = (*x) * (*y);
}
