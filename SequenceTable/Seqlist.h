#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	size_t size;
	size_t capacity;
}SeqList;
//Init
void SeqListInit(SeqList* ps);
//print
void SeqListPrint(SeqList* ps);
//destory
void SeqListDestory(SeqList* ps);
//check capacity 
SLCheckCapacity(SeqList* ps);
//tail insert
void SeqListPushBack(SeqList* ps, SLDataType x);
//head insert
void SeqListPushFront(SeqList* ps, SLDataType x);
//head delete
void SeqListPopFront(SeqList* ps);
//tail delete
void SeqListPopBack(SeqList* ps);
//insert at special location
void SeqListInsert(SeqList* ps, int pos, SLDataType x);
//delete at special location
void SeqListErase(SeqList* ps, size_t pos);
//search
int SeqListFind(SeqList* ps, SLDataType x);
