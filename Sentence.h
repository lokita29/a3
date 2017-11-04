/**
 *  @file    Sentence.h
 *  @author  Patrick Voyer, Isabella Salinas, Petio Petrov
 *  @date    10/15/2017
 *  @version 1.0
 *
 *  @brief This class is responsible for sentence objects.
 *
 * Created on November 3, 2017, 12:16 PM
 */

#ifndef SENTENCE_H
#define SENTENCE_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <cctype>
#include <algorithm>
#include "Index_item.h"


class Sentence : public Index_item 
{
public:
    // Constructor for Sentence that accepts a file and reads content into sentence object.
    Sentence(const std::string & str, const std::string & contentFile, const std::string nameFile);
    // Provides the file name of the document
    const std::string name();
    // Provides # of words in sentence
    const size_t size();
    //Provides content of sentence
    const std::string content();
    // Operator << provides debug output
    friend std::ostream & operator<<(std::ostream & os, Sentence & s);
    // Accessor function for position of sentence
    int getPos();
    // Operator < for sorting
    friend bool operator<(const Sentence & r1, const Sentence & r2);

private:
    size_t pos; ///< Start position of the sentence within its document 
    std::string fileName; ///< String with file name
    std::string contentOf; ///< String with  document content
    std::string fileContent;
};

#endif /* SENTENCE_H */

