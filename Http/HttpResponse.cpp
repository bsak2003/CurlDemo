//
// Created by bazik on 1/12/2021.
//

#include <iostream>
#include "HttpResponse.h"

HttpResponse::HttpResponse() {
    Succeded = false;
    StatusCode = 0;
    Body = "";
}

HttpResponse::HttpResponse(int code, std::string body) {
    Succeded = true;
    StatusCode = code;
    Body = body;
}