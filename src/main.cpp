#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;
	class $modify(MyMenuLayer, MenuLayer) {
	bool MyLayer::init() {
	// ...
	auto spr = ButtonSprite::create("Hi mom!");
	
	auto btn = CCMenuItemSpriteExtra::create(spr, this, nullptr);
	// some CCMenu*
	menu->addChild(btn);
	
	// ...
	}
};
