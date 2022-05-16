#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;
//Init List
LTNode* ListInit();
//print
void ListPrint(LTNode* phead);
//destory
void ListDestory(LTNode* pHead);
//create new node
LTNode* BuyListNode(LTDataType x);
//tail insert
void ListPushBack(LTNode* phead,LTDataType x);
//head insert
void ListPushFront(LTNode* phead, LTDataType x);
//tail delete
void ListPopBack(LTNode* phead);
//head delete
void ListPopFront(LTNode* phead);
//Judge empty
bool ListEmpty(LTNode* phead);
//insert node front of the pos 
void ListInsert(LTNode* pos, LTDataType x);
//delete pos node
void ListErase(LTNode* pos);
