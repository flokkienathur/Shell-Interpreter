#ifndef TOKEN_H
#define TOKEN_H

#include <string>

class Token
{
public:
  enum TokenType{
    LITERAL, PIPE, INPUT, OUTPUT, APPEND, WHITESPACE,
  };

private:
  int charIndex;
  int line;

  TokenType type;
  std::string data;

public:
  Token(TokenType type, int line, int charIndex, std::string data);
  ~Token();

  inline TokenType getType(){
    return type;
  }

  friend std::ostream& operator<<(std::ostream&, const Token&);
  friend std::ostream& operator<<(std::ostream&, const TokenType&);

};


#endif