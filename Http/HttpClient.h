//
// Created by bazik on 1/12/2021.
//

#ifndef CURLDEMO_HTTPCLIENT_H
#define CURLDEMO_HTTPCLIENT_H
#include <string>
#include "HttpResponse.h"

class HttpClient{
public:
    HttpResponse Get(std::string url);
};

#endif //CURLDEMO_HTTPCLIENT_H
