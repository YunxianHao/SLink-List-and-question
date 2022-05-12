#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SListNode;

SListNode * BuySListNode(SLTDataType x);

void SListPrint(SListNode* plist);

void SListPushBack(SListNode** pphead, SLTDataType x);

void SListPushFront(SListNode** pphead, SLTDataType x);

void SListPopBack(SListNode** pphead);

void SListPopFront(SListNode** pphead);

SListNode* SListFind(SListNode* phead, SLTDataType x);

void SListInsertAfter(SListNode* pos, SLTDataType x);

void SListEraseAfter(SListNode* pos);

void SListDestory(SListNode* plist);
