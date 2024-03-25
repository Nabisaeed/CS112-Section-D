// C++ Program starts here

#include <iostream>
using namespace std;

// Define a class named "Post"
class Post {
private:
    int date; // date of the post
    string text; // text content of the post

    // Declare User class as a friend to allow User class access to private members of Post
    friend class User;
};

// Define a class named "User"
class User {
public:
    // Function to edit the text content of a post
    void editpost(Post& P1, string newtext) {
        P1.text = newtext; // updating the text content of the post
        cout << "The post is updated successfully." << endl;
        cout << "New text: " << newtext << endl;
    }
};

int main() {
    Post p; // Creating an instance of the Post class
    User u1; // Creating an instance of the User class

    // Editing the post content using the User class method
    u1.editpost(p, "This is new text");

    return 0;
}
