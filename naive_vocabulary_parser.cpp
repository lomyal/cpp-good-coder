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
#include <string>
#include "naive_vocabulary_parser.h"

namespace naive_vocabulary_parser {

void NaiveVocabularyParser::parse(const std::string& file_name) const {
    std::cout << "TEST_FILE: " << file_name << std::endl;
}

}  // namespace naive_vocabulary_parser