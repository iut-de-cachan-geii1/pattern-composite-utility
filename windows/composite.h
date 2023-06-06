//  Copyright (c) 2023 Antoine Tran Tan
//

#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <vector>
#include <string>

class Composite
{
public:
    virtual void operation() = 0;
    virtual void add(Composite *elt) = 0;
    virtual void remove(Composite *elt) = 0;
    virtual Composite *get_child(int index) = 0;

private:
};

class Plat : public Composite
{
public:
    Plat(std::string name, std::string description, int prix);

    void operation() override;
    void add(Composite *elt) override;
    void remove(Composite *elt) override;
    Composite *get_child(int index) override;

private:
    /* data */
    std::string name;
    std::string description;
    int prix;
};

#endif
