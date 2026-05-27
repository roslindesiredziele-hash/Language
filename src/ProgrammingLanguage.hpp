#pragma once
#include "Language.hpp"
#include <vector>

class ProgrammingLanguage : public Language
{
private:
	int version = 1;
protected:
	std::vector<std::string> features;
public:
	virtual ~ProgrammingLanguage() = default;

	int getVersion() const
	{
		return version;
	}

	const std::vector<std::string>& getFeatures() const
	{
		return features;
	}

	void evolve() override
	{
		version++;
		features.push_back("New feature");
	}
};