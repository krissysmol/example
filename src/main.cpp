#include <Geode/Geode.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include "ui/macro/MainPanel.hpp" // <--- IMPORTANT: Include your new header!

using namespace geode::prelude;

class $modify(MyPauseLayer, PauseLayer) {
    void onMacroBtn(CCObject* sender) {
        // Now just call the custom class
        MainPanel::create()->show();
    }

    bool init() {
        if (!PauseLayer::init()) return false;

        auto menu = this->getChildByID("left-button-menu");
        if (menu) {
            auto btnSprite = CCSprite::createWithSpriteFrameName("GJ_plainBtn_001.png");
            auto btn = CCMenuItemSpriteExtra::create(
                btnSprite, this, menu_selector(MyPauseLayer::onMacroBtn)
            );
            menu->addChild(btn);
            menu->updateLayout();
        }
        return true;
    }
};
