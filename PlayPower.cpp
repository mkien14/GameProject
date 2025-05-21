#include "PlayPower.h"

PlayPower::PlayPower()
{
    number_=0;
}
PlayPower::~PlayPower()
{

}

void PlayPower::AddPos(const int& xp){
    pos_list_.push_back(xp);
}

void PlayPower::Init(SDL_Renderer *screen)
{
    LoadImg("img//player_pw.png", screen);
    number_ =3;
    if (pos_list_.size()>0)
    {
        pos_list_.clear();
    }
    AddPos(20);
    AddPos(60);
    AddPos(100);
}

void PlayPower::Show(SDL_Renderer * screen)
{
    for (int i =0;i<pos_list_.size();i++)
    {
        rect_.x = pos_list_.at(i);
        rect_.y = 0;
        Render(screen);
    }
}

void PlayPower::DeCrease()
{
    number_--;
    pos_list_.pop_back();
}

void PlayPower::InitCrease()
{
    number_++;
    int last_pos = pos_list_.back();
    last_pos += 40;
    pos_list_.push_back(last_pos);
}

PlayerMoney::PlayerMoney()
{
    x_pos_ =SCREEN_WIDTH/4+30;
    y_pos_ =5;
}

PlayerMoney::~PlayerMoney()
{

}

void PlayerMoney::Init (SDL_Renderer*screen)
{
    bool ret = LoadImg("img//money_img.png",screen);
}

void PlayerMoney::Show(SDL_Renderer*screen)
{
    rect_.x = x_pos_;
    rect_.y = y_pos_;
    Render(screen);
}
