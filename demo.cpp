// Copyright 2017. All Rights Reserved.
// Author: Wang Shijun
//
// 词表解析类 demo
//

#include <iostream>
#include <string>
#include "src/naive_vocabulary_parser.h"

int main() {
    naive_vocabulary_parser::NaiveVocabularyParser parser;
    std::string file {"./data/pure_string.txt"};

//    std::cout << "parser.has_next_line() " << parser.has_next_line() << std::endl;

    if (!parser.parse_all(file)) {
        std::cout << "PARSING FILE " << file << " WITH NaiveVocabularyParser FAILED." << std::endl;
        return -1;
    }

    std::cout << "PARSING FILE " << file << " WITH NaiveVocabularyParser SUCCEEDED." << std::endl;
    return 0;
}