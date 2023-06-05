/*
** EPITECH PROJECT, 2023
** my_lib.h
** File description:
** structure and prototypes
*/

#ifndef MY_LIB
    #define MY_LIB
    #define MAX 1000
    #define NUM_SPRITESS 8
    #define NUM_SPRITES 23
    #include <math.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Joystick.h>
    #include <SFML/Window/Keyboard.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/Window/Sensor.h>
    #include <SFML/Config.h>
    #include <SFML/Graphics.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <time.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <unistd.h>
    #include <SFML/Audio/SoundBuffer.h>
    #include <SFML/Audio/Sound.h>
    #include <SFML/Audio/Music.h>
    #include <SFML/Audio.h>
    #include <SFML/Network.h>
    #include <SFML/System.h>
    #include <stddef.h>
    #include <fcntl.h>
    #include <string.h>

typedef struct my_lib{
    sfRenderWindow *window;
    sfRenderWindow *inventory;
    sfVideoMode invt_video;
    sfRenderWindow *khunter;
    sfVideoMode hunt_vid;
    sfEvent evt_hunt;
    sfRenderWindow *final_w;
    sfVideoMode final_v;
    sfEvent evt_final;
    sfVideoMode video;
    sfEvent event;
    sfEvent inv_evt;
    sfTexture *spl;
    sfSprite *sspl;
    sfTexture *back;
    sfSprite *sback;
    sfTexture *hero;
    sfSprite *shero;
    int pourc;
    sfTexture *story;
    sfSprite *sstroty;
    sfTexture *strbk;
    sfSprite *sstrbk;
    sfRectangleShape *barv;
    sfRectangleShape *bar;
    sfText *charg;
    sfFont *fcharg;
    sfClock *tmclo;
    sfTime tmt;
    float tm;
    sfVector2f splsca;
    float sty_y;
    sfVector2f sty_pos;
    sfVector2f sty_scale;
    sfRectangleShape *options;
    sfRectangleShape *jouer;
    sfRectangleShape *charger;
    sfRectangleShape *quitter;
    int rec_pos;
    int tch;
    sfVector2i mou_pos;
    sfFloatRect jou_pos;
    sfFloatRect chag_pos;
    sfFloatRect opt_pos;
    sfFloatRect qui_pos;
    sfMusic *mdv_m;
    sfTexture *opt_b;
    sfSprite *sopt_b;
    sfFloatRect sf_volup;
    sfFloatRect sf_voldw;
    sfFloatRect sf_volno;
    sfFloatRect sf_back;
    sfRectangleShape *back_opt;
    sfRectangleShape *no_vol;
    sfRectangleShape *d_vol;
    sfRectangleShape *up_vol;
    sfRectangleShape *big_vol;
    sfRectangleShape *arme1;
    sfRectangleShape *arme2;
    sfRectangleShape *bcl1;
    sfRectangleShape *bcl2;
    sfRectangleShape *inv_rec;
    sfVector2f scal;
    float ep;
    sfVector2i opt_po;
    int cptmus;
    int inv;
    sfVector2f in_sc;
    sfTexture *inv_bk;
    sfSprite *sinv_bk;
    char **map;
    sfRectangleShape *help_rect;
    sfFloatRect help_pos;
    sfRectangleShape *icon_rec;
    sfFloatRect icon_pos;
    int h_v;
    sfVector2f shero_pos;
    int cpt_conv;
    sfRectangleShape *fh_life;
    sfRectangleShape *fr_life;
    int fh_v;
    int fr_v;
    int win_ctrl;
}rpg;

typedef struct lib{
    sfClock *clock;
    sfTime time;
    sfRenderWindow *window;
    sfVideoMode video;
    sfEvent event;
    sfTexture *back;
    sfTexture *target;
    sfTexture *aim;
    sfTexture *dog;
    sfTexture *m_back;
    sfTexture *mplay;
    sfTexture *mquit;
    sfTexture *gun;
    sfTexture *moulin;
    sfSprite *sprite;
    sfSprite *sprite1;
    sfSprite *sprite2;
    sfSprite *sprite4;
    sfSprite *m_sback;
    sfSprite *msplay;
    sfSprite *msquit;
    sfSprite *sgun;
    sfSprite *smoulin;
    sfVector2f scale;
    sfVector2f scale1;
    sfVector2f scale2;
    sfVector2f scale3;
    sfVector2f gscale;
    sfVector2f pos;
    sfVector2f pos2;
    sfVector2f mposplay;
    sfVector2f mposquit;
    sfVector2f guninitp;
    sfVector2i mousepos;
    sfVector2f mouscale;
    sfVector2f moulpos;
    sfVector2f aaa;
    sfVector2f volpo;
    sfIntRect rect;
    sfMusic *music;
    sfVector2f oispos;
    sfMouseButtonEvent bevent;
    sfMouseMoveEvent mevent;
    sfSoundBuffer *sdbuff;
    sfSound *sd;
    sfText *textscore;
    sfFont *font;
    sfText *title;
    sfFont *ftitle;
    sfVector2f titlepo;
    sfTexture *boom;
    sfSprite *sboom;
    sfVector2f posbo;
    sfVector2f scbom;
    int score;
    int miss;
    int missp;
    int x;
    int y;
    float seconds;
    int kcount;
    float scd;
    int v;
    int vit;
}hunt;

typedef struct perso{
    int vie;
    sfRectangleShape *d_life;
    sfRectangleShape *d_exp;
    sfRectangleShape *d_arm;
    sfRectangleShape *life;
    sfRectangleShape *expr;
    sfRectangleShape *armor;
    int exp;
    int arm;
    int atq;
    int def;
}heros;

typedef struct hunter{
    sfVector2f map_size;
    sfView *view;
    sfVector2f center;
    sfEvent event;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f mur_pos;
    sfMusic *my_music;
    sfMouseButtonEvent mousevent;
    sfTexture *my_texture;
    sfVector2i bird_posi;
    sfSprite *my_sprite;
    sfTexture *st;
    sfSprite *sp;
    sfMusic *kill_sound;
    sfVector2f tree_pos;
    sfTexture *wt;
    sfSprite *wp;
    sfVector2f w_pos;
    sfTexture *ct;
    sfSprite *cp;
    sfVector2f c_pos;
    sfTexture *pt;
    sfSprite *pp;
    sfVector2f p_pos;
    sfVector2f house_pos;
    sfTexture *zs;
    sfSprite *sz;
    sfVector2f grass_pos;
    sfTexture *gp;
    sfSprite *pg;
    sfSprite *sf;
    sfTexture *tf;
    sfVector2f f_pos;
    sfSprite *spal;
    sfTexture *tpal;
    sfVector2f pal_pos;
    sfSprite *spalace;
    sfTexture *tpalace;
    sfVector2f palace_pos;
    sfSprite *sgrill;
    sfTexture *tgrill;
    sfVector2f grill_pos;
    sfSprite *strou;
    sfTexture *ttrou;
    sfVector2f trou_pos;
    sfSprite *spuit;
    sfTexture *tpuit;
    sfVector2f puit_pos;
    sfSprite *sbuson;
    sfTexture *tbuson;
    sfVector2f buson_pos;
    sfSprite *sevil;
    sfTexture *tevil;
    sfVector2f evil_pos;
    sfSprite *slotus;
    sfTexture *tlotus;
    sfVector2f lotus_pos;
    sfSprite *stoubiyon;
    sfTexture *ttoubiyon;
    sfVector2f toubiyon_pos;
    sfSprite *sfleur1;
    sfTexture *tfleur1;
    sfVector2f fleur1_pos;
    sfSprite *sfleur2;
    sfTexture *tfleur2;
    sfVector2f fleur2_pos;
    sfSprite *sfleur3;
    sfTexture *tfleur3;
    sfVector2f fleur3_pos;
    sfSprite *shouse2;
    sfTexture *thouse2;
    sfVector2f house2_pos;
    sfSprite *ar1sp;
    sfTexture *ar1tx;
    sfVector2f arscal;
    sfVector2f ar1pos;
    sfSprite *ar2sp;
    sfTexture *ar2tx;
    sfVector2f ar2pos;
    sfSprite *ar3sp;
    sfTexture *ar3tx;
    sfVector2f ar3pos;
    sfSprite *pm1s;
    sfTexture *pm1t;
    sfVector2f pm1scal;;
    sfVector2f pm1pos;
    sfSprite *pm2s;
    sfTexture *pm2t;
    sfVector2f pm2pos;
    sfSprite *jd1s;
    sfTexture *jd1t;
    sfVector2f jd1pos;
    sfVector2f jd1scal;
    sfSprite *v1s;
    sfTexture *v1t;
    sfVector2f v1pos;
    sfVector2f v1scal;
    sfSprite *v2s;
    sfTexture *v2t;
    sfVector2f v2pos;
    sfVector2f v2scal;
    sfSprite *v3s;
    sfTexture *v3t;
    sfVector2f v3pos;
    sfVector2f v3scal;
    sfSprite *fn1s;
    sfTexture *fn1t;
    sfVector2f fn1pos;
    sfVector2f fn1scal;
    sfSprite *fn2s;
    sfTexture *fn2t;
    sfVector2f fn2pos;
    sfVector2f fn2scal;
    sfSprite *fn3s;
    sfTexture *fn3t;
    sfVector2f fn3pos;
    sfVector2f fn3scal;
    sfSprite *fn4s;
    sfTexture *fn4t;
    sfVector2f fn4pos;
    sfVector2f fn4scal;
    sfSprite *cl1s;
    sfTexture *cl1t;
    sfVector2f cl1pos;
    sfSprite *s_ban;
    sfTexture *t_ban;
    sfVector2f banpos;
    sfVector2f cl1scal;
    sfFloatRect bounds1;
    sfFloatRect bounds2;
    sfFloatRect bounds22;
    sfFloatRect bounds23;
    sfFloatRect boundspm1;
    sfFloatRect boundspm2;
    sfFloatRect boundsjd1;
    sfFloatRect boundsv1;
    sfFloatRect boundsv2;
    sfFloatRect boundsv3;
    sfFloatRect boundsfn1;
    sfFloatRect boundsfn2;
    sfFloatRect boundsfn3;
    sfFloatRect boundsfn4;
    sfFloatRect boundscl1;
    bool m1;
    bool m2;
    bool m3;
    bool pm1;
    bool pm2;
    bool jd1;
    bool v1;
    bool v2;
    bool v3;
    bool fn1;
    bool fn2;
    bool fn3;
    bool fn4;
    bool cl1;
    sfSprite *rys;
    sfTexture *ryt;
    sfVector2f rypos;
    sfVector2f ryscal;
    sfSprite *pss;
    sfTexture *ptt;
    sfVector2f ponpos;
    sfVector2f ponscal;
    sfSprite *ws;
    sfTexture *wwt;
    sfVector2f wpos;
    sfVector2f wscal;
    sfFloatRect boundsry;
    sfFloatRect boundsw;
    sfFloatRect boundsp;
    bool ry;
    bool p;
    bool w;
    float x_change;
    float x;
    float y;
} killer;

typedef struct element_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
} element_t;

typedef struct {
    sfRenderWindow *window;
    sfVideoMode mode;
    sfTexture *textures[NUM_SPRITESS];
    sfSprite *sprites[NUM_SPRITESS];
    sfVector2f sprite_positions[NUM_SPRITESS];
    sfTexture *background_texture;
    sfSprite* background_sprite;
    int current_sprite;
    int enter_pressed;
    int restart_pressed;
    int num_sprites;
} Game1;

typedef struct {
    sfRenderWindow *window;
    sfVideoMode mode;
    sfTexture *textures[NUM_SPRITES];
    sfSprite *sprites[NUM_SPRITES];
    sfVector2f sprite_positions[NUM_SPRITES];
    sfTexture *background_texture;
    sfSprite* background_sprite;
    int current_sprite;
    int enter_pressed;
    int restart_pressed;
    int num_sprites;
} Game;

void window_sprite(killer *win, rpg *r);
void draw_pal(killer *win, char **map, rpg *r);
void draw_mur(killer *win, char **map, rpg *r);
void draw_water(killer *win, char **map, rpg *r);
void draw_tree(killer *win, char **map, rpg *r);
void draw_house(killer *win, char **map, rpg *r);
void draw_palace(killer *win, char **map, rpg *r);
void draw_pont(killer *win, char **map, rpg *r);
void draw_trou(killer *win, char **map, rpg *r);
void draw_puit(killer *win, char **map, rpg *r);
void draw_lotus(killer *win, char **map, rpg *r);
void draw_buson(killer *win, char **map, rpg *r);
void draw_evil(killer *win, char **map, rpg *r);
void draw_toubiyon(killer *win, char **map, rpg *r);
void draw_fleur1(killer *win, char **map, rpg *r);
void draw_fleur2(killer *win, char **map, rpg *r);
void draw_house2(killer *win, char **map, rpg *r);
void draw_map(killer *win, char **map, rpg *r);
void draw_element(killer *win, char element,
element_t *element_info, rpg *r);
void draw_grass(killer *win, char **map, rpg *r);
void draw_road(killer *win, char **map, rpg *r);
void draw_grill(killer *win, char **map, rpg *r);
void draw_fleur(killer *win, char **map, rpg *r);
void handle_key_escape(killer *win, rpg *r);
void handle_key_horizontal(killer *win, rpg *r);
void handle_key_vertical(killer *win, rpg *r);
void handle_key_zoomer(killer *win, rpg *r);
void set_view(killer *win, rpg *r);
static sfRenderWindow *create_window(unsigned int x, unsigned int y,
unsigned int bpp, char *title);
void close_window(killer *win, rpg *r, heros *h);
void destroyer(killer *win);
void free_tab(char **tab);
char **parsing_string(char *str, int max_size);
int nb_slash(char *str);
char *openfile(char *file_name);
void sprite_without_scale_1(killer *win);
void sprite_without_scale(killer *win);
void sprite_with_scale_1(killer *win);
void sprite_with_scale(killer *win);
void walk_init(rpg *r, heros *h);
void final_main(rpg *r);
int my_getnbr(char *str);
void my_putchar(char c);
int my_putstr(char const *str);
void video(rpg *r);
void event_rpg(rpg *r);
int play(rpg *r);
int my_put_nbr(int nb);
void init_ld(rpg *r);
void display_ld(rpg *r);
void destroy_ld(rpg *r);
void *load(rpg * r);
void *loading(rpg * r);
int ld_steps(rpg *r, int a);
void menu(rpg *r);
void init_sty(rpg *r);
void display_sty(rpg *r);
void destroy_sty(rpg *r);
void f_menu(rpg *r);
void chargement(rpg *r);
void handle_key_left(sfSprite* sprite);
void handle_key_right(sfSprite* sprite);
void handle_key_up(sfSprite* sprite);
void handle_key_down(sfSprite* sprite);
void process_keys(rpg *r, sfSprite* sprite, killer *win);
void process_events(rpg *r, sfSprite* sprite, heros *h, killer *win);
void render(rpg *r, sfSprite* sprite, heros *h);
void walk(rpg *r);
sfRectangleShape *dark_r(heros *h, sfVector2f scale,
sfVector2f pos, rpg *r);
sfRectangleShape *llife(heros *h);
void b_quitter(rpg *r);
void b_charger(rpg *r);
void b_jouer(rpg *r);
void b_options(rpg *r);
void menu_dis(rpg *r);
void select_m(rpg *r);
void menu_event(rpg *r);
int select_op(rpg *r, sfVector2i mou_pos);
void element(hunt *s);
void scale(hunt *s, rpg *r);
void rect(hunt *s);
void fly(hunt *s);
void reset(hunt *s, rpg *r);
void move_rect(sfIntRect *rect, int offest, int max_value);
void display(hunt *s, rpg *r);
void my_close(hunt *s, rpg *r);
int manage_mouse_kill(hunt *s, rpg *r);
void manage_mouse_move(hunt *s, rpg *r);
sfRectangleShape *lexp(heros *h);
sfRectangleShape *larm(heros *h);
void enter_event(rpg *r);
void update(heros *h, rpg *r);
void map_maker(rpg * r);
void menu_opt(rpg *r);
void play_music(rpg *r);
void evt_opt(rpg *r);
void rec_bigvol(rpg *r);
void rec_novol(rpg *r);
void rec_dvol(rpg *r);
void rec_upvol(rpg *r);
void rec_bk(rpg *r);
void dis_opt(rpg *r);
void destr_opt(rpg *r);
void rec_inv(rpg *r);
void evt_main(rpg *r, heros *h);
void destroy_hunt(rpg *r, hunt *s);
void evt_inv(rpg *r, heros *h);
void weap_evt2(rpg *r, heros *h);
void weap_evt1(rpg *r, heros *h);
void dis_combat(rpg *r);
void movemt(sfEvent event, sfIntRect rec);
void draw_text(sfRenderWindow* window, char *text, int x, int y);
void dessinercarre(sfRenderWindow *fenetre, int x, int y);
void dessinercarre_vie(sfRenderWindow *fenetre, int x, int y);
void display_image_king(sfRenderWindow *window,const char *image_file,
sfEvent event, rpg *r);
void display_image_2(sfRenderWindow *window,const char *image_file,
sfEvent event, rpg *r);
void display_image(sfRenderWindow *window, const char *image_file,
float x, float y);
void dessiner_grandcarre(sfRenderWindow *fenetre, int x, int y);
void move_function(sfIntRect *rect, int offset, int max_value,
sfEvent event);
void dessiner_grandcarre(sfRenderWindow *fenetre, int x, int y);
void help_rec(rpg *r);
void help_evt(rpg *r);
void petit_setarbre1(killer *win);
void petit_setarbre2(killer *win);
void petit_setarbre3(killer *win);
void petit_setarbre4(killer *win);
void petit_setarbre5(killer *win);
void petit_setarbre6(killer *win);
void setarbre1(killer *win);
void for_collision(killer *win, sfSprite* sprite,  rpg *r);
void initialise_bool(killer *win, rpg *r);
void initialise_bound(killer *win, rpg *r);
void setarbre8(killer *win);
void petit_setarbre7(killer *win);
int my_strlen(char *str);
char *my_strcat(char *dest, char const *src);
void reverse(char *str);
void my_conversion(int num, char *str);
void initialize_game(Game1 *game);
void process_input(Game1 *game);
void update_display(Game1 *game, rpg *r);
void init_game(Game1 *game);
void envt_loop(Game1 *game, rpg *r);
void clen_conv(Game1 *game);
void initialize_window(Game1 *game);
void conv2(rpg *r);
void initialize_game1(Game *game);
void process_input1(Game *game);
void update_display1(Game *game);
void init_game1(Game *game);
void envt_loop1(Game* game);
void clen_conv1(Game* game);
void initialize_window1(Game *game);
void conv1(void);
void life_h(rpg *r);
void destroyer2(killer *win);
void destroyer3(killer *win);
void destroyer(killer *win);
#endif //MY_LIB
