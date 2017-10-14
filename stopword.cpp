#include "stopword.h"
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

    //default constructor
    stopword::stopword()
    {
    }
    // constructor reads the stopword list from this file
    stopword::stopword(string fileName)
    {
       ifstream fin(fileName.c_str());
       string word;
       // insert words into list
       while (fin >> word)
        {
        listStopwords.push_back(word);
        }
        fin.close();
    }
    // overload operator<< returns stopword list content
    std::ostream &operator<< (std::ostream & os,const stopword & st)
    {
       os << "Stopwords: " << endl;
       for (list<string>:: const_iterator i = st.listStopwords.begin(); i != st.listStopwords.end(); ++i)
            os << *i << endl;
        return os;
    }
