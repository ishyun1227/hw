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
		cout << "å�� �߰��Ǿ����ϴ�: " << title << "by " << author << endl;
	}
	void displayAllBooks() const {
		if (books.empty()) {
			cout << "���� ��ϵ� å�� �����ϴ�." << endl;
			return;
		}
		cout << "���� ���� ���: " << endl;
		for (size_t i = 0; i < books.size(); i++) {
			cout << "- " << books[i].title << " by " << books[i].author << endl;
		}
	}
	void searchByTitle(const string& title){
		auto it = find_if(books.begin(), books.end(), [&title](const Book& book) {
			return book.title == title;
			});
		if (it != books.end()) {
			cout << "å ������ " << it->title << " �̸� ���ڴ� " << it->author
				<< "�Դϴ�." << endl;
		}
		else cout << "ã���ô� ������ ���� å�� �����ϴ�." << endl;
	}
	void searchByAuthor(const string& author) {
		auto it = find_if(books.begin(), books.end(), [&author](const Book& book) {
			return book.author == author;
			});
		if (it != books.end()) {
			cout << "å ������ " << it->title << " �̸� ���ڴ� " << it->author
				<< "�Դϴ�." << endl;
		}
		else cout << "ã���ô� ���ڰ� �� å�� �����ϴ�." << endl;
	}
};
int main() {
	BookManager manager;

	while (true) {
		cout << "\n������ ���� ���α׷�" << endl;
		cout << "1. å �߰�" << endl;
		cout << "2. ��� å ���" << endl;
		cout << "3. ����" << endl;
		cout << "����: ";


		int choice;
		cin >> choice;

		if (choice == 1) {
			string title, author;
			cout << "å ����: ";
			cin.ignore(); 
			getline(cin, title); 
			cout << "å ����: ";
			getline(cin, author);
			manager.addBook(title, author);
		}
		else if (choice == 2) {
			manager.displayAllBooks();
		}
		else if (choice == 3) {
			cout << "���α׷��� �����մϴ�." << endl;
			break; 
		}
		else {
			cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
		}
	}

	return 0;

}