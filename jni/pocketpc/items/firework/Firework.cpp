#include "Firework.h"

Firework::Firework() : Item("fireworks", 401 - 256) {
	
	Item::mItems[401] = this;
	
	setIcon("fireworks", 0);
	setCategory(CreativeItemCategory::MISCELLANEOUS);
	setStackedByData(true);
	
}

const std::string Firework::buildEffectDescriptionName(ItemInstance const& itemInstance) const {
	
	short data = itemInstance.aux;
	
	if(data == 0) return "§7Flight Duration: 1";
	if(data == 1) return "§7Flight Duration: 2";
	if(data == 2) return "§7Flight Duration: 3";
}

bool Firework::use(ItemInstance& itemInstance, Player& player) {
	
	short data = itemInstance.aux;
	
	Mob* mob = (Mob*) &player;
	
	if(mob->getArmor(ArmorSlot(1)) == new ItemInstance(Item::mElytra)) {
		if(mob->isGliding()) {
			if(data == 0) {
				mob->setSpeed(mob->getSpeed() * 2);
			}
			if(data == 1) {
				mob->setSpeed(mob->getSpeed() * 3);
			}
			if(data == 2) {
				mob->setSpeed(mob->getSpeed() * 4);
			}
		}
	}
	
}
