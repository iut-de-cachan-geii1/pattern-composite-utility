//  Copyright (c) 2023 Antoine Tran Tan
//

#ifndef COMPONENT_H
#define COMPONENT_H

#include <vector>
#include <string>

class Component
{
public:
    virtual void operation() = 0;
    virtual void add(Component *elt) = 0;
    virtual void remove(Component *elt) = 0;
    virtual Component *get_child(int index) = 0;

private:
};

class Plat : public Component
{
public:
    Plat(std::string name, std::string description, int prix);

    void operation() override;
    void add(Component *elt) override;
    void remove(Component *elt) override;
    Component *get_child(int index) override;

private:
    /* data */
    std::string name;
    std::string description;
    int prix;
};

#endif
