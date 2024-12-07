// lexer.h

#pragma once
#ifndef LEXER_H
#define LEXER_H
#include <string>
#include <unordered_map>

namespace AwaraLang {

    enum class TokensType {

        TOKEN_FUNC,

        TOKEN_PRINT,
        TOKEN_FLOAT,
        TOKEN_IF,
        TOKEN_ELSE,
        TOKEN_WHILE,
        TOKEN_STRING,
        TOKEN_BOOL,
        TOKEN_BREAK,
        TOKEN_CONTINUE,
        TOKEN_RETURN,
        TOKEN_AND,
        TOKEN_OR,
        TOKEN_NOT,
        TOKEN_VAR,
        TOKEN_INT,
        TOKEN_CONST,
        TOKEN_FOR,
        TOKEN_TRUE,
        TOKEN_FALSE,
    };

    const std::unordered_map<std::string, TokensType> KEYWORDS = {

        {"chhapdo", TokensType::TOKEN_PRINT},
        {"udta", TokensType::TOKEN_FLOAT},
        {"agar", TokensType::TOKEN_IF},
        {"varna", TokensType::TOKEN_ELSE},
        {"jbtk", TokensType::TOKEN_WHILE},
        {"shabd", TokensType::TOKEN_STRING},
        {"ha_na", TokensType::TOKEN_BOOL},
        {"rukjana-bhai", TokensType::TOKEN_BREAK},
        {"jari-rkho", TokensType::TOKEN_CONTINUE},
        {"wapas-krdo", TokensType::TOKEN_RETURN},
        {"aur", TokensType::TOKEN_AND},
        {"ya", TokensType::TOKEN_OR},
        {"nhi", TokensType::TOKEN_NOT},
        {"dabba", TokensType::TOKEN_VAR},
        {"sankhya", TokensType::TOKEN_INT},
        {"adig", TokensType::TOKEN_CONST},
        {"baar-baar", TokensType::TOKEN_FOR},
        {"shi!", TokensType::TOKEN_TRUE},
        {"glt!", TokensType::TOKEN_FALSE},
        {"kriya", TokensType::TOKEN_FUNC},
    };


}

#endif // LEXER_H