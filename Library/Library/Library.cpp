#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
	string title;
	string author;

	Book(const string& title, const string& author) : title(title), author(author) {}
};
class BookManager {
private:
	vector<Book > books;
public:
	void addBook(const string& title, const string& author) {
		books.push_back(Book(title, author));
		cout << "책이 추가되었습니다: " << title << "by " << author << endl;
	}
	void displayAllBooks() const {
		if (books.empty()) {
			cout << "현재 등록된 책이 없습니다." << endl;
			return;
		}
		cout << "현재 도서 목록: " << endl;
		for (size_t i = 0; i < books.size(); i++) {
			cout << "- " << books[i].title << " by " << books[i].author << endl;
		}
	}
	void searchByTitle(const string& title){
		auto it = find_if(books.begin(), books.end(), [&title](const Book& book) {
			return book.title == title;
			});
		if (it != books.end()) {
			cout << "책 제목은 " << it->title << " 이며 저자는 " << it->author
				<< "입니다." << endl;
		}
		else cout << "찾으시는 제목을 가진 책이 없습니다." << endl;
	}
	void searchByAuthor(const string& author) {
		auto it = find_if(books.begin(), books.end(), [&author](const Book& book) {
			return book.author == author;
			});
		if (it != books.end()) {
			cout << "책 제목은 " << it->title << " 이며 저자는 " << it->author
				<< "입니다." << endl;
		}
		else cout << "찾으시는 저자가 쓴 책이 없습니다." << endl;
	}
};
int main() {
	BookManager manager;

	while (true) {
		cout << "\n도서관 관리 프로그램" << endl;
		cout << "1. 책 추가" << endl;
		cout << "2. 모든 책 출력" << endl;
		cout << "3. 종료" << endl;
		cout << "선택: ";


		int choice;
		cin >> choice;

		if (choice == 1) {
			string title, author;
			cout << "책 제목: ";
			cin.ignore(); 
			getline(cin, title); 
			cout << "책 저자: ";
			getline(cin, author);
			manager.addBook(title, author);
		}
		else if (choice == 2) {
			manager.displayAllBooks();
		}
		else if (choice == 3) {
			cout << "프로그램을 종료합니다." << endl;
			break; 
		}
		else {
			cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
		}
	}

	return 0;

}