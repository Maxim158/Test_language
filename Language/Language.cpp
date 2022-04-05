#include <vector>

#include "lexer.h"
#include "Parser.h"

int main()
{
    std::string Programm =
        "var x = 5; \n"
        "var y = 10; \n"
        "var z = 'String'; \n"
        "if (x > y) { \n"
        "   print(x - y); \n"
        "} \n"
        "else { \n"
        "   print(y - x); \n"
        "} ";



    std::vector<Lexem> list_of_lexem = tokenizer(Programm);
    for (Lexem currToken : list_of_lexem) {
        currToken.debug_print();
    }

    Parser parser;
    parser.parse(list_of_lexem);

    system("pause");
    return 0;
}
