#include <iostream>
#include <conio.h>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
	string book_name;
	int Isbn, serial_no, issued;
	string Author, publisher;
	Node *next;
};
class linked_list
{
public:
	Node *head = NULL;
	void insert()
	{
		int isbn, serial;
		string bname, author, pub;
		cout << "\n\n Enter the Book Name : ";
		cin >> bname;
		cout << "\n\n Enter the Isbn : ";
		cin >> isbn;
		cout << "\n\n Enter the serial Number : ";
		cin >> serial;
		cout << "\n\n Enter the Author Name : ";
		cin >> author;
		cout << "\n\n Enter the Publisher  : ";
		cin >> pub;
		Node *newnode = new Node;
		newnode->book_name = bname;
		newnode->Author = author;
		newnode->Isbn = isbn;
		newnode->serial_no = serial;
		newnode->publisher = pub;
		newnode->next = NULL;
		if (head == NULL)
		{
			head = newnode;
		}
		else
		{
			Node *ptr = head;
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = newnode;
		}
	}
	void search()
	{
		if (head == NULL)
		{
			cout << "\n\n Empty Record" << endl;
		}
		else
		{
			int ser, found = 0;
			cout << "\n\n Enter the serial Number for search : ";
			cin >> ser;
			Node *ptr = head;
			while (ptr != NULL)
			{
				if (ser == ptr->serial_no)
				{
					cout << "Book founds : ";
					cout << "Book Name : " << ptr->book_name << endl;
					cout << "Isbn: " << ptr->Isbn << endl;
					cout << "serial Number : " << ptr->serial_no << endl;
					cout << "Author Name : " << ptr->Author << endl;
					cout << "Publisher Name : " << ptr->publisher << endl;
					found++;
				}
				ptr = ptr->next;
			}
			if (found == 0)
			{
				cout << "\n\n Record is Not found" << endl;
			}
		}
	}
	void count()
	{
		if (head == NULL)
		{
			cout << "\n\n NO RECORD FOUND! " << endl;
		}
		else
		{
			int c = 0;
			Node *ptr = head;
			while (ptr != NULL)
			{
				c++;
				ptr = ptr->next;
			}
			cout << "\n\nTotal Books are : " << c << endl;
		}
	}
	void update()
	{
		if (head == NULL)
		{
			cout << "\n\n Empty Record" << endl;
		}
		else
		{
			int sr, found = 0;
			cout << "\n\n Enter the Serial Number for Updation : ";
			cin >> sr;
			Node *ptr = head;
			while (ptr != NULL)
			{
				if (sr == ptr->serial_no)
				{
					cout << "\n\n Enter the Book Name : ";
					cin >> ptr->book_name;
					cout << "\n\n Enter the Auhor Name : ";
					cin >> ptr->Author;
					cout << "\n\n Enter the Isbn number : ";
					cin >> ptr->Isbn;
					cout << "\n\n Enter the Publicher Name : ";
					cin >> ptr->publisher;

					cout << "\n\nRecord is updated!" << endl;

					found++;
				}
				ptr = ptr->next;
			}
			if (found == 0)
			{
				cout << "\n\n Record is Not found" << endl;
			}
		}
	}
	void del()
	{
		if (head == NULL)
		{
			cout << "\n\n Empty Record" << endl;
		}
		int sr, found = 0;
		cout << "\n\n Enter the  Serial Number for delation: ";
		cin >> sr;
		if (sr == head->serial_no)
		{
			Node *ptr = head;
			head = head->next;
			cout << "\n\n Book deleted success fully!" << endl;
			delete ptr;
			found++;
		}
		else
		{
			Node *pre = head;
			Node *ptr = head->next;
			while (ptr != NULL)
			{
				if (sr == ptr->serial_no)
				{
					pre->next = ptr->next;
					cout << "\n\n Book deleted success fully!" << endl;
					found++;
					delete ptr;
					break;
				}
				pre = ptr;
				ptr = ptr->next;
			}
		}
		if (found == 0)
		{
			cout << "\n\n Record is Not found" << endl;
		}
	}

