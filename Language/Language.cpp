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


    Lexer lexer;
    lexer.tokenize(Programm);
    for (Lexem currToken : lexer.get_list()) {
        currToken.debug_print();
    }

    Parser parser;
    parser.parse(lexer.get_list());

    system("pause");
    return 0;
}
