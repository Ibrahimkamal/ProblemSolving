//
// Created by Ibrahim Kamal on 6/26/21.
//

#ifndef CLION_STRING_HELPER_H
#define CLION_STRING_HELPER_H

#endif //CLION_STRING_HELPER_H
static class STRING_HELPER{
public:
    string toLower(string s) {
        for_each(s.begin(), s.end(), [](char &c) {
            c = ::tolower(c);
        });
        return s;
    }
};