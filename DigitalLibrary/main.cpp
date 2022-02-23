#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include <fstream>

struct Book {
    std::string title;
    std::string author;
    std::string language;
    unsigned int pages;
};

class Library {
    public:
    Library() {
        //import_library();
    };

    Library(std::string txt_file) {};

    Library(Book* book) {
        books.push_back(book);
    };

    Library(std::vector<Book> new_books) {
        for (auto it = new_books.begin(); it < new_books.end(); it++) {
            
        }
    };

    ~Library() {};

    // Add book object
    void add_book(Book* book) {
        books.push_back(book);
    }

    // Give info and add book
    void add_book(std::string title, std::string author, std::string language, unsigned int pages) {
        
        /*
        if (!books.empty()) {
            // Iterate over all books in library
            for (auto it = books.begin(); it < books.end(); it++) {
                if (strcmp((*it)->title.c_str(), title.c_str())) {
                    std::cout << (*it)->title << "\n";
                    std::cout << "Book title already exists! \n";
                    return;
                }
            }
        }
        */
        
        Book* book = new Book;
        book->title = title;
        book->author = author;
        book->language = language;
        book->pages = pages;
        books.push_back(book);
    }

    // Delete all books in the library
    void delete_book() {
        if (!books.empty()) {
            for (auto it = books.begin(); it != books.end(); it++) {
                // Delete content and erase pointer from library
                delete &it;
                books.erase(it);
            }
        }
    }

    
    void delete_book(std::string title) {
        if (!books.empty()) {
            // Check if book im already in library
            for (auto it = books.begin(); it < books.end(); it++) {
                if (strcmp((*it)->title.c_str(), title.c_str())) {
                    // Delete content and erase pointer from library
                    delete &it;
                    books.erase(it);
                }
            }
        }
    }

    // Search for a specific title and print info
    void search_title(std::string title) {
        if (!books.empty()) {
            // Iterate over all books in library
            for (auto it = books.begin(); it < books.end(); it++) {
                if (strcmp((*it)->title.c_str(), title.c_str())) {
                    // Print info of book if it exists in the library
                    std::cout << "Title: " << (*it)->title.c_str() << " ";
                    std::cout << "Author: " << (*it)->author.c_str() << " ";
                    std::cout << "Language: " << (*it)->language.c_str() << std::endl;
                    return;
                }
            }
        }
    }

    // Search for all books of a given author and print their info
    void search_author (std::string author) {
        bool is_author = false;
        int ret;

        if (!books.empty()) {
            // Check if booksim already in library
            for (auto it = books.begin(); it < books.end(); it++) {
                ret = strcmp((*it)->author.c_str(), author.c_str());
                if ( ret == 0 ) {
                    // Print info of book if it exists in the library
                    std::cout << "Title: " << (*it)->title.c_str() << " ";
                    std::cout << "Author: " << (*it)->author.c_str() << " ";
                    std::cout << "Language: " << (*it)->language.c_str() << std::endl;

                    is_author = true;
                }
            }

            if (is_author == false) {
                std::cout << "No books from " << author << std::endl;
            }
        }
    };

    void search_language(std::string language) {

    }

    void print_library() {
        std::cout << "List of books in library: \n";
        if (!books.empty()) {
            for (auto it = books.begin(); it < books.end(); it++) {
                // Print info of book if it exists in the library
                std::cout << "Title: " << (*it)->title.c_str() << ", ";
                std::cout << "Author: " << (*it)->author.c_str() << ", ";
                std::cout << "Language: " << (*it)->language.c_str() << ", ";
                std::cout << "Pages: " << (*it)->pages << "\n";
            }
        }
    }

    void import_library() {
        std::string line;
        std::ifstream myfile("library.txt");
        int counter = 0;
        std::string title;
        std::string author;
        std::string language;
        unsigned int pages;

        if (myfile.is_open()) {
            while (getline(myfile, line)) {
                if (counter == 0) {
                    title = line;
                } else if (counter == 1) {
                    author = line;
                } else if (counter == 2) {
                    language = line;
                } else if (counter == 3) {
                    pages = atoi(line.c_str());
                    add_book(title, author, language, pages);
                    counter = -1;
                }
                counter++;
            }
            myfile.close();
        } else {
            std::cout << "Unable to open file." << std::endl;
        }
    }

    private:
    std::vector<Book*> books;
};


int main() {
    Book book = {"1", "2", "3", 3};

    // Create library
    Library lib;

    // Add book to library
    lib.import_library();
    lib.add_book("Harry Potter 1", "JK Rowling", "English", 300);
    lib.add_book("Harry Potter 2", "JK Rowling", "English", 300);
    lib.add_book("Harry Potter 3", "JK Rowling", "English", 450);
    lib.add_book("Harry Potter 4", "JK Rowling", "English", 400);
    lib.print_library();
    
    return 0;
}