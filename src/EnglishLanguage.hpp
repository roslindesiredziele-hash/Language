#pragma once
#include "NaturalLanguage.hpp"

class English : public NaturalLanguage
{
public:
	virtual ~English() = default;

    void evolve() override 
    {
		NaturalLanguage::evolve();
		slangTerms.back() = "Yep";
    }
};
