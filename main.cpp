#include <iostream>
#include "Graphe.h"
#include "Sommet.h"

void afficherParcours(size_t s0, const std::vector<int>& predecesseur){
    for (size_t i=0; i < predecesseur.size(); i++ ){
        if(i != s0){
            if(predecesseur[i] != -1){ //-1 pas accessible depuis s0
                std::cout << i << " <---- ";
                size_t j = predecesseur[i];
                while(j != s0){
                    std::cout << j << " <---- ";
                    j = predecesseur[j];
                }
                std::cout << j << std::endl;
            }
        }
    }
}


int main() {
    size_t s0 = 0;
    Graphe g{"../txt_graphe.txt"};
    std::vector<int> arborescence;
    g.afficher();

    int nbMenu;
    std::cout << "Veuillez choisir le parcours : \n1 - BFS\n2 - DFS\n\nChoix :  ";
    std::cin >> nbMenu;

    switch (nbMenu) {
        case 1 :
            std::cout << "\nBFS: Veuillez saisir le numero du sommet initial pour la recherche du plus court chemin : ";
            std::cin >> s0;
            arborescence = g.BFS(s0);
            std::cout << "Parcours BFS a partir du sommet " << s0 << " : \n" << std::endl;
            afficherParcours(s0, arborescence);
            break;

        case 2 :
            std::cout << "\nDFS: Veuillez saisir le numero du sommet initial pour la recherche du plus court chemin : ";
            std::cin >> s0;
            arborescence = g.DFS(s0);
            std::cout << "Parcours DFS a partir du sommet " << s0 << " : \n" << std::endl;
            afficherParcours(s0, arborescence);
            break;

        default:
            std::cout << "/!\\ Choix du Menu non valide /!\\";
            break;
    }





    return 0;
}
