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

#ifndef CPP_GOOD_CODER_NAIVE_VOCABULARY_PARSER_H
#define CPP_GOOD_CODER_NAIVE_VOCABULARY_PARSER_H

#include <fstream>
#include <string>
#include "nvp_common.h"

namespace naive_vocabulary_parser {

class NaiveVocabularyParser {
public:
    NaiveVocabularyParser() {}
    ~NaiveVocabularyParser() {
        _infile.close();
    }
    bool parse_all(const std::string& file_name);
    bool open_file(const std::string& file_name);
    bool parse_next_line();
    bool has_next_line();
private:
    std::ifstream _infile;
    DISALLOW_COPY_AND_ASSIGN(NaiveVocabularyParser);
};

}  // namespace naive_vocabulary_parser

#endif //CPP_GOOD_CODER_NAIVE_VOCABULARY_PARSER_H
