#include "grman/grman.h"
#include"Menu.h"
#define LARGEURECRAN 800
#define HAUTEURECRAN 600


int progmenu ()
{
BITMAP* Buffer=create_bitmap(LARGEURECRAN,HAUTEURECRAN); /// Déclaration de la bitmap d'affichage
BITMAP* Menu=load_bitmap("Menu.bmp",NULL);
BITMAP* Creer=load_bitmap("Creer.bmp",NULL);
BITMAP* Charger=load_bitmap("Charger.bmp",NULL);
BITMAP* Quitter=load_bitmap("Quitter.bmp",NULL);
int c=0;
while (c==0)
{
   if (mouse_x>55 && mouse_x<327 && mouse_y>81 && mouse_y<135)
   {
       blit (Creer,Buffer,0,0,0,0,LARGEURECRAN,HAUTEURECRAN);
       if(mouse_b==1)
       {
           c=1;
       }
   }
   if (mouse_x>95 && mouse_x<273 && mouse_y>234 && mouse_y<285)
   {
       blit (Charger,Buffer,0,0,0,0,LARGEURECRAN,HAUTEURECRAN);
       if(mouse_b==1)
       {
           c=2;
       }
   }
   if (mouse_x>120 && mouse_x<262 && mouse_y>377 && mouse_y<466)
   {
       blit (Quitter,Buffer,0,0,0,0,LARGEURECRAN,HAUTEURECRAN);
       if(mouse_b==1)
       {
        c=3;
        allegro_exit();
        exit(EXIT_FAILURE);
       }
   }
   blit(Buffer,screen,0,0,0,0,LARGEURECRAN,HAUTEURECRAN);
   blit(Menu,Buffer,0,0,0,0,LARGEURECRAN,HAUTEURECRAN);

}
return c;

}
