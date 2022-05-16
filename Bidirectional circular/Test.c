#include "List.h"

void TestList1()
{
	//LTNode* plist = NULL;
	//ListInit(&plist);

	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);
}

void TestList2()
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);

//	ListPopBack(plist);
//	ListPrint(plist);
}

int main()
{
	TestList2();

	return 0;
