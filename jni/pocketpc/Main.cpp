#include <pocketpc/Headers.h>

static void (*_Block$initBlocks)();
static void Block$initBlocks() {
	_Block$initBlocks();
	
	PocketPC::initBlocks();
	
}

static void (*_BlockGraphics$initBlocks)(ResourcePackManager&);
static void BlockGraphics$initBlocks(ResourcePackManager& resourcePack) {
	_BlockGraphics$initBlocks(resourcePack);
	
	PocketPC::initBlockGraphics();
	
}

static void (*_Item$initClientData)();
static void Item$initClientData() {
	_Item$initClientData();
	
	PocketPC::initItems();
	
}

static void (*_Item$initCreativeItems)();
static void Item$initCreativeItems() {
	_Item$initCreativeItems();
	
	PocketPC::initCreativeItems();
	
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	
	MSHookFunction((void*) &Block::initBlocks, (void*) &Block$initBlocks, (void**) &_Block$initBlocks);
	MSHookFunction((void*) &BlockGraphics::initBlocks, (void*) &BlockGraphics$initBlocks, (void**) &_BlockGraphics$initBlocks);
	MSHookFunction((void*) &Item::initClientData, (void*) &Item$initClientData, (void**) &_Item$initClientData);
	MSHookFunction((void*) &Item::initCreativeItems, (void*) &Item$initCreativeItems, (void**) &_Item$initCreativeItems);
	
	return JNI_VERSION_1_2;
}
