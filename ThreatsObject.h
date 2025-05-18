#ifndef THREATSOBJECT_H_INCLUDED
#define THREATSOBJECT_H_INCLUDED

#include "BaseFunc.h"
#include "BaseObject.h"


#define THREAT_MAX_FALL_SP 10;
#define THREAT_GRAVITY_SPEED 0.8
#define THREAT_FRAME_NUM 8

class ThreatsObject : public BaseObject
{
public:
    ThreatsObject();
    ~ThreatsObject();

    void set_x_val(const float& xVal){x_val_=xVal;}
    void set_y_val(const float& yVal){y_val_=yVal;}

    void set_x_pos(const float& xp) {x_pos_=xp;}
    void set_y_pos(const float& yp) {y_pos_=yp;}

    float get_x_pos() const {return x_pos_;}
    float get_y_pos() const {return y_pos_;}

    void SetMapXY(const int& mp_x, const int& mp_y){map_x_= mp_x;map_y_= mp_y;}

    void set_clips();
    bool LoadImg(std::string path, SDL_Renderer* screen);
    void Show(SDL_Renderer*des);

    int get_width_frame() const {return width_frame_;}
    int get_height_frame() const {return height_frame_;}
    void DoPlayer(Map& gmap);
    void CheckToMap(Map& gmap);
private:
    bool on_ground_;
    float x_pos_;
    float y_pos_;
    int come_back_time_;
    SDL_Rect frame_clip_[THREAT_FRAME_NUM];
    int width_frame_;
    int height_frame_;
    int frame_;
    float x_val_;
    float y_val_;
    int map_x_;
    int map_y_;
};

#endif // THREATSOBJECT_H_INCLUDED
