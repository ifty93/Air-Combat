#ifndef SOUNDHANDLER_H_INCLUDED
#define SOUNDHANDLER_H_INCLUDED


#include <mmsystem.h>
using namespace std;

class SoundHandler
{
  public:
    bool mute;

    SoundHandler();
    void startTheme();
    void heroShoot();
    void enemyShoot();
    void background();
    void heroGotHit();
    void enemyDead();
    void clickStart();
    bool heroDeadTrigger;
};

SoundHandler::SoundHandler()
{
    mute = false;
}

void SoundHandler::startTheme(){
    if(!mute)
        PlaySound("gameTheme.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void SoundHandler::heroShoot(){
    if(!mute)
        PlaySound("heroShoot.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void SoundHandler::enemyShoot(){
    if(!mute)
        PlaySound("enemyShoot.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void SoundHandler::clickStart(){
    if(!mute)
        PlaySound("clicStart.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void SoundHandler::heroGotHit(){
    if(!mute)
        PlaySound("heroGotHit.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void SoundHandler::enemyDead(){
    if(!mute)
        PlaySound("enemyDead.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void SoundHandler::background(){
    if(!mute)
        PlaySound("gameTheme.wav", NULL, SND_FILENAME | SND_LOOP);
}

#endif // SOUNDHANDLER_H_INCLUDED
