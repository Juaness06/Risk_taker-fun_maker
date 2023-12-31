#ifndef __SISTEMAAPOYO_H__
#define __SISTEMAAPOYO_H__

#include "Partida.h"

class SistemaApoyo
{
  public:
   Partida* partida;

  public:
    SistemaApoyo();
    void crearPartida();
    void reanudarPartida(std::string nombreArchivo);
    void escojerTerris(Partida *partidaAct);
    void repartirTropas(Partida *partidaAct);
    void accionesTurno(Partida *partidaAct);
    void inicializarTablero();
    void actTableroInfoActual();
    void costoConquista(std::string nombreTerriOrigen);
    void conquistaMasBarata(Partida* partidaAct);

};

#include "SistemaApoyo.cxx"

#endif