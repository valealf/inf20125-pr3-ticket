#include <stdio.h>

int main(void)
{
    int tareas_iniciales = 0;
    int tareas_recibidas = 0;
    int tareas_completadas = 0;
    int tareas_pendientes = 0;

    if (scanf("%d %d %d",
              &tareas_iniciales,
              &tareas_recibidas,
              &tareas_completadas) != 3)
    {
        return 1;
    }

    tareas_pendientes = tareas_iniciales + tareas_recibidas + tareas_completadas;

    printf("Tareas pendientes: %d\n", tareas_pendientes);
    return 0;
}
