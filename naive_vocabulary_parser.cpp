// Copyright 2017. All Rights Reserved.
// Author: Wang Shijun
//
// 一个通用的词表解析读取工具类，解析并读取如下形式的词表:
// <col1>\t<col2>\t...\t<coln>
// 每一行都是一条记录，每一列可能的类型包括:
// * int
// * float
// * char *
// * 形如num:item1,item2,item3的数组（可以理解为T[num]的数组，T是用户给出某种build-in类型）
// * 其他用户自定义类型(灵活支持多种自定义类型)
// 每一列的数据中均不包含\t字符，每一行以\n结尾。
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "naive_vocabulary_parser.h"

namespace naive_vocabulary_parser {

bool NaiveVocabularyParser::parse_all(const std::string& file_name) {
    open_file(file_name);

    // process line by line
    while (has_next_line()) {
        parse_next_line();
    }
    return true;
}

bool NaiveVocabularyParser::open_file(const std::string& file_name){
    std::cout << "PARSING FILE: " << file_name << std::endl;
    _infile.open(file_name);
    if (!_infile.is_open()) {
        std::cout << "FAIL TO OPEN THE FILE, EXIT." << std::endl;
        return false;
    }
    return true;
}

bool NaiveVocabularyParser::parse_next_line() {
    std::string line;
    std::getline(_infile, line);
    std::cout << "LINE: " << line << std::endl;
    std::istringstream iss(line);
    std::string word;
    std::vector<std::string> words_in_line;

    // split by '\t'
    while (std::getline(iss, word, '\t')) {
        std::cout << "WORD IN THE LINE: " << word << std::endl;
        words_in_line.push_back(word);
    }

    // further process of words_in_line
    return true;
}

bool NaiveVocabularyParser::has_next_line() {
    return _infile.peek() != EOF;
}

}  // namespace naive_vocabulary_parser