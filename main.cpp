#include <iostream>
#include "Http/HttpClient.h"
#include <boost/json/src.hpp>

using namespace std;
using namespace boost::json;

int main() {
    HttpClient client;

    HttpResponse res = client.Get("https://jsonplaceholder.typicode.com/posts/2");
    std::cout << "Hello, World!" << std::endl;
    std::cout << "HTTP Status Code: " << res.StatusCode << std::endl;

    object jv = parse(res.Body).as_object();
    cout << "title: " << jv["title"] << endl;

    return 0;
}
