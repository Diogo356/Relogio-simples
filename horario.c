#include <stdio.h>
#include <stdlib.h>

struct horario
{
    int horas;
    int minutos;
    int segundos;
};

int main(void)
{
    struct horario agora;
    struct horario fim;
    

    agora.horas = 16;
    agora.minutos = 20;
    agora.segundos = 10;

    fim.horas = 20;
    fim.minutos = 30;
    fim.segundos = 10;

    while (agora.horas < fim.horas || (agora.horas == fim.horas && agora.minutos < fim.minutos) || (agora.horas == fim.horas && agora.minutos == fim.minutos && agora.segundos < fim.segundos))
    {
        printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
        agora.segundos++;
        if(agora.segundos == 60)
        {
            agora.segundos = 0;
            agora.minutos++;
        }
        if(agora.minutos == 60)
        {
            agora.minutos = 0;
            agora.horas++;
        }
        sleep(1);
    }
    return (0);
}