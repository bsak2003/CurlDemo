//
// Created by bazik on 1/12/2021.
//

#include <iostream>
#ifndef CURLDEMO_HELPERS_H
#define CURLDEMO_HELPERS_H

using namespace std;

size_t writeToString(char* ptr, size_t size, size_t nmemb, void* buffer) {
    ((string*)buffer)->append(ptr, size * nmemb);
    return size * nmemb;
}

#endif //CURLDEMO_HELPERS_H
