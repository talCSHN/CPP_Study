#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void showMenu();		// 메뉴 출력
void makeAccount();		// 계좌개설
void depositMoney();	// 입금
void withdrawMoney();	// 출금
void showAllAccInfo();	// 잔액조회

class Account {
private:
	int accId;		// 계좌번호
	int balance;	// 잔액
	char* custName;	// 고객명
public:
	Account(int id, int money, char* name) : accId(id), balance(money) {
		custName = new char[strlen(name) + 1];
		strcpy(custName, name);
	}

	int getAccId() {
		return accId;
	}

	int getBalance() {
		return balance;
	}

	void deposit(int money) {
		balance += money;
	}

	int withdraw(int money) {
		if (balance < money) {
			return 0;
		}
		else {
			balance -= money;
		}
		return money;
	}

	void showAccInfo() {
		cout << "계좌ID: " << accId << endl;
		cout << "이  름: " << custName << endl;
		cout << "잔  액: " << balance << endl;
	}

	~Account() {
		delete[] custName;
	}
};

Account* accArr[100];	// Account 저장하는 배열
int accNum = 0;			// 저장된 Account 수
const int charLen = 20;
int main()
{
	char choice[100];
	while (1) {
		showMenu();
		cout << "(make, deposit, withdraw, inquire, exit) 중 선택 후 입력: ";
		cin >> choice;
		cout << endl;

		if (strcmp(choice, "make") == 0) {
			makeAccount();
		}
		else if (strcmp(choice, "deposit") == 0) {
			depositMoney();
		}
		else if (strcmp(choice, "withdraw") == 0) {
			withdrawMoney();
		}
		else if (strcmp(choice, "inquire") == 0) {
			showAllAccInfo();
		}
		else if (strcmp(choice, "exit") == 0) {
			for (int i = 0; i < accNum; i++) {
				delete accArr[i];
			}
			return 0;
		}
		else {
			cout << "잘못된 입력" << endl;
			//break;
		}
	}
	return 0;
}

void showMenu() {
	cout << "------Menu------" << endl;
	cout << "1. 계좌개설(make)" << endl;
	cout << "2. 입    금(deposit)" << endl;
	cout << "3. 출    금(withdraw)" << endl;
	cout << "4. 계좌정보 전체 출력(inquire)" << endl;
	cout << "5. 프로그램 종료(exit)" << endl;
}

void makeAccount() {
	int id;
	char name[charLen];
	int balance;

	cout << "[계좌 개설]" << endl;
	cout << "계좌 ID: "; cin >> id;
	cout << "이   름: "; cin >> name;
	cout << "입금액: "; cin >> balance;	
	cout << endl;

	accArr[accNum] = new Account(id, balance, name);
	accNum++;
}

void depositMoney() {
	int money;
	int id;
	cout << "[입   금]" << endl;
	cout << "계좌 ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccId() == id) {
			accArr[i]->deposit(money);
			cout << "입금 완료" << endl << endl;
			//showBalance();
			return;
		}
	}
	cout << "유효하지 않은 ID" << endl << endl;
}

void withdrawMoney() {
	int money;
	int id;
	cout << "[출   금]" << endl;
	cout << "계좌 ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccId() == id) {
			if (accArr[i]->withdraw(money) == 0) {
				cout << "잔액 부족" << endl << endl;
			}
			else {
				cout << "출금 완료" << endl << endl;
			}
			return;
		}
		
	}
	
	cout << "유효하지 않는 ID" << endl << endl;
}

void showBalance() {
	int id;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccId() == id) {
			accArr[i]->getBalance();
			break;
		}
	}
}

void showAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->showAccInfo();
		cout << endl;
	}
}