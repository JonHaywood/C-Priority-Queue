/*	pqueue.h

	Header file for pqueue implementation

	by: Jonathan haywod
*/

#define PQUEUESIZE       1000
#define PARENT(i)		((i-1)/2)
#define LEFT(i)			((2*i+1))
#define RIGHT(i)		(2*(i+1))
#define COST(i)			(i.cost)

typedef struct {
        node q[PQUEUESIZE+1];			/* body of pqueue */
        int count;                      /* number of pqueue elements */
} pqueue;
