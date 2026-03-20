#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        // Verify the mod is working in the console
        log::info("Hello from my clean mod!");

        // Show a one-time welcome message
        auto alert = FLAlertLayer::create(
            "Mod Loaded",
            "Your clean template is running!",
            "OK"
        );
        alert->show();

        return true;
    }
};
