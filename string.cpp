#include <iostream>
#include <string>
using namespace std;

int main(){
    string message = "Welcome to the world of C++ programming!";
    cout << "Original message: " << message << endl;
    size_t first_space = message.find(' ');
    if(first_space != string::npos){
        string first_word = message.substr(0, first_space);
        cout << "First word: " << first_word << endl;
    }

    // rfind()
    size_t last_space = message.rfind(' ');
    if(last_space != string::npos){
        string last_word = message.substr(last_space + 1);
        cout << "Last Word: " << last_word << endl;
    }

    // Count letter 'o'
    int count = 0;
    for(char c : message){
        if(c == 'o' || c == '0'){
            count++;
        }
    }
    cout << "Letter 'o' appears " << count << " times" << endl;

    // Replace 'World' with 'Universe'
    size_t pos = message.find("World");
    if(pos != string::npos){
        message.replace(pos, 5, "Universe");
        cout << "Modified message: " << message << endl;

    }

    cout << "Length of the message: " << message.length() << endl;
return 0;
}