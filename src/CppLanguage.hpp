#pragma once
#include "ProgrammingLanguage.hpp"
#include <string>

class CppLanguage : public ProgrammingLanguage {
public:
	void evolve() override 
	{
		ProgrammingLanguage::evolve();
		features.back() = "C++23 modules";
	}

    std::string name() const
    {
        return "C++";
    }

	std::string fileExtension() const
	{
		return ".cpp";
	}

	std::string compilerCommand() const
	{
		return "g++";
	}

	bool isCompiled()
	{
		return true;
	}

	bool isInterpreted()
	{
		return false;
	}

	std::string commentSyntax() 
	{
		return "//";
	}

	std::string multiLineCommentSyntax()
	{
		return "/* */";
	}

	std::string namespaceKeyword()
	{
		return "namespace";
	}

};
