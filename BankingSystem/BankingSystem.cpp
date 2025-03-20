#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void showMenu();		// �޴� ���
void makeAccount();		// ���°���
void depositMoney();	// �Ա�
void withdrawMoney();	// ���
void showAllAccInfo();	// �ܾ���ȸ

class Account {
private:
	int accId;		// ���¹�ȣ
	int balance;	// �ܾ�
	char* custName;	// ����
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
		cout << "����ID: " << accId << endl;
		cout << "��  ��: " << custName << endl;
		cout << "��  ��: " << balance << endl;
	}

	~Account() {
		delete[] custName;
	}
};

Account* accArr[100];	// Account �����ϴ� �迭
int accNum = 0;			// ����� Account ��
const int charLen = 20;
int main()
{
	char choice[100];
	while (1) {
		showMenu();
		cout << "(make, deposit, withdraw, inquire, exit) �� ���� �� �Է�: ";
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
			cout << "�߸��� �Է�" << endl;
			//break;
		}
	}
	return 0;
}

void showMenu() {
	cout << "------Menu------" << endl;
	cout << "1. ���°���(make)" << endl;
	cout << "2. ��    ��(deposit)" << endl;
	cout << "3. ��    ��(withdraw)" << endl;
	cout << "4. �������� ��ü ���(inquire)" << endl;
	cout << "5. ���α׷� ����(exit)" << endl;
}

void makeAccount() {
	int id;
	char name[charLen];
	int balance;

	cout << "[���� ����]" << endl;
	cout << "���� ID: "; cin >> id;
	cout << "��   ��: "; cin >> name;
	cout << "�Աݾ�: "; cin >> balance;	
	cout << endl;

	accArr[accNum] = new Account(id, balance, name);
	accNum++;
}

void depositMoney() {
	int money;
	int id;
	cout << "[��   ��]" << endl;
	cout << "���� ID: "; cin >> id;
	cout << "�Աݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccId() == id) {
			accArr[i]->deposit(money);
			cout << "�Ա� �Ϸ�" << endl << endl;
			//showBalance();
			return;
		}
	}
	cout << "��ȿ���� ���� ID" << endl << endl;
}

void withdrawMoney() {
	int money;
	int id;
	cout << "[��   ��]" << endl;
	cout << "���� ID: "; cin >> id;
	cout << "��ݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccId() == id) {
			if (accArr[i]->withdraw(money) == 0) {
				cout << "�ܾ� ����" << endl << endl;
			}
			else {
				cout << "��� �Ϸ�" << endl << endl;
			}
			return;
		}
		
	}
	
	cout << "��ȿ���� �ʴ� ID" << endl << endl;
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