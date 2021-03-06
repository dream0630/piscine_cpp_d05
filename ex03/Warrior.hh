#ifndef WARRIOR_H_
#define WARRIOR_H_

#include <string>
#include "Character.hh"

class Warrior : public virtual Character
{
public:
    explicit Warrior(std::string const& name, int level);
    virtual ~Warrior() {}

    int CloseAttack();
    int RangeAttack();
protected:
    std::string const _weapon;
};

#endif
