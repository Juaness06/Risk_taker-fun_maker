#include "TADs.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <array>

void tituloIntro();
void comandos(SistemaApoyo sistemaApoyo);

int main()
{
    tituloIntro();

    SistemaApoyo sistemaApoyo;
    comandos(sistemaApoyo);

     // Crear un objeto de la clase SistemaApoyo
    sistemaApoyo.crearPartida(); // Llamar al método crearPartida en el objeto creado
    return 0; // Devolver 0 al finalizar el programa
}

void tituloIntro()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "El presente juego fue realizado por los estudiantes de la carrera de ingenieria de sistemas: " << std::endl;
    std::cout << "----------Hermann David Hernandez Pinto ----- & ----- Juan Esteban Granada OBrien -----------" << std::endl;
    std::cout << std::endl;
    std::cout << "                    RRRRRRRR        IIIIII        SSSS      KKKK  KKKK                       " << std::endl;
    std::cout << "                    RRRRRRRRR       IIIIII       SSSSSS     KKKK  KKKK                       " << std::endl;
    std::cout << "                     RR    RR         II        SSS  SS      KK  KKK                         " << std::endl;
    std::cout << "                     RR    RR         II        SSS          KK KKK                          " << std::endl;
    std::cout << "                     RRRRRRR          II         SSSS        KKKKK	                       " << std::endl;
    std::cout << "                     RRRRRRR          II          SSSSS      KKKKK	                       " << std::endl;
    std::cout << "                     RR   RR          II            SSS      KK KKK	                       " << std::endl;
    std::cout << "                     RR    RR         II        SSS  SS      KK  KKK                         " << std::endl;
    std::cout << "                    RRRR  RRRR      IIIIII      SSS  SS     KKKK  KKKK                       " << std::endl;
    std::cout << "                    RRRR  RRRR      IIIIII       SSSSS      KKKK  KKKK                       " << std::endl;
    std::cout << std::endl;
    std::cout << "----------------------------------- RISK TAKER - FUN MAKER ----------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Para empezar, si no esta familiarizado con los comandos del juego, escriba ayuda para " << std::endl;
    std::cout << "desplegar el menu de comandos." << std::endl;
    std::cout << std::endl;
    std::cout << "Si ya habia jugado, ya sabe que hacer!" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

