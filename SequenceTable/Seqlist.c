#include "Seqlist.h"
//Initialization
void SeqListInit(SeqList* ps)
{
	assert(ps != NULL);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
//print
void SeqListPrint(SeqList* ps)
{
	assert(ps != NULL);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps ->a[i]);
	}
}
//destory
void SeqListDestory(SeqList* ps)
{
	assert(ps != NULL);
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
//check capacity
SLCheckCapacity(SeqList* ps)
{
	if (ps->size == ps->capacity)
	{
		int NewCapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
		SLDataType* tmp = realloc(ps->a, (NewCapacity * 2) * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->capacity = NewCapacity;
		ps->a = tmp;
	}
}
//tail insert
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps != NULL);
	SLCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//head insert
void SeqListPushFront(SeqList* ps, SLDataType x)
{
	assert(ps != NULL);
	SLCheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}
//head delete
void SeqListPopFront(SeqList* ps)
{
	assert(ps->size != 0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}
//tail delete
void SeqListPopBack(SeqList* ps)
{
	assert(ps ->size != 0);
	ps->size--;
}
//insert at special location
void SeqListInsert(SeqList* ps, size_t pos, SLDataType x)
{
	assert(ps != NULL);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(&ps);
	int end = ps->size - 1;
	while (pos <= end)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
//delete at special location
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps != NULL);
	assert(pos >= 0 && pos < ps->size);
	int begin = pos;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}
//search
int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps != NULL);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
