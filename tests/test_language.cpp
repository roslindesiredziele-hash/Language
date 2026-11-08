#define CATCH_CONFIG_MAIN

#include "../external/catch.hpp"

#include "../src/Language.hpp"
#include "../src/NaturalLanguage.hpp"
#include "../src/ProgrammingLanguage.hpp"
#include "../src/EnglishLanguage.hpp"
#include "../src/CppLanguage.hpp"
#include "../src/FrenchLanguage.hpp"
#include "../src/PythonLanguage.hpp"

TEST_CASE("CppLanguage properties")
{
    CppLanguage cpp;

    CHECK(cpp.name() == "C++");
    CHECK(cpp.fileExtension() == ".cpp");
    CHECK(cpp.compilerCommand() == "g++");

    CHECK(cpp.isCompiled());
    CHECK_FALSE(cpp.isInterpreted());

    CHECK(cpp.commentSyntax() == "//");
    CHECK(cpp.multiLineCommentSyntax() == "/* */");
    CHECK(cpp.namespaceKeyword() == "namespace");
}

TEST_CASE("CppLanguage evolves correctly")
{
    CppLanguage cpp;

    REQUIRE(cpp.getVersion() == 1);
    REQUIRE(cpp.getFeatures().empty());

    cpp.evolve();

    CHECK(cpp.getVersion() == 2);

    REQUIRE(cpp.getFeatures().size() == 1);
    CHECK(cpp.getFeatures()[0] == "C++23 modules");
}

TEST_CASE("CppLanguage supports multiple evolutions")
{
    CppLanguage cpp;

    cpp.evolve();
    cpp.evolve();
    cpp.evolve();

    CHECK(cpp.getVersion() == 4);

    REQUIRE(cpp.getFeatures().size() == 3);

    CHECK(cpp.getFeatures()[0] == "C++23 modules");
    CHECK(cpp.getFeatures()[1] == "C++23 modules");
    CHECK(cpp.getFeatures()[2] == "C++23 modules");
}

TEST_CASE("PythonLanguage evolves correctly")
{
    PythonLanguage py;

    REQUIRE(py.getVersion() == 1);
    REQUIRE(py.getFeatures().empty());

    py.evolve();

    CHECK(py.getVersion() == 2);

    REQUIRE(py.getFeatures().size() == 1);
    CHECK(py.getFeatures()[0] == "Python 3.12");
}

TEST_CASE("NaturalLanguage starts empty")
{
    NaturalLanguage lang;

    CHECK(lang.getVocabularySize() == 0);
    CHECK(lang.getVocabulary().empty());
    CHECK(lang.getSlangTerms().empty());
}

TEST_CASE("NaturalLanguage evolve adds vocabulary and slang")
{
    NaturalLanguage lang;

    lang.evolve();

    CHECK(lang.getVocabularySize() == 1);

    REQUIRE(lang.getVocabulary().size() == 1);
    CHECK(lang.getVocabulary()[0] == "New_word");

    REQUIRE(lang.getSlangTerms().size() == 1);
    CHECK(lang.getSlangTerms()[0] == "New slang term");
}

TEST_CASE("NaturalLanguage addWord")
{
    NaturalLanguage lang;

    lang.addWord("hello");

    CHECK(lang.getVocabularySize() == 1);

    REQUIRE(lang.getVocabulary().size() == 1);
    CHECK(lang.getVocabulary()[0] == "hello");
}

TEST_CASE("NaturalLanguage addSlangTerm")
{
    NaturalLanguage lang;

    lang.addSlangTerm("typeshit");
    lang.addSlangTerm("doro");

    REQUIRE(lang.getSlangTerms().size() == 2);

    CHECK(lang.getSlangTerms()[0] == "typeshit");
    CHECK(lang.getSlangTerms()[1] == "doro");
}

TEST_CASE("English and French language behavior")
{
    English english;
    FrenchLanguage french;

    english.evolve();
    french.evolve();

    REQUIRE(english.getSlangTerms().size() == 1);
    CHECK(english.getSlangTerms()[0] == "Yep");

    REQUIRE(english.getVocabulary().size() == 1);
    CHECK(english.getVocabulary()[0] == "New_word");

    CHECK(english.getVocabularySize() == 1);

    REQUIRE(french.getSlangTerms().size() == 1);
    CHECK(french.getSlangTerms()[0] == "chelou");

    REQUIRE(french.getVocabulary().size() == 1);
    CHECK(french.getVocabulary()[0] == "New_word");

    CHECK(french.getVocabularySize() == 1);

    english.addWord("amazing");
    french.addWord("remarquable");

    CHECK(english.getVocabularySize() == 2);
    CHECK(french.getVocabularySize() == 2);

    REQUIRE(english.getVocabulary().size() == 2);
    CHECK(english.getVocabulary()[1] == "amazing");

    REQUIRE(french.getVocabulary().size() == 2);
    CHECK(french.getVocabulary()[1] == "remarquable");
}

TEST_CASE("Language polymorphism works")
{
    CppLanguage cpp;
    English english;

    Language* lang1 = &cpp;
    Language* lang2 = &english;

    REQUIRE(lang1 != nullptr);
    REQUIRE(lang2 != nullptr);

    lang1->evolve();
    lang2->evolve();

    CHECK(cpp.getVersion() == 2);
    CHECK(english.getVocabularySize() == 1);

    REQUIRE(cpp.getFeatures().size() == 1);
    CHECK(cpp.getFeatures()[0] == "C++23 modules");

    REQUIRE(english.getSlangTerms().size() == 1);
    CHECK(english.getSlangTerms()[0] == "Yep");
}