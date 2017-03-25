#include "MagmaBlock.h"

MagmaBlock::MagmaBlock() : Block("magma_block", 213, Material::getMaterial(MaterialType::STONE)) {
	
	Block::mBlocks[213] = this;
	
	setCategory(CreativeItemCategory::BLOCKS);
	setDestroyTime(Block::mNetherrack->getDestroySpeed());
	
}

void MagmaBlock::onStepOn(Entity& entity, BlockPos const& blockPos) const {
	
	if(!entity.isSneaking()) {
		entity.setOnFire(6);
	}
	
}
