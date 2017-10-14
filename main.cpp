
//Assignment 2 Comp 345 Try
#include "document.h"
#include "stopword.h"
#include "tokenizer.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    document d1("try.txt"); //trying document obj with filename
    cout << "With constructor:"<<endl;
    cout << "Trying content function:" << endl;
    cout << d1.content() <<endl ;
    cout << "Trying size function:" << endl;
    cout << d1.size() << endl;
    cout << "Trying name function:" << endl;
    cout << d1.name() << endl;

    cout << endl;

    stopword s("stopwordstry.txt"); // trying stopword list with filename

    tokenizer t1(d1.content()); //trying tokenizer, breaking doc1 content into chars

    cout << endl << "Trying overload operator<< of document object:" << endl; // trying all overload operations
    cout << d1;

    cout << endl << "Trying overload operator<< of tokenizer object:" << endl;
    cout << t1;

    cout << endl << "Trying overload operator<< of stopword object:" << endl;
    cout << s;

        string token = "word1"; // trying if token exists in stopword list. Returns 1 if true, 0 if false
        cout<<endl<<s(token) <<endl;
        string token2 = "word2";
        cout<<s(token2)<<endl;
        string token3 = "bla";
        cout<<s(token3)<<endl;
        string token4 = "word";
        cout<<s(token4)<<endl;

    return 0;
}
