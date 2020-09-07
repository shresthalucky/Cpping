#include <iostream>
#include <fstream>
// #include <istream>
#include <string.h>
using namespace std;

class book{
    public:
    char title[20];
    char author[20];
    char subject[20];
    char pub[20];
    void getdata(){
        cout << "\ntitle ";
        cin >> title;
        cout << "subject ";
        cin >> subject;
        cout << "author ";
        cin >> author;
        cout << "publication ";
        cin >> pub;
    }
    void putdata(){
        cout << "\ntitle " << title << endl;
        cout << "subject " << subject << endl;
        cout << "author " << author << endl;
        cout << "Publication " << pub << endl;
    }

};

class book_file{
    char file_name[10];
    public:
    book_file(){
        cout << "filename ";
        cin >> file_name;
    }
    void append_books(){
        int n;
        cout << "no of books";
        cin >> n;
        book b;
        ofstream outfile;
        outfile.open(file_name, ios::app | ios::out);
        for(int k = 0; k < n; k++)
        {
            b.getdata();
            outfile.write((char*)&b, sizeof(b));
        }
        outfile.close();
    }
    void search_books(char author[], char title[], char subject[]){
        ifstream infile;
        infile.open(file_name, ios::in);
        book b;
        infile.seekg(0, ios::end);
        int endposition = infile.tellg();
        int totalbooks = endposition / sizeof(book);
        for(int j = 0; j < totalbooks; j++){
            infile.seekg(j*sizeof(book));
            infile.read((char*)&b, sizeof(book));
            if((strcmp(b.author, author) == 0) | (strcmp(b.title, title) == 0) | (strcmp(b.subject, subject) == 0)){
                b.putdata();
            }
        }
        infile.close();
    }
};

int main(){
    book_file f;
    f.append_books();
    char subject[20], title[20], author[20];
    cout << "Search for author title subject: ";
    cin >> author >> title >> subject;
    cout << "\nsearch result" << endl;
    f.search_books(author, title, subject);
    return 0;
}