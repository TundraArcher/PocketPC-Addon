#pragma once

#include "Block.h"

class TransparentBlock : public Block
{
public:
	void** vtable;
	TransparentBlock(const std::string&, int, const Material&, bool);
	
	//virtual ~TransparentBlock();
	//virtual bool shouldRenderFace(BlockSource&, const BlockPos&, signed char, const AABB&) const;
};

