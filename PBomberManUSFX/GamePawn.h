#pragma once
#include "GameActor.h"
#include "./system/KeyboardInput.h"

class GamePawn :
    public GameActor
{
protected:
    KeyboardInput* keyboardInput;
    SDL_Keycode botonBomba = SDLK_b;
    SDL_Keycode botonArriba = SDLK_UP;
    SDL_Keycode botonAbajo = SDLK_DOWN;
    SDL_Keycode botonIzquierda = SDLK_LEFT;
    SDL_Keycode botonDerecha = SDLK_RIGHT;
  
    /// ////
   
    SDL_Keycode botonBombaDos = SDLK_e;
    SDL_Keycode botonArribaDos = SDLK_w;
    SDL_Keycode botonAbajoDos = SDLK_s;
    SDL_Keycode botonIzquierdaDos = SDLK_a;
    SDL_Keycode botonDerechaDos = SDLK_d;
public:
    // Constructores destructor
    GamePawn();
    GamePawn(Texture* _textura, Tile* _tileActual);
    ~GamePawn();

    // Metodos heredados
    virtual void render();
    virtual void update();
    virtual void updateDos();
    virtual void handleEvent(SDL_Event* _event){};
    virtual void deleteGameObjet();

    // Metodos especificos
    virtual void setTileActual(Tile* _tileNuevo);
};

