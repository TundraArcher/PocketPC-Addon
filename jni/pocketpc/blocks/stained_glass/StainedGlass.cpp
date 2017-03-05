#include "StainedGlass.h"

StainedGlass::StainedGlass() : HalfTransparentBlock("stained_glass", 241, Material::getMaterial(MaterialType::GLASS), true) {
	
	init();
	setCategory(CreativeItemCategory::DECORATIONS);
	setDestroyTime(Block::mGlass->getDestroySpeed());
	
}

bool StainedGlass::canBeSilkTouched() const {
	return true;
}
