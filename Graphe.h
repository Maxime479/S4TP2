
#ifndef S4TP2_GRAPHE_H
#define S4TP2_GRAPHE_H

#include <iostream>
#include "Sommet.h"

class Graphe {

private:
    bool m_estOriente;
    std::vector< Sommet*> m_sommets;

public:
    Graphe(std:: string cheminFichierGraphe);
    ~Graphe();
    void afficher() const;
    std::vector<int> BFS(int numero_S0) const;
    std::vector<int> DFS(int numero_S0) const;

};





#endif //S4TP2_GRAPHE_H
