//
// Created by joeyl on 5/15/2024.
//

#ifndef ASSETS_IN_CLASS_ASSIGNMENT_ASSETS_H
#define ASSETS_IN_CLASS_ASSIGNMENT_ASSETS_H

#include <string>

using namespace std;

class Assets {
public:
    Assets();// default constructor
    Assets(const string& name); // custom constructor
    Assets(const Assets &other); // copy constructor
    const Assets &operator=(const Assets &rhs); // copy assignment
    ~Assets(); // destructor

    void AddTag(const string &tag); // setter
    string ToString() const; // debug function
private:
    string _name;
    size_t _numberOfTags;
    string* _tags;
};


#endif //ASSETS_IN_CLASS_ASSIGNMENT_ASSETS_H
