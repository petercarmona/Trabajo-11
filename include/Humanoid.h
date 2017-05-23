#ifndef HUMANOID_H
#define HUMANOID_H

#include <iostream>

using namespace std;

class Humanoid
{
    public:
        float health;
        float mana;

        Humanoid();
        virtual void Shout();
};

#endif // HUMANOID_H
