/**
 *  @file    Document.h
 *  @author  Patrick Voyer, Isabella Salinas, Petio Petrov
 *  @date    10/15/2017
 *  @version 1.0
 *
 *  @brief This class is responsible for storing and maintaining document objects.
 *
 *  @section DESCRIPTION
 *
 *  This is a class responsible for storing and maintaining a document's file name, size in characters and content.
 *
 *
 */

#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include "Index_item.h"

class Document : public Index_item
{
public:
    // Constructor for Document that accepts a file and reads content into document object.
    Document(const std::string & name);
    // Provides the file name of the document
    const std::string name();
    // Provides size in characters
    const size_t size();
    //Provides content of document
    const std::string content();
    // Operator << provides debug output
    friend std::ostream & operator<<(std::ostream & os, Document & doc);
private:
    std::string fileName; ///< String with file name
    static const std::string pathName; ///< String containing documents path
    std::string contentOf; ///< String with  document content
};

#endif /* DOCUMENT_H */