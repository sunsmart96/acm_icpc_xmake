#pragma once
#include "data.h"

class AbstractAlgo{
public:
    virtual ~AbstractAlgo() {};
    virtual void print() const = 0;
    virtual void run(const AbstractData& data) = 0;
}