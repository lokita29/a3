#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <fstream>
#include <istream>
#include <vector>
#include <string>


class tokenizer
{
    public:
        tokenizer();
        tokenizer(std::string fileName);
        friend std::ostream &operator<< (std::ostream & os,const tokenizer & tok);

    private:
        std::vector<std::string> tokenV;

};

#endif // TOKENIZER_H
