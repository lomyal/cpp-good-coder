// Copyright 2017. All Rights Reserved.
// Author: Wang Shijun
//

#include <gtest/gtest.h>
#include "../src/naive_vocabulary_parser.h"


TEST(NaiveVocabularyParserTest, ExistingFile) {
    naive_vocabulary_parser::NaiveVocabularyParser parser;
    std::string file {"./data/pure_string.txt"};
    EXPECT_TRUE(parser.parse_all(file));
}

TEST(NaiveVocabularyParserTest, NonExistingFile) {
    naive_vocabulary_parser::NaiveVocabularyParser parser;
    std::string file {"./data/WRONG_FILE_NAME.txt"};
    EXPECT_FALSE(parser.parse_all(file));
}
