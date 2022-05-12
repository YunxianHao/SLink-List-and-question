#include "Slist.h"
//Apply for a node
SListNode * BuySListNode(SLTDataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
//Print
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}
//tail insert
void SListPushBack(SListNode** pphead, SLTDataType x)
{
	SListNode* newnode = BuySListNode(x);
	SListNode* tail = *pphead;
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		while (tail)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
//head insert
void SListPushFront(SListNode** pphead, SLTDataType x)
{
	assert(*pphead != NULL);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
//tail delete
void SListPopBack(SListNode** pphead)
{
	assert(*pphead != NULL);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}
//head delete
void SListPopFront(SListNode** pphead)
{
	assert(*pphead != NULL);
	SListNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}
//find
SListNode* SListFind(SListNode* phead, SLTDataType x)
{
	SListNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//insert after the special postion
void SListInsertAfter(SListNode* pos, SLTDataType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
//delete after the special postion
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	SListNode* next = pos->next;
	if (next)
	{
		pos->next = next->next;
		free(next);
		next = NULL;
	}
}
//destory slist
void SListDestory(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	plist = NULL;
}