	void show()
	{
		if (head == NULL)
		{
			cout << "\n\n Empty Record" << endl;
		}
		else
		{

			Node *ptr = head;
			while (ptr != NULL)
			{
				cout << "\n\t\t<-------Saved Record of All Books----->\n\n " << endl;

				cout << "=>    Serial # : " << ptr->serial_no << endl;
				cout << "\tBook NAME: " << ptr->book_name << endl;
				cout << "\tAuthor NAME : " << ptr->Author << endl;
				cout << "\tIsbn : " << ptr->Isbn << endl;
				cout << "\tPublisher : " << ptr->publisher << endl;
				cout << endl
					 << endl;
				ptr = ptr->next;
			}
		}
	}
	void issue()
	{
		if (head == NULL)
		{
			cout << "\n\n Empty Record" << endl;
		}
		else
		{
			int sr, found = 0;
			cout << "\n\n Enter the Serial Number for issue : ";
			cin >> sr;
			Node *ptr = head;
			int iss = 0;
			while (ptr != NULL)
			{
				if (sr == ptr->serial_no)
				{
					cout << "Book issued : ";
					ptr->issued = 1;
					cout << "Book Name : " << ptr->book_name << endl;
					cout << "Isbn: " << ptr->Isbn << endl;
					cout << "serial Number : " << ptr->serial_no << endl;
					cout << "Author Name : " << ptr->Author << endl;
					cout << "Publisher Name : " << ptr->publisher << endl;
					found++;
				}
				ptr = ptr->next;
			}

			if (found == 0)
			{
				cout << "\n\n Record is Not found" << endl;
			}
		}
	}

	void find()
	{
		if (head == NULL)
		{
			cout << "\n\n Empty Record" << endl;
		}
		int sr;
		cout << "Enter the serial number= ";
		cin >> sr;
		Node *ptr = head;
		int iss = 0;
		while (ptr != NULL)
		{
			if (sr == ptr->serial_no && ptr->issued == 1)
			{
				cout << "This  Book is issued : " << endl;
				cout << "Book Name : " << ptr->book_name << endl;
				cout << "Isbn: " << ptr->Isbn << endl;
				cout << "serial Number : " << ptr->serial_no << endl;
				cout << "Author Name : " << ptr->Author << endl;
				cout << "Publisher Name : " << ptr->publisher << endl;
			}
			else
			{
				cout << "This Book is not ISSUED!! ";
			}
			ptr = ptr->next;
		}
	}
	void sort(){
  if(head==NULL){
       
    cout<<"List is Empty "<<endl;
 
  }
  int count=0;
  string t_title;
  int t_ISBN;
  Node *ptr= head;

  while(ptr!=NULL)
  {
      count++;
      ptr=ptr->next;
  }
  for(int i=1;i<=count;i++)
  {
      Node *ptr=head;
      for(int j=1;j<count;j++)
      {
          if(ptr->book_name > ptr->next->book_name)
          {
              // SAVE DATA IN TEMPORARY VAROABLES
              t_title=ptr->book_name;
              t_ISBN=ptr->Isbn;
              ptr->book_name = ptr->next->book_name;
              ptr->Isbn = ptr->next->Isbn;
                ptr->next->book_name=t_title;
                ptr->next->Isbn=t_ISBN;
          }
          ptr=ptr->next;
      }
  }
  cout<<"<--------------Sorted Books According to Its ISBN-NO & TITLE------------------>"
  show();
}
};

int main()
{
	linked_list obj;
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
p:
	system("cls");
	int choice;
	cout << "\n\n\t\t\t\tLAIBRARY MANGEMENT SYSTEM" << endl;
	cout << "\n\n<------Menue------>" << endl;
	SetConsoleTextAttribute(color, 10);
	cout << "\n\n 1.Insert BOOK.";
	SetConsoleTextAttribute(color, 11);

	cout << "\n\n 2.Search  BOOK.";
	SetConsoleTextAttribute(color, 12);

	cout << "\n\n 3.Count BOOKS.";
	SetConsoleTextAttribute(color, 13);

	cout << "\n\n 4.Update BOOK.";
	SetConsoleTextAttribute(color, 14);

	cout << "\n\n 5.Delete BOOK.";
	SetConsoleTextAttribute(color, 11);

	cout << "\n\n 6.Issue BOOKS.";
	cout << "\n\n 7.Sort BOOKS.";
	SetConsoleTextAttribute(color, 13);

	cout << "\n\n 8.find Issued BOOKS.";
	SetConsoleTextAttribute(color, 9);

	cout << "\n\n 9.Show all BOOKS.";
	SetConsoleTextAttribute(color, 7);

	cout << "\n\n 10.Exit.";
	cout << "\n\n\n Enter your choice.";
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("Color 0c");
		system("cls");
		obj.insert();
		break;
	case 2:
		system("cls");
		obj.search();
		break;
	case 3:
		system("cls");
		obj.count();
		break;
	case 4:
		system("cls");
		obj.update();
		break;
	case 5:
		system("cls");
		obj.del();
		break;
	case 6:
		system("cls");
		obj.issue();
		break;
	case 7:
		system("cls");
		obj.sort();
		break;
	case 8:
		system("cls");
		obj.find();
		break;
	case 9:
		system("cls");
		obj.show();
		break;

	case 10:
		exit(0);
	defualt:
		cout << "\n\n Invalid choice\n";
	}
	getch();
	goto p;

	return 0;
}
