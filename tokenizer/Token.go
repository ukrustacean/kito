package tokenizer

type TokenKind int

const (
	LET         TokenKind = iota
	IF          TokenKind = iota
	ELSE        TokenKind = iota
	EQUALS      TokenKind = iota
	COLON       TokenKind = iota
	SEMICOLON   TokenKind = iota
	PLUS        TokenKind = iota
	MINUS       TokenKind = iota
	STAR        TokenKind = iota
	SLASH       TokenKind = iota
	BANG        TokenKind = iota
	IDENT       TokenKind = iota
	STRING      TokenKind = iota
	NUMBER      TokenKind = iota
	OPEN_BRACE  TokenKind = iota
	CLOSE_BRACE TokenKind = iota
	OPEN_CURLY  TokenKind = iota
	CLOSE_CURLY TokenKind = iota
	OPEN_PAREN  TokenKind = iota
	CLOSE_PAREN TokenKind = iota
)
