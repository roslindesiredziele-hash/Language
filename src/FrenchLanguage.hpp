#pragma once
#include "NaturalLanguage.hpp"

class FrenchLanguage : public NaturalLanguage
{
public:
    virtual ~FrenchLanguage() = default;

    void evolve() override
    {
        NaturalLanguage::evolve();
        slangTerms.back() = "chelou";
    }
};
