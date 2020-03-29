
#ifndef S4TP2_SOMMET_H
#define S4TP2_SOMMET_H

#include <iostream>
#include <vector>

class Sommet {
private:
    int m_numero;
    std::vector<const Sommet*> m_successeurs;
public:
    Sommet(int num);
    int getNumero() const;
    void addSuccesseur(const Sommet* succ);
    const std::vector<const Sommet*>& getSuccesseur() const ;
    void afficher() const;

};



#endif //S4TP2_SOMMET_H
