#include "user.h"
#include "posts.h"
int main(){
    // User usr;
    // std::string entries[] = {"2", "marwan", "9101112"};
    // usr.saveDB(entries, "users");
    // usr.saveDB(entries, "username");
    Posts post;
    std::string entries[] = {"1", "Ron Weasley", "The Friend of the boy who lived and also the husband of\
    a mudblood but also a genius called hermione granger"};
    post.saveDB(entries, "Posts");
    return 0;
}