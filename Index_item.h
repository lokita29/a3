/**
 *  @file    index_item.cpp
 *  @author  Patrick Voyer, Isabella Salinas, Petio Petrov
 *  @date    10/15/2017
 *  @version 1.0
 *
 *  @brief This class is an abstract class. Classes Document and Sentence will 
 *  be derived from it.
 *
 * Created on November 3, 2017, 12:16 PM
 */

#ifndef INDEX_ITEM_H
#define INDEX_ITEM_H

class Index_item {
public:
    // Provides the file name of the document
    virtual const std::string name() = 0;
    // Provides size in characters
    virtual const size_t size() = 0;
    //Provides content
    virtual const std::string content() = 0;
    // Operator << provides debug output
    friend std::ostream & operator<<(std::ostream & os, Index_item & i){
       os << ""; 
    };
    
private:
    std::string fileName; ///< String with file name
    std::string contentOf; ///< String with content
};

#endif /* INDEX_ITEM_H */

