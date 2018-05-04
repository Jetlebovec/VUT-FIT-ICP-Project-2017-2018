/*
*	ICP Project: BlockEditor
*	Authors: Tomáš Pazdiora (xpazdi02), Michal Pospíšil (xpospi95)
*	File: vectoraddblock.h
*/

#ifndef VECTORADDBLOCK_H
#define VECTORADDBLOCK_H

#include "../blockbase.h"
#include "../graph.h"

class VectorAddBlock : public BlockBase
{
public:
	VectorAddBlock(Graph &g);
	void Compute() override;
	virtual ~VectorAddBlock() = default;
};

#endif // VECTORADDBLOCK_H
