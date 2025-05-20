#ifndef EXPLOSIONOBJECT_H_INCLUDED
#define EXPLOSIONOBJECT_H_INCLUDED

#include "BaseFunc.h"
#include "BaseObject.h"

#define NUM_FRAME_EXP 8

class ExplosionObject : public BaseObject
{
public:
    ExplosionObject();
    ~ExplosionObject();

public:
    void set_clip();
    void set_frame(const int& fr) { frame_ = fr; }
    virtual bool LoadImg(std::string path, SDL_Renderer* screen);
    void Show(SDL_Renderer* screen);
    int  get_frame_width()  const { return frame_width_;  }
    int  get_frame_height() const { return frame_height_; }

private:
    int        frame_width_;
    int        frame_height_;
    unsigned   frame_;                // chỉ số frame hiện tại (0..NUM_FRAME_EXP-1)
    SDL_Rect   frame_clip_[NUM_FRAME_EXP];  // mảng khung con (clip) cho mỗi frame
};


#endif // EXPLOSIONOBJECT_H_INCLUDED
