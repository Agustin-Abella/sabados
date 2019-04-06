#include <stdio.h>
#include <stdlib.h>
int dameEdad(int *edad,char *mensaje);
int dameEdadDos(int *edad,char *mensaje);
int dameEdadTres(int *edad,char *mensaje);

int main()
{
    int laEdad;
    int seCargo;
    do
    {
        seCargo=dameEdadTres(&laEdad,"\nque edad tenes?:");
    }
    while(seCargo==0);
    printf("la edad ingresada es:%d",laEdad);

    if(dameEdadTres(&laEdad,"dame la edad")==1)
    {
        printf("la edad es: %d ",laEdad);
    }
    else
        {
            printf("no se pudo");


        }
    //printf("la edad es %d",laEdad);

    return 0;
}
/** \brief pide la edad
 *
 * \param edad int*
 * \param mensaje char*
 * \return int
 *
 */
int dameEdad(int *edad,char *mensaje)
{
    int sePudo=0;
    int aux;
    printf(mensaje);
    sePudo= scanf("%d",&aux);
    if (sePudo==1)
    {
        *edad=aux;
         //edad=aux;
    }
    return sePudo;

}

/** \brief
 *
 * \param edad int*
 * \param mensaje char*
 * \return int
 *
 */
int dameEdadDos(int *edad,char *mensaje)// funcion que
{
    char cadenaCargada[20];
    int sePudo=1;

    printf(mensaje);
    sePudo= scanf("%s",cadenaCargada); //garda en el aux

    *edad=atoi(cadenaCargada);


    return sePudo;

}
int dameEdadTres(int *edad,char *mensaje)// funcion que
{
    char cadenaCargada[20];
    //int seCargo=1;
    int sePudo=0;
    int i;


    printf(mensaje);
    sePudo= scanf("%s",cadenaCargada); //garda en el aux




    //*edad=atoi(cadenaCargada);
    for(i = 0; i < strlen(cadenaCargada);i++)
    {
        if(cadenaCargada[i]<'0'|| cadenaCargada[i]>'9')
        {
            sePudo=0;
        }
    }


    return sePudo;

}
