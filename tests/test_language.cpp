#define CATCH_CONFIG_MAIN
#include "../external/catch.hpp"
#include "../src/Language.hpp"
#include "../src/NaturalLanguage.hpp"
#include "../src/ProgrammingLanguage.hpp"
#include "../src/EnglishLanguage.hpp"
#include "../src/CppLanguage.hpp"
#include "../src/FrenchLanguage.hpp"
#include "../src/PythonLanguage.hpp"
#include <iostream>

TEST_CASE("CppLanguage has a name")
{
    CppLanguage cpp;
    REQUIRE(cpp.name() == "C++");
}

TEST_CASE("CppLanguage has a file extension")
{
    CppLanguage cpp;
    REQUIRE(cpp.fileExtension() == ".cpp");
}

TEST_CASE("CppLanguage has a compiler command")
{
    CppLanguage cpp;
    REQUIRE(cpp.compilerCommand() == "g++");
}

TEST_CASE("CppLanguage is a compiled language")
{
    CppLanguage cpp;
    REQUIRE(cpp.isCompiled() == true);
}

TEST_CASE("CppLanguage is not an interpreted language")
{
    CppLanguage cpp;
    REQUIRE(cpp.isInterpreted() == false);
}

TEST_CASE("CppLanguage has a comment syntax")
{
    CppLanguage cpp;
REQUIRE(cpp.commentSyntax() == "//");
}

TEST_CASE("CppLanguage has a multi-line comment syntax")
{
	CppLanguage cpp;
    REQUIRE(cpp.multiLineCommentSyntax() == "/* */");
}

TEST_CASE("CppLanguage has a namespace keyword")
{
    CppLanguage cpp;
    REQUIRE(cpp.namespaceKeyword() == "namespace");
}

TEST_CASE("ProgrammingLanguage evolves by increasing version and adding a feature")
{
    CppLanguage cpp;

    REQUIRE(cpp.getVersion() == 1);
    REQUIRE(cpp.getFeatures().empty());

    cpp.evolve();

    REQUIRE(cpp.getVersion() == 2);
    REQUIRE(cpp.getFeatures().size() == 1);
}

TEST_CASE("EnglishLanguage evolves with English-specific slang")
{
    English english;

    REQUIRE(english.getVocabularySize() == 0);
    REQUIRE(english.getSlangTerms().empty());

    english.evolve();

    REQUIRE(english.getVocabularySize() == 1);
    REQUIRE(english.getSlangTerms().size() == 1);

    REQUIRE(english.getSlangTerms()[0] == "Yep");
}

TEST_CASE("FrenchLanguage evolves with French-specific slang")
{
    FrenchLanguage french;

    REQUIRE(french.getVocabularySize() == 0);
    REQUIRE(french.getSlangTerms().empty());

    french.evolve();

    REQUIRE(french.getVocabularySize() == 1);
    REQUIRE(french.getSlangTerms().size() == 1);

    REQUIRE(french.getSlangTerms()[0] == "chelou");
}

TEST_CASE("CppLanguage evolves with C++-specific features")
{
    CppLanguage cpp;

    REQUIRE(cpp.getVersion() == 1);
    REQUIRE(cpp.getFeatures().empty());

    cpp.evolve();

    REQUIRE(cpp.getVersion() == 2);
    REQUIRE(cpp.getFeatures().size() == 1);

    REQUIRE(cpp.getFeatures()[0] == "C++23 modules");
}

TEST_CASE("PythonLanguage evolves with Python-specific features")
{
    PythonLanguage py;

    REQUIRE(py.getVersion() == 1);
    REQUIRE(py.getFeatures().empty());

    py.evolve();

    REQUIRE(py.getVersion() == 2);
    REQUIRE(py.getFeatures().size() == 1);

    REQUIRE(py.getFeatures()[0] == "Python 3.12");
}

TEST_CASE("NaturalLanguage evolve adds a new word to vocabulary")
{
    NaturalLanguage lang;

    REQUIRE(lang.getVocabulary().empty());
    REQUIRE(lang.getVocabularySize() == 0);

    lang.evolve();

    REQUIRE(lang.getVocabularySize() == 1);
    REQUIRE(lang.getVocabulary().size() == 1);
    REQUIRE(lang.getVocabulary()[0] == "New_word");
}

TEST_CASE("NaturalLanguage addWord adds a word to the vocabulary")
{
    NaturalLanguage lang;

    REQUIRE(lang.getVocabulary().empty());
    REQUIRE(lang.getVocabularySize() == 0);

    lang.addWord("hello");

    REQUIRE(lang.getVocabularySize() == 1);
    REQUIRE(lang.getVocabulary().size() == 1);
    REQUIRE(lang.getVocabulary()[0] == "hello");
}

TEST_CASE("English and French inherit addWord and can add any word")
{
    English eng;
    FrenchLanguage fr;

    REQUIRE(eng.getVocabulary().empty());
    REQUIRE(eng.getVocabularySize() == 0);

    REQUIRE(fr.getVocabulary().empty());
    REQUIRE(fr.getVocabularySize() == 0);

    eng.addWord("amazing");
    fr.addWord("remarquable");

    REQUIRE(eng.getVocabularySize() == 1);
    REQUIRE(eng.getVocabulary()[0] == "amazing");

    REQUIRE(fr.getVocabularySize() == 1);
    REQUIRE(fr.getVocabulary()[0] == "remarquable");

    English english;
    FrenchLanguage french;
    english.addSlangTerm("wow");
    english.addWord("worth");
    french.addSlangTerm("tana");
    french.addWord("magnifique");
    std::cout << "English slang: " << english.getSlangTerms()[0] << ",\t Vocabulary: " << english.getVocabulary()[0] << std::endl;
    std::cout << "French slang: " << french.getSlangTerms()[0] << ",\t Vocabulary: " << french.getVocabulary()[0] << std::endl;
}

TEST_CASE("NaturalLanguage addSlangTerm adds slang to the slangTerms list")
{
    NaturalLanguage lang;

    REQUIRE(lang.getSlangTerms().empty());

    lang.addSlangTerm("typeshit");
    REQUIRE(lang.getSlangTerms().size() == 1);
    REQUIRE(lang.getSlangTerms()[0] == "typeshit");

    lang.addSlangTerm("doro");
    REQUIRE(lang.getSlangTerms().size() == 2);
    REQUIRE(lang.getSlangTerms()[1] == "doro");
}
