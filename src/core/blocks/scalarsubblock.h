/*
*	ICP Project: BlockEditor
*	Authors: Tomáš Pazdiora (xpazdi02), Michal Pospíšil (xpospi95)
*	File: scalarsubblock.h
*/

#ifndef SCALARSUBBLOCK_H
#define SCALARSUBBLOCK_H

#include "../blockbase.h"
#include "../graph.h"

class ScalarSubBlock : public BlockBase
{
public:
    ScalarSubBlock(Graph &g);
    void Compute() override;
    virtual ~ScalarSubBlock() = default;
};

#endif // SCALARSUBBLOCK_H

