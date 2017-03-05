#include <pocketpc/Headers.h>

#include "BlockHeaders.h"

void PocketPC::initBlocks() {
	Block::mBlocks[160] = new StainedGlassPane();
	Block::mBlocks[213] = new MagmaBlock();
	Block::mBlocks[241] = new StainedGlass();
}

void PocketPC::initBlockGraphics() {
	BlockGraphics::mBlocks[160]->setTextureItem("stained_glass", "stained_glass", "stained_glass", "stained_glass", "stained_glass", "stained_glass_pane_top");
	BlockGraphics::mBlocks[160]->setBlockShape(BlockShape::IRON_FENCE);
	BlockGraphics::mBlocks[160]->setSoundType(BlockSoundType::GLASS);
	BlockGraphics::mBlocks[213]->setTextureItem("magma");
	BlockGraphics::mBlocks[241]->setTextureItem("stained_glass");
	BlockGraphics::mBlocks[241]->setSoundType(BlockSoundType::GLASS);
}
