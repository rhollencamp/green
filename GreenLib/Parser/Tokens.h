#pragma once

namespace Green
{
	enum Token
	{
		KEYWORD_PACKAGE = 1,
		KEYWORD_IMPORT,
		KEYWORD_CLASS,
		KEYWORD_PUBLIC,
		KEYWORD_PRIVATE,
		KEYWORD_FUNCTION,
		KEYWORD_STATIC,
		KEYWORD_VAR,
		KEYWORD_ECHO,

		IDENTIFIER,
		VARIABLE,
		CONSTANT_INT,

		SYM_SEMICOLON,
		SYM_CURLY_OPEN,
		SYM_CURLY_CLOSE,
		SYM_PAREN_OPEN,
		SYM_PAREN_CLOSE,
		SYM_ASSIGNMENT,
		SYM_PLUS,
		SYM_MINUS,
		SYM_MULTIPLY,
		SYM_DIVIDE,
		SYM_COMMA,
		SYM_PERIOD,
		SYM_SCOPE_RESOLUTION
	};


	int getTokenPrecedence(const Token tok);
	bool isTokenOperator(const Token tok);
}
