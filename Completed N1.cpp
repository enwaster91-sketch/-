/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<string>

struct Book {
    std::string title;
    std::string author;
    int year;
};

int main() {
    Book book;
    
    std::cout << "Enter title: ";
    std::getline(std::cin, book.title);
    
    std::cout << "Enter author: ";
    std::getline(std::cin, book.author);
    
    std::cout << "Enter year: ";
    std::cin >> book.year;
    
    std::cout << "\"" << book.title << "\" by " << book.author << " (" << book.year << ")" << std::endl;
    
    return 0;
}

