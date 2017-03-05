#include <pocketpc/Headers.h>

class MagmaBlock : public Block {
	public:
	
	MagmaBlock();
	
	virtual void onStepOn(Entity&, BlockPos const&) const;
	
};
