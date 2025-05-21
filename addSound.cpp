#include "addSound.h"
#include <iostream>

Mix_Chunk* g_coin_sound = nullptr;
Mix_Music* g_background_music = nullptr;
Mix_Chunk* g_explosion_sound1 = nullptr;
Mix_Chunk* g_explosion_sound2 = nullptr;
Mix_Chunk* g_shoot_sound = nullptr;

bool LoadSound() {
    g_background_music = Mix_LoadMUS("Sound/Action.mid");
    if (g_background_music == nullptr) {
        std::cout << "Failed to load explosion sound! SDL_mixer Error: " << Mix_GetError() << std::endl;
        return false;
    }
    g_coin_sound = Mix_LoadWAV("Sound/beep_.wav");
    if (g_coin_sound == nullptr) {
        std::cout << "Failed to load explosion sound! SDL_mixer Error: " << Mix_GetError() << std::endl;
        return false;
    }
    g_explosion_sound1 = Mix_LoadWAV("Sound/Bomb2.wav");
    if (g_explosion_sound1 == NULL) {
        std::cout << "Failed to load explosion sound! SDL_mixer Error: " << Mix_GetError() << std::endl;
        return false;
    }
    g_explosion_sound2 = Mix_LoadWAV("Sound/Explosion+1.wav");
    if (g_explosion_sound1 == NULL) {
        std::cout << "Failed to load explosion sound! SDL_mixer Error: " << Mix_GetError() << std::endl;
        return false;
    }
    g_shoot_sound = Mix_LoadWAV("Sound/Fire1.wav");
    if (g_shoot_sound == NULL) {
        std::cout << "Failed to load explosion sound! SDL_mixer Error: " << Mix_GetError() << std::endl;
        return false;
    }
    return true;
}



void CloseSound() {
    if (g_coin_sound != nullptr) {
        Mix_FreeChunk(g_coin_sound);
        g_coin_sound = nullptr;
    }

    if (g_background_music != nullptr) {
        Mix_FreeMusic(g_background_music);
        g_background_music = nullptr;
    }
    if (g_explosion_sound1 != nullptr) {
        Mix_FreeChunk(g_explosion_sound1);
       g_explosion_sound1 = nullptr;
    }
    if (g_explosion_sound2 != nullptr) {
        Mix_FreeChunk(g_explosion_sound2);
       g_explosion_sound2 = nullptr;
    }
    if (g_shoot_sound != nullptr) {
        Mix_FreeChunk(g_shoot_sound);
       g_shoot_sound = nullptr;
    }
}

