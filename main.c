/*
   Practica 1 - Assegurances SafeLife
   Autors: Toni Rams i Jan Rodríguez
 */

#include <stdio.h>

void netejarBuffer() {
    int caracter;
    // Buidem el buffer. Seguim llegint fins el salt de línia o el EOF (End Of File)
    while ((caracter = getchar()) != '\n' && caracter != EOF)
    {}
}

int demanarEdat()
{
    int edat, resultat;

    do
    {
        printf("Indica la edat de la persona assegurada: ");
        resultat = scanf("%d", &edat);

        if (resultat == 1)
        {
            if (edat < 18 || edat > 70)
            {
                fprintf(stderr, "L'edat ha d'estar entre 18 i 70 anys\n");
            }
        }
        else if (resultat == 0)
        {
            fprintf(stderr, "L'edat ha d'estar entre 18 i 70 anys\n");
        }
        else
        {
            fprintf(stderr, "Error indefinit\n");

            return -1;
        }

        netejarBuffer();

    } while (edat < 18 || edat > 70 || resultat != 1);

    return edat;
}

float demanarCapitalAss()
{
    float capitalAss;

    // TODO: implementar la funcion

    return capitalAss;
}

char demanarFumador()
{
    char fumador;

    // TODO: implementar la funcion

    return fumador;
}

float demanarPes()
{
    float pes;

    // TODO: implementar funcion

    return pes;
}

float demanarAlcada()
{
    float alcada;

    // TODO: implementar funcion

    return alcada;
}

int demanarCategoriaProf()
{
    int catProf;

    // TODO: implementar funcion

    return catProf;
}

char esportsRisc()
{
    char esportsRisc;

    // TODO: implementar funcion

    return esportsRisc;
}

int main()
{

    int edatPersona, capitalAssegurat;
    char fumador, sportsRisc;
    float pesKg = 0.0;
    float alcada = 0.0;
    int categoriaProf;

    printf("*****************************\n");
    printf("*** ASSEGURANCES SAFELIFE ***\n");
    printf("*****************************\n");

    edatPersona = demanarEdat();

    printf("La edat introduïda es: %d\n", edatPersona);

    capitalAssegurat = demanarCapitalAss();

    printf("La edat introduïda es: %d\n", edatPersona);


    fumador = demanarFumador();
    pesKg = demanarPes();
    alcada = demanarAlcada();
    categoriaProf = demanarCategoriaProf();
}
