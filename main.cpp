#include "grman/grman.h"
#include <iostream>
#include"Menu.h"
#include "graph.h"



int main()
{


    /// A appeler en 1er avant d'instancier des objets graphiques etc...
    grman::init();

    /// Le nom du répertoire où se trouvent les images à charger
    grman::set_pictures_path("pics");

    /// Un exemple de graphe
    Graph g;
    g.make_example();


    /// Vous gardez la main sur la "boucle de jeu"
    /// ( contrairement à des frameworks plus avancés )

int compteur=0;

    while ( !key[KEY_ESC] )
    {
        if (compteur==0)
        {
            if (progmenu()==1){}
            if (progmenu()==2){}
            compteur=1;
        }

        /// Il faut appeler les méthodes d'update des objets qui comportent des widgets
        g.update();

        /// Mise à jour générale (clavier/souris/buffer etc...)
        grman::mettre_a_jour();
    }

    grman::fermer_allegro();

    return 0;
}
END_OF_MAIN();


