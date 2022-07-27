#pragma once
#include "PlacableActor.h"
class Piston :
    public PlacableActor
{
public:
    Piston(int x, int y);
    virtual ActorType GetType() override { return ActorType::Piston; }
    virtual void Draw() override;
};

