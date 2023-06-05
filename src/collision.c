/*
** EPITECH PROJECT, 2023
** collsion.c
** File description:
** collsion handling
*/

#include "../include/my_lib.h"

void petit_setarbre1(killer *win)
{
    win->ar1tx = sfTexture_createFromFile("images/birdkiller.png", NULL);
    win->ar1sp = sfSprite_create();
    sfSprite_setTexture(win->ar1sp, win->ar1tx, sfTrue);
    win->arscal.x = 0.46; win->arscal.y = 0.23;
    win->ar1pos.x = 160; win->ar1pos.y = 150;
    sfSprite_setPosition(win->ar1sp, win->ar1pos);
    sfSprite_setScale(win->ar1sp, win->arscal);
    win->ar2tx = sfTexture_createFromFile("images/birdkiller.png", NULL);
    win->ar2sp = sfSprite_create();
    sfSprite_setTexture(win->ar2sp, win->ar2tx, sfTrue);
    win->ar2pos.x = 160; win->ar2pos.y = 330;
    sfSprite_setPosition(win->ar2sp, win->ar2pos);
    sfSprite_setScale(win->ar2sp, win->arscal);
    win->ar3tx = sfTexture_createFromFile("images/birdkiller.png", NULL);
    win->ar3sp = sfSprite_create();
    sfSprite_setTexture(win->ar3sp, win->ar3tx, sfTrue);
    win->ar3pos.x = 480; win->ar3pos.y = 330;
    sfSprite_setPosition(win->ar3sp, win->ar3pos);
    sfSprite_setScale(win->ar3sp, win->arscal);

}

void petit_setarbre2(killer *win)
{
    win->pm1t = sfTexture_createFromFile("images/birdkiller.png", NULL);
    win->pm1s = sfSprite_create();
    sfSprite_setTexture(win->pm1s, win->pm1t, sfTrue);
    win->pm1scal.x = 0.20; win->pm1scal.y = 0.18;
    win->pm1pos.x = 490; win->pm1pos.y = 145;
    sfSprite_setPosition(win->pm1s, win->pm1pos);
    sfSprite_setScale(win->pm1s, win->pm1scal);
    win->pm2t = sfTexture_createFromFile("images/birdkiller.png", NULL);
    win->pm2s = sfSprite_create();
    sfSprite_setTexture(win->pm2s, win->pm2t, sfTrue);
    win->pm2pos.x = 690; win->pm2pos.y = 145;
    sfSprite_setPosition(win->pm2s, win->pm2pos);
    sfSprite_setScale(win->pm2s, win->pm1scal);
    win->jd1t = sfTexture_createFromFile("sprite/JADIN.png", NULL);
    win->jd1s = sfSprite_create();
    sfSprite_setTexture(win->jd1s, win->jd1t, sfTrue);
    win->jd1pos.x = 1350; win->pm2pos.y = 0;
    win->jd1scal.x = 1.5; win->jd1scal.y = 1.7;
    sfSprite_setPosition(win->jd1s, win->jd1pos);
    sfSprite_setScale(win->jd1s, win->jd1scal);
}

void petit_setarbre3(killer *win)
{
    win->v1t = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->v1s = sfSprite_create();
    sfSprite_setTexture(win->v1s, win->v1t, sfTrue);
    win->v1pos.x = 10; win->v1pos.y = 700;
    win->v1scal.x = 1.40; win->v1scal.y = 1.45;
    sfSprite_setPosition(win->v1s, win->v1pos);
    sfSprite_setScale(win->v1s, win->v1scal);
    win->v2t = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->v2s = sfSprite_create();
    sfSprite_setTexture(win->v2s, win->v2t, sfTrue);
    win->v2pos.x = 10; win->v2pos.y = 1100;
    win->v2scal.x = 2.35; win->v2scal.y = 1.45;
    sfSprite_setPosition(win->v2s, win->v2pos);
    sfSprite_setScale(win->v2s, win->v2scal);
}

void petit_setarbre4(killer *win)
{
    win->v3t = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->v3s = sfSprite_create();
    sfSprite_setTexture(win->v3s, win->v3t, sfTrue);
    win->v3pos.x = 10; win->v3pos.y = 920;
    win->v3scal.x = 0.6; win->v3scal.y = 1.2;
    sfSprite_setPosition(win->v3s, win->v3pos);
    sfSprite_setScale(win->v3s, win->v3scal);
    win->fn1t = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->fn1s = sfSprite_create();
    sfSprite_setTexture(win->fn1s, win->fn1t, sfTrue);
    win->fn1pos.x = 1250; win->fn1pos.y = 720;
    win->fn1scal.x = 1; win->fn1scal.y = 1.45;
    sfSprite_setPosition(win->fn1s, win->fn1pos);
    sfSprite_setScale(win->fn1s, win->fn1scal);
}

void petit_setarbre5(killer *win)
{
    win->fn2t = sfTexture_createFromFile("sprite/fn2.png", NULL);
    win->fn2s = sfSprite_create();
    sfSprite_setTexture(win->fn2s, win->fn2t, sfTrue);
    win->fn2pos.x = 2150; win->fn2pos.y = 720;
    win->fn2scal.x = 1.37; win->fn2scal.y = 1.35;
    sfSprite_setPosition(win->fn2s, win->fn2pos);
    sfSprite_setScale(win->fn2s, win->fn2scal);
    win->fn3t = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->fn3s = sfSprite_create();
    sfSprite_setTexture(win->fn3s, win->fn3t, sfTrue);
    win->fn3pos.x = 1900; win->fn3pos.y = 1070;
    win->fn3scal.x = 0.8; win->fn3scal.y = 1.7;
    sfSprite_setPosition(win->fn3s, win->fn3pos);
    sfSprite_setScale(win->fn3s, win->fn3scal);
}
