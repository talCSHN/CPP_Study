#include <stdio.h>

typedef struct addr {
	char name[100];
	int age;
	char tel[20];
	char address[100];
} Addr;

void print_list(Addr*);

int main()
{
	Addr list[3] = { { "ȫ�浿", 100, "010-1111-1111", "����" },
					 { "ȫ�浿", 100, "010-2222-2222", "�λ�" },
					 { "�迵��", 24, "010-3333-3333", "���" }
	};

	print_list(list);
	/*for (int i = 0; i < 3; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].address);
	}*/
	return 0;
}
void print_list(Addr *list) {
	for (int i = 0; i < 3; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].address);
	}
}