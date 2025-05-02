#pragma once

class AbstractData {
public:
    virtual ~AbstractData() {}
    virtual void print() const = 0;

};