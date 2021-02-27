//
// Created by bazik on 1/12/2021.
//

#ifndef CURLDEMO_HTTPRESPONSE_H
#define CURLDEMO_HTTPRESPONSE_H
#include <iostream>

class HttpResponse {
public:
    HttpResponse();
    HttpResponse(int code, std::string body);
    bool Succeded;
    int StatusCode;
    std::string Body;
};

#endif //CURLDEMO_HTTPRESPONSE_H
