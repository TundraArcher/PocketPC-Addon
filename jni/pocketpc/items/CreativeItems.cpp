#include <pocketpc/Headers.h>

void PocketPC::initCreativeItems() {
	
	int stainedGlassData, stainedGlassPaneData;
	
	for(stainedGlassData = 0; stainedGlassData < 16; stainedGlassData++) {
		Item::addCreativeItem(Block::mStainedGlass, stainedGlassData);
	}
	
	for(stainedGlassPaneData = 0; stainedGlassPaneData < 16; stainedGlassPaneData++) {
		Item::addCreativeItem(Block::mStainedGlassPane, stainedGlassPaneData);
	}
	
	Item::addCreativeItem(213, 0);
	
	Item::addCreativeItem(401, 0);
	Item::addCreativeItem(401, 1);
	Item::addCreativeItem(401, 2);
	
}
