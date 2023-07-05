#include "user.h"
#include "posts.h"
int main(){
    // User usr;
    // std::string entries[] = {"2", "marwan", "9101112"};
    // usr.saveDB(entries, "users");
    // usr.saveDB(entries, "username");
    Posts post;
    std::string entries[] = {"0", "harry potter", "The boy who lived"};
    post.saveDB(entries, "Posts");
    return 0;
}