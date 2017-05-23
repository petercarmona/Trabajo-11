#include <iostream>
#include "Human.h"
#include "Orc.h"

using namespace std;

int main()
{
    Humanoid *arr[3];

    Humanoid a;
    Human b;
    Orc c;

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    arr[0]->Shout();
    arr[1]->Shout();
    arr[2]->Shout();
    return 0;
}
