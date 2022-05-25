#ifndef PIECE_H
#define PIECE_H
#include <iostream>
using namespace std;
#include<string.h>
#include<map>

class piece
{
    public:
        int positionligne,positioncolonne ;
        map<int,int> couppossible ;
        bool couleur ;
        bool etatinitiale;
        piece();
        virtual ~piece();
        int getpositionligne();
        int getpositioncolonne();
        void setpositionligne(int );
        void setpositioncolonne(int);
        bool peutattaquer();
        void attaquer();
        void modifierpos();
        piece operator =(piece);

    protected:

    private:
};

#endif // PIECE_H
