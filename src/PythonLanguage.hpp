#pragma once
#include "ProgrammingLanguage.hpp"
#include <string>

class PythonLanguage : public ProgrammingLanguage {
public:
	void evolve() override
	{
		ProgrammingLanguage::evolve();
		features.back() = "Python 3.12";
	}
};