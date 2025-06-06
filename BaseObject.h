#ifndef BASEOBJECT_H_INCLUDED
#define BASEOBJECT_H_INCLUDED

#include "BaseFunc.h"
using namespace std;

class BaseObject{
public:
    BaseObject();
    ~BaseObject();
    void SetRect(const int& x, const int &y){rect_.x = x; rect_.y = y;}
    SDL_Rect GetRect() const {return rect_;}
    SDL_Texture* GetObject() const {return p_object_;}

    virtual bool LoadImg(string path, SDL_Renderer* screen);
    void Render(SDL_Renderer*des, const SDL_Rect*clip = NULL);
    void Free();
protected:
    SDL_Texture* p_object_;
    SDL_Rect rect_;
};
#endif
