#ifndef CONSOLA_INICIALIZACION_H_
#define CONSOLA_INICIALIZACION_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <commons/string.h>
    #include <commons/collections/list.h>
    #include "globales.h"
    #include "planificador.h"
    #include "estructura.h"

    void validarParametros(int argc, char* argv[]);
    t_list* obtenerInstrucciones(char* pathInstruccion);
    void inicializarEstados();
    void inicializarVariablesGlobales(char * pathConfig, char * pathConfigIP);

#endif