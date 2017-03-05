#include <pocketpc/Headers.h>

class StainedGlass : public HalfTransparentBlock {
	public:
	
	StainedGlass();
	
	virtual bool canBeSilkTouched() const;
	
};
