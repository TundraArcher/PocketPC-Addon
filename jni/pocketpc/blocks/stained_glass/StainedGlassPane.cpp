#include "StainedGlassPane.h"

StainedGlassPane::StainedGlassPane() : HalfTransparentBlock("stained_glass", 241, Material::getMaterial(MaterialType::GLASS), true) {
	
	init();
	setCategory(CreativeItemCategory::DECORATION);
	setDestroyTime(Block::mGlass->getDestroySpeed());
	
}

bool StainedGlassPane::canBeSilkTouched() const {
	return true;
}
