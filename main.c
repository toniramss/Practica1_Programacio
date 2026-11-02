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

// TODO: error, el al introducir el valor 2.5 asigna el case 2
int demanarCapitalAss()
{
    /**int respostaUsuari, capitalAss, resultat;

    printf("Introdueix el capital a assegurar:\n" 
        "1 - 50.000 EUR\n"
        "2 - 100.000 EUR\n"
        "3 - 150.000 EUR\n"
        "4 - 200.000 EUR\n"
        "5 - 300.000 EUR\n"
    );

    do
    {
        printf("Escull una opció (1-5): ");
        resultat = scanf("%d", &respostaUsuari);

        if (resultat == 1)
        {
            switch (respostaUsuari) {
                case 1:
                    capitalAss = 50000;
                    break;
                case 2:
                    capitalAss = 100000;
                    break;
                case 3:
                    capitalAss = 150000;
                    break;
                case 4:
                    capitalAss = 200000;
                    break;
                case 5:
                    capitalAss = 300000;
                    break;
                default:
                    capitalAss = 0;
                    fprintf(stderr, "Error: seleccioneu una opció entre 1 i 5.\n");
            }
        }
        else if (resultat == 0)
        {
            fprintf(stderr, "Error: seleccioneu una opció entre 1 i 5.\n");
        }
        else
        {
            fprintf(stderr, "Error indefinit\n");

            return -1;
        }

        netejarBuffer();

    } while (capitalAss == 0 || resultat != 1);

    return capitalAss;**/
}

char demanarFumador()
{
    char fumador;
    int resultat;

    do
    {
        printf("És fumador/a? (S/N): ");
        resultat = scanf("%c", &fumador);

        if (resultat == 1)
        {
            if (fumador != 'S' && fumador != 's' && fumador != 'N' && fumador != 'n')
            {
                fprintf(stderr, "Error: introduïu S o N.\n");
            }
        }
        else if (resultat == 0)
        {
            fprintf(stderr, "Error: introduïu S o N.\n");
        }
        else
        {
            fprintf(stderr, "Error indefinit\n");

            return -1;
        }

        netejarBuffer();

    } while (fumador != 'S' && fumador != 's' && fumador != 'N' && fumador != 'n' || resultat != 1);

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

    // edatPersona = demanarEdat();

    // printf("La edat introduïda es: %d\n", edatPersona);

    // capitalAssegurat = demanarCapitalAss();

    // printf("El capital assegurat es de: %d\n", capitalAssegurat);

    // fumador = demanarFumador();
    // printf("La edat introduïda es: %c\n", fumador);

    pesKg = demanarPes();
    alcada = demanarAlcada();
    categoriaProf = demanarCategoriaProf();
}