//void comandos(SistemaApoyo _sistemaApoyo)
void comandos(SistemaApoyo sistemaApoyo)
{
    // SistemaApoyo sistemaApoyo = _sistemaApoyo;
    std::string command;

    while (true)
    {
        std::cout << "$ "; // Indicador de línea de comando
        std::getline(std::cin, command);

        if (command == "ayuda")
        {
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << " ------------------ LISTA DE COMANDOS ------------------"<< std::endl;
            std::cout << "| -> inicializar                                        |" << std::endl;
            std::cout << "| -> guardar <nombre_del_archivo>                       |" << std::endl;
            std::cout << "| -> guardar_comprimido <nombre_archivo>                |" << std::endl;
            std::cout << "| -> costo_conquista <territorio>                       |" << std::endl;
            std::cout << "| -> conquista_mas_barata                               |" << std::endl;
            std::cout << "| -> turno <nombre_del_jugador>                         |" << std::endl;
            std::cout << "| -> salir                                              |" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << " ----------- SI NO SABE COMO USAR UN COMANDO -----------"<< std::endl;
            std::cout << "| -> inicializar?                                       |" << std::endl;
            std::cout << "| -> guardar?                                           |" << std::endl;
            std::cout << "| -> guardar_comprimido?                                |" << std::endl;
            std::cout << "| -> costo_conquista?                                   |" << std::endl;
            std::cout << "| -> conquista_mas_barata?                              |" << std::endl;
            std::cout << "| -> turno?                                             |" << std::endl;
            std::cout << "| -> salir?                                             |" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
        }
        else if (command == "inicializar?") 
        {
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "El comando inicializar se puede utilizar de dos formas:" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << " - Para empezar-crear una partida nueva (desde cero):" << std::endl;
            std::cout << " inicializar" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "- Para continuar una partida ya empezada (ya guardada):" << std::endl;
            std::cout << "inicializar <nombre_archivo>" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
        }
        else if (command == "inicializar") {

            // con el llamado de la siguiente funcion se esta creando una partida
            // pero no ha sido inicializada correctamente (falta repartir los territorios)
            sistemaApoyo.crearPartida();

            // La siguiente salida por pantalla seria despues de la reparticion de territorios
            
            sistemaApoyo.escojerTerris();

        } 
        else if (command == "inicializar <nombre_archivo>")
        {

            // Si no esta en una partida
            std::cout <<"El juego ya ha sido inicializado" << std::endl;

            // Para el caso (Archivo vacío o incompleto) como aun no se han creado los archivos para guardar
            // para la entrega cero se dejo esto comentado

        }
        else if (command == "guardar?") 
        {
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "El comando guardar sirve para: que el estado actual del " << std::endl;
            std::cout << "juego sea guardado en un archivo de texto" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "- Para utilizarlo escriba: guardar " << std::endl;
            std::cout << "  seguido del nombre de el nombre del archivo entre <> " << std::endl;
            std::cout << "Ejemplo: " << std::endl;
            std::cout << "guardar <nombre_del_archivo>" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
        }
        else if (command == "guardar <nombre_archivo>")
        {
            
            // Si no esta en una partida
            std::cout <<"Esta partida no ha sido inicializada correctamente" << std::endl;


            // Si esta en una partida ya iniciada
            std::cout <<"La partida ha sido guardada correctamente" << std::endl;
            
            // Para el caso (Error al guardar) como aun no se han creado los archivos para guardar
            // para la entrega cero se dejo esto comentado

        }
        else if (command == "guardar_comprimido?") 
        {
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "El comando guardar_comprimido sirve para: que el estado " << std::endl;
            std::cout << "actual del juego sea guardado en un archivo de binario  " << std::endl;
            std::cout << "con la información comprimida" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "- Para utilizarlo escriba: guardar_comprimido " << std::endl;
            std::cout << "  seguido del nombre de el nombre del archivo entre <> " << std::endl;
            std::cout << "Ejemplo: " << std::endl;
            std::cout << "guardar_comprimido <nombre_del_archivo>" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
        }
        else if (command == "guardar_comprimido <nombre_archivo>")
        {
            // Si no esta en una partida
            std::cout <<"Esta partida no ha sido inicializada correctamente" << std::endl;
            
            // Si esta en una partida ya iniciada saldra esto
            std::cout <<"La partida ha sido codificada y guardada correctamente" << std::endl;

            // Para el caso (Error al codificar y/o guardar) como aun no se han creado los archivos para guardar
            // para la entrega cero se dejo esto comentado

        }
        else if (command == "costo_conquista?") 
        {
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "El comando costo_conquista sirve para: calcular el costo" << std::endl;
            std::cout << "y la secuencia de territorios a ser conquistados para   " << std::endl;
            std::cout << "lograr controlar el territorio dado por el usuario." << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "- Para utilizarlo escriba: costo_conquista " << std::endl;
            std::cout << "  seguido del nombre del territorio entre <> " << std::endl;
            std::cout << "Ejemplo: " << std::endl;
            std::cout << "costo_conquista <territorio>" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
        }
        else if(command == "costo_conquista <territorio>")
        {
            
            // Si no esta en una partida saldia esto
            std::cout <<"Esta partida no ha sido inicializada correctamente" << std::endl;
            
            
            // Si esta en una partida ya finalizada saldria esto
            std::cout <<"Esta partida ya tuvo un ganador" << std::endl;
            
            
            // Si esta en una partida ya iniciada se realizan los calculos para saber el costo de conquista de un territorio especifico dado por el usuario
            std::cout <<"Para conquistar el territorio <territorio>, debe atacar desde <territorio_1>, pasando por los territorios <territorio_2>, <territorio_3>, ..., <territorio_m>. Debe conquistar <n> unidades de ejército" << std::endl;
            
        }
        else if (command == "conquista_mas_barata?") 
        {
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "El comando conquista_mas_barata sirve para: de todos los" << std::endl;
            std::cout << "territorios posibles, calcular aquel que pueda implicar " << std::endl;
            std::cout << "un menor número de unidades de ejército perdidas." << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "- Para utilizarlo escriba:" << std::endl;
            std::cout << "conquista_mas_barata" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
        }
        else if (command == "conquista_mas_barata")
        {
            // Si esta en una partida no iniciada por pantalla sadria esto
            std::cout <<"Esta partida no ha sido inicializada correctamente" << std::endl;
            
            
            // Si esta en una partida ya finalizada la salida por pantalla es la siguiente
            std::cout <<"Esta partida ya tuvo un ganador" << std::endl;
        
            // Si esta en una partida ya inicida se realizan los calculos para saber cual es la conquista mas barata
            std::cout <<"La conquista más barata es avanzar sobre el territorio <territorio_1> desde el territorio <territorio_2>. Para conquistar el territorio <territorio_1>, debe atacar desde <territorio_2>, pasando por los territorios <territorio_3>, <territorio_4>, ..., <territorio_m>. Debe conquistar <n> unidades de ejército" << std::endl;
        }
        else if (command == "salir?") 
        {
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "El comando salir sirve para: termina la ejecución de    " << std::endl;
            std::cout << "la aplicación.                                          " << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
            std::cout << "- Para utilizarlo escriba:" << std::endl;
            std::cout << "salir" << std::endl;
            std::cout << "--------------------------------------------------------" << std::endl;
        }
        else if (command == "salir") 
        {
            // Si el usuario ingresa "exit", el programa finaliza el bucle y sale.
            break;
        }
        else 
        {
            std::cout << "Comando desconocido. Intentelo nuevamente" << std::endl;
            std::cout << " - Para ver los comando validos, ingrese: ayuda" << std::endl;
            std::cout << " - Para mas informacion de un comando ingrese el comando seguido de: ?" << std::endl;
        }
    }
}
