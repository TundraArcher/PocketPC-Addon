#include <pocketpc/Headers.h>

class Firework : public Item {
	public:
	
	Firework();
	
	virtual const std::string buildEffectDescriptionName(ItemInstance const&) const;
	virtual bool use(ItemInstance&, Player&);
	
};
