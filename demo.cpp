// Copyright 2017. All Rights Reserved.
// Author: Wang Shijun
//
// 词表解析类 demo
//

#include <iostream>
#include <string>
#include "naive_vocabulary_parser.h"

int main() {
    naive_vocabulary_parser::NaiveVocabularyParser parser;
    std::string file {"./data/pure_string.txt"};

    if (!parser.parse(file)) {
        std::cout << "PARSING FILE " << file << " WITH NaiveVocabularyParser FAILED." << std::endl;
        return -1;
    }

    std::cout << "PARSING FILE " << file << " WITH NaiveVocabularyParser SUCCEEDED." << std::endl;
    return 0;
}