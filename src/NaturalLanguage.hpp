#pragma once
#include "Language.hpp"
#include <vector>
#include <string>

class NaturalLanguage : public Language
{
private:
	int vocabularySize = 0;
protected:
	std::vector<std::string> slangTerms;
	std::vector<std::string> vocabulary;
public:
    virtual ~NaturalLanguage() = default;

	void evolve() override
	{
		vocabularySize++;
		slangTerms.push_back("New slang term");
		vocabulary.push_back("New_word");
	}

	int getVocabularySize() const
	{
		return vocabularySize;
	}

	const std::vector<std::string>& getSlangTerms() const
	{
		return slangTerms;
	}

	const std::vector<std::string>& getVocabulary() const
	{
		return vocabulary;
	}

	void addWord(const std::string& word)
	{
		vocabulary.push_back(word);
		vocabularySize++;
	}

	void addSlangTerm(const std::string& slang)
	{
		slangTerms.push_back(slang);
	}


};

