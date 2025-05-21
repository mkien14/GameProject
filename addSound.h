#ifndef ADD_SOUND_H
#define ADD_SOUND_H

#include <SDL_mixer.h>

extern Mix_Chunk* g_coin_sound;
extern Mix_Music* g_background_music;
extern Mix_Chunk* g_explosion_sound1;
extern Mix_Chunk* g_explosion_sound2;
extern Mix_Chunk* g_shoot_sound;



bool LoadSound();
void CloseSound();

#endif
