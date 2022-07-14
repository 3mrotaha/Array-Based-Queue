#ifndef	_ADT_BASED_ARRAY_QUEUE_PRIVILEGE_
#define _ADT_BASED_ARRAY_QUEUE_PRIVILEGE_

ErrorStates_t	CreateQueue(Queue_t*);

ErrorStates_t 	ClearQueue(Queue_t*);

ErrorStates_t	Push(QueueEntry, Queue_t*);

ErrorStates_t	Pop(QueueEntry*, Queue_t*);

ErrorStates_t	QueueSize(int*, Queue_t);

ErrorStates_t	QueueFront(int*, Queue_t);

ErrorStates_t	QueueRear(int*, Queue_t);

ErrorStates_t	QueueEmpty(Queue_t);

ErrorStates_t	QueueFull(Queue_t);

ErrorStates_t	QueueTraverse(Queue_t, void (*) (QueueEntry));

#endif