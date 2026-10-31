#include <iostream>
#include <cstring>

class String {
private:
    char* str;

public:
    String(const char* s = "") {
        if (s == nullptr) {
            str = new char[1];
            str[0] = '\0';
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }
    String(const String& source) {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }
    ~String() {
        delete[] str;
    }
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    String original("Hello, C++ World!");
    String copied = original;
    std::cout << "Original String: ";
    original.display();

    std::cout << "Copied String:   ";
    copied.display();

    return 0;
}
