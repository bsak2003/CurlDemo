//
// Created by bazik on 1/12/2021.
//

#include <iostream>
#include <curl/curl.h>
#include "HttpClient.h"
#include "Helpers.h"

HttpResponse HttpClient::Get(std::string url) {
    CURL* curl = curl_easy_init();

    string body;
    long statusCode;

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &body);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeToString);

    CURLcode res = curl_easy_perform(curl);

    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &statusCode);
    curl_easy_cleanup(curl);

    return HttpResponse((int) statusCode, body);
}
