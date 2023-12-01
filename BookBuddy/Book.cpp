// File for book class
#include <iostream>

using namespace std;

class Book {
private: 
    string title;
    string author;
    string genre; 
    int pages;
public:
    Book(string title, string author, string genre, int pages) {
        this->title = title;
        this->author = author;
        this->genre = genre;
        this->pages = pages; 
    }
    string getTitle() {
        return title;
    }
    string getAuthor() {
        return author;
    }
    string getGenre() {
        return genre;
    }
    int getPages() {
        return pages;
    }
};