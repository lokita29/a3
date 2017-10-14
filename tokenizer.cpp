#include "tokenizer.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

    const string delimiters = " ,?.\\\'\"1234567890::<>/|}{][()*&^%$#@!~\n";
    //size_t maxWordLen = 0;
    //default constructor
    tokenizer::tokenizer()
    {
    }
    // constructor with param input stream
    tokenizer::tokenizer(string fileContent)
    {
            size_t currPos = 0;
            string nextWord = "";

            // Extract each word character by character
            for (string::iterator character = fileContent.begin();
                    character != fileContent.end();
                    ++character) {
                if (delimiters.find_first_of(*character, currPos) ==
                        string::npos) {
                    nextWord += tolower(*character);
                } else {
                    if (nextWord != "") {
                        tokenV.push_back(nextWord);
                        //maxWordLen = maxWordLen > nextWord.size() ?
                          //  maxWordLen: nextWord.size();
                        nextWord = "";
                    }
                }

            }
            if (nextWord != "") {
                    tokenV.push_back(nextWord);
                    //maxWordLen = maxWordLen > nextWord.size() ?
                      //  maxWordLen: nextWord.size();
                    nextWord = "";
            }
    }
    // overload operator<< returns tokens
    std::ostream &operator<< (std::ostream & os,const tokenizer & tok)
    {
        os << "Tokens: " << endl;
        for ( vector<string>::size_type i = 0; i != tok.tokenV.size(); ++i )
            os << tok.tokenV[i] << endl;
        return os;
    }


