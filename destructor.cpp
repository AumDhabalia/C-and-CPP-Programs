#include "destructor.hpp"
int count = 0;
alpha::alpha()
{
    count++;
    cout << "Object number " << count << " created" << endl;
}

alpha::~alpha()
{
    cout << "Object number " << count << " destroyed" << endl;
    count --;
}