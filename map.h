#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#include "BaseFunc.h"
#include "BaseObject.h"

#define MAX_TILES 20
class TileMat : public BaseObject
{
public:
    TileMat(){;}
    ~TileMat(){;}
};

class GameMap
{
public:
    GameMap(){;}
    ~GameMap(){;}
    void LoadMap(char*nam);
    void LoadTiles(SDL_Renderer* screen);
    void DrawMap(SDL_Renderer*screen);
    Map getMap() const {return game_map_;};
private:
    Map game_map_;
    TileMat tile_mat[MAX_TILES];
};

#endif
