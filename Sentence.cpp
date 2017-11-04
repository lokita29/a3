/**
 *  @file    Sentence.cpp
 *  @author  Patrick Voyer, Isabella Salinas, Petio Petrov
 *  @date    10/15/2017
 *  @version 1.0
 *
 *  @brief This class is responsible for sentence objects.
 *
 * Created on November 3, 2017, 12:16 PM
 */

#include "Sentence.h"

/**
  *   @brief  Constructor for Sentence
  *
  *   @param  str is a string
  *   @param  nameFile is a string
  *
  *   @return nothing
  */
Sentence::Sentence(const std::string & str, const std::string & contentFile, const std::string nameFile) {
    contentOf = str;
    fileName = nameFile;
    fileContent = contentFile;
}
/**
  *   @brief  Provides the file name of the document in which sentence is in
  *
  *   @return file name
  */
const std::string Sentence::name()
{
    return fileName;
}
/**
  *   @brief  Provides number of words in the sentence
  *
  *   @return size of sentence in words
  */
const size_t Sentence::size()
{    
  int sz = 0;
  int numSpace = 0;
  int i = 0;

  while(isspace(contentOf.at(i)))
  {
      ++i;
  }

  for(; i < contentOf.length(); ++i)
  {
    if(isspace(contentOf.at(i)))
    {
      ++numSpace;

      while(isspace(contentOf.at(++i))){
        if(contentOf.at(i) == NULL)
        {
            --numSpace;
        }   
      }
    }
  }
  sz = numSpace + 1;
  
  return sz;
}
/**
  *   @brief  Provides the text of the sentence
  *
  *   @return contentOf
  */
const std::string Sentence::content()
{
    return contentOf;
}
/**
  *   @brief  Accessor function for int pos.
  *      Returns the position of the sentence within document. 
  *      Returns -1 if not found
  *
  *   @return Position of the sentence within its document
  */
int Sentence::getPos()
{
 pos = fileContent.find(contentOf);
 if (pos!=std::string::npos)
    return pos;
}
/**
  *   @brief  Operator << provides debug  output.
  *
  *   @param  os is an ostream
  *   @param  s is Sentence object
  *
  *   @return content of Sentence object
  */
std::ostream & operator<<(std::ostream & os, Sentence & s) {
    os << "Content of sentence: " << s.content() << "\n";;
    
    return os;
}
/**
  *   @brief  Operator < for sorting in descending order.
  *
  *   @param  s1 is Sentence object
  *   @param  s2 is Sentence object
  *
  *   @return true if s1 has higher score than s2, otherwise false.
  */
bool operator<(const Sentence & r1, const Sentence & r2) {
    return r1.pos > r2.pos;
}
