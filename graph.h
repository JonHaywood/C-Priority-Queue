/*	graph.h

	Header file for graph-search functions and objects.

	by: Jon Haywood
*/

#include <stdlib.h>
#include <stdarg.h>
#define MATRIXSIZE		10
#define EMPTY			0
#define FULL			1
#define NULL			0

typedef struct {
	    int x;									/* x coordinate of node */
		int y;									/* y coordinate of node */
		int cost;								/* cost of node */
		int data;								/* data this node contains */
		struct node * parent;					/* link to parent node */
} node;

typedef struct {
	    node begin;								/* start position */
		node end;								/* goal state */
		int matrix[MATRIXSIZE][MATRIXSIZE];		/* the world */
} problem;

int totalNodes;
