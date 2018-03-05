#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  Node
{
	char ch[128];

	Node* next;
};
Node lst = { 0 }; // head1
int length = 0;


void  fixed_allloc()
{
	Node* Mem = (Node*)malloc(sizeof(Node));
	Mem->next = lst.next;
	lst.next = Mem;
}

void fixed_free()
{
	Node* p = lst.next;
	while (p)
	{

		lst.next = p->next;
		free(p);
		p = lst.next;
		length -= 1;
	}
}

int main()
{
	lst.next = NULL;
	for (int i = 0; i < 10; i++)
	{
		fixed_allloc();
		length += 1;
	}	
	fixed_free();
	return 0;
}
