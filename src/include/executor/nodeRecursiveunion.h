/*-------------------------------------------------------------------------
 *
 * nodeRecursiveunion.h
 *
 *
 *
 * Portions Copyright (c) 1996-2010, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL: pgsql/src/include/executor/nodeRecursiveunion.h,v 1.5 2010/07/12 17:01:06 tgl Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODERECURSIVEUNION_H
#define NODERECURSIVEUNION_H

#include "nodes/execnodes.h"

extern RecursiveUnionState *ExecInitRecursiveUnion(RecursiveUnion *node, EState *estate, int eflags);
extern TupleTableSlot *ExecRecursiveUnion(RecursiveUnionState *node);
extern void ExecEndRecursiveUnion(RecursiveUnionState *node);
extern void ExecReScanRecursiveUnion(RecursiveUnionState *node);

#endif   /* NODERECURSIVEUNION_H */
