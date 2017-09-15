// Copyright 2017. All Rights Reserved.
// Author: Wang Shijun
//
// 词表解析类 demo
//

#include <string>
#include "naive_vocabulary_parser.h"

int main() {
    naive_vocabulary_parser::NaiveVocabularyParser parser;
    std::string file {"./data/pure_string.txt"};
    parser.parse(file);
}