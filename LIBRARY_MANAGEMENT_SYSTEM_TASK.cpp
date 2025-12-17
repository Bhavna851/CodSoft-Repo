#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Book
{
public:
    string title, author, isbn;
    bool issued;
    Book(string t, string a, string i)
    {
        title = t;
        author = a;
        isbn = i;
        issued = false;
    }
};
class Library
{
private:
    vector<Book> books;

public:
    void addbook()
    {
        string t, a, i;
        cout << "Enter Title: ";
        getline(cin, t);
        cout << "Enter Author: ";
        getline(cin, a);
        cout << "Enter ISBN: ";
        getline(cin, i);
        books.push_back(Book(t, a, i));
        cout << "Book added " << endl;
    }
    void Searchbook()
    {
        string key;
        cout << "Enter Title/Author/ISBN: ";
        getline(cin, key);
        for (auto &b : books)
        {
            if (b.title == key || b.author == key || b.isbn == key)
            {
                cout << "Found" << endl;
                cout << "Title: " << b.title << endl;
                cout << "Author: " << b.author << endl;
                cout << "ISBN: " << b.isbn << endl;
                cout << "status: " << (b.issued ? "Issued" : " Available") << endl;
                return;
            }
        }
        cout << "Book not found" << endl;
    }
    void issuebook()
    {
        string i;
        cout << "Enter isbn to issue: ";
        getline(cin, i);
        for (auto &b : books)
        {
            if (b.isbn == i)
            {
                if (b.issued)
                {
                    cout << "Already issued " << endl;
                }
                else
                {
                    b.issued = true;
                    cout << "Book issued: " << endl;
                }
                return;
            }
        }
        cout << "Book not found " << endl;
    }
    void returnbook()
    {
        string i;
        cout << "Enter isbn to return :";
        getline(cin, i);
        for (auto &b : books)
        {
            if (b.isbn == i)
            {
                if (!b.issued)
                {
                    cout << "Book was not issued " << endl;
                }
                else
                {
                    b.issued = false;
                    cout << "Book returned Succesfully " << endl;
                }
            }
            return;
        }
        cout << "Book not found" << endl;
    }
    void displaybook()
    {
        if (books.empty())
        {
            cout << "No books available " << endl;
            return;
        }
        for (auto &b : books)
        {
            cout << "Title: " << b.title << endl;
            cout << "Author: " << b.author << endl;
            cout << "ISBN: " << b.isbn << endl;
            cout << "Status: " << (b.issued ? "Issued" : "Available") << endl;
        }
    }
    void calculatefine()
    {
        int days;
        cout << "Enter number of late days";
        cin >> days;
        int fine = days * 5;
        cout << "Total fine: Rs " << fine << endl;
    }
};
int main()
{
    Library l;
    int choice;
    while (true)
    {
        cout << "\n--------LIBRARY MENU-------- " << endl;
        cout << "1. Add Book " << endl;
        cout << "2. Search Book " << endl;
        cout << "3. Issue Book " << endl;
        cout << "4. Return Book " << endl;
        cout << "5. Show all Books " << endl;
        cout << "6. Calculate fine amount " << endl;
        cout << "7. Exit " << endl;
        cout << " choose: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            l.addbook();
            break;
        case 2:
            l.Searchbook();
            break;
        case 3:
            l.issuebook();
            break;
        case 4:
            l.returnbook();
            break;
        case 5:
            l.displaybook();
            break;
        case 6:
            l.calculatefine();
            break;
        case 7:
            cout << "Thankyou!" << endl;
            break;
        default:
            cout << "Invalid Choice " << endl;
        }
    }
    return 0;
}
output:
--------LIBRARY MENU-------- 
1. Add Book 
2. Search Book 
3. Issue Book 
4. Return Book 
5. Show all Books 
6. Calculate fine amount 
7. Exit 
 choose: 1
Enter Title: The Alchemist
Enter Author: Paulo Coelho
Enter ISBN: 978-0061122415
Book added

--------LIBRARY MENU--------
1. Add Book
2. Search Book
3. Issue Book
4. Return Book 
5. Show all Books
6. Calculate fine amount
7. Exit
 choose: 2
Enter Title/Author/ISBN: 978-0061122415
Found
Title: The Alchemist
Author: Paulo Coelho
ISBN: 978-0061122415
status:  Available

--------LIBRARY MENU--------
1. Add Book
2. Search Book
3. Issue Book
4. Return Book 
5. Show all Books
6. Calculate fine amount
7. Exit 
 choose: 3
Enter isbn to issue: 978-0061122415
Book issued:

--------LIBRARY MENU--------
1. Add Book
2. Search Book
3. Issue Book
4. Return Book
5. Show all Books
6. Calculate fine amount
7. Exit
 choose: 4
Enter isbn to return :978-0061122415
Book returned Succesfully

--------LIBRARY MENU--------
1. Add Book
2. Search Book
3. Issue Book
4. Return Book
5. Show all Books
6. Calculate fine amount
7. Exit
 choose: 5
Title: The Alchemist
Author: Paulo Coelho
ISBN: 978-0061122415
Status: Available

--------LIBRARY MENU--------
1. Add Book
2. Search Book
3. Issue Book
4. Return Book
5. Show all Books
6. Calculate fine amount
7. Exit
 choose: 6
Enter number of late days 3
Total fine: Rs 15

--------LIBRARY MENU--------
1. Add Book
2. Search Book
3. Issue Book
4. Return Book
5. Show all Books 
6. Calculate fine amount
7. Exit
 choose: 7
Thankyou!

--------LIBRARY MENU--------
1. Add Book
2. Search Book
3. Issue Book
4. Return Book 
5. Show all Books 
6. Calculate fine amount
7. Exit
 choose:
