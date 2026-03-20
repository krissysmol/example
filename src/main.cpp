#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	//init function, if called return
    bool init() {
        if (!MenuLayer::init()) return false; // Not initialized

        // Verify the mod is working in the console
        log::info("Example Mod: The mod is working."); //send into the log files

        // Show a one-time welcome message
        auto alert = FLAlertLayer::create(
            "Mod Loaded",
            "Your clean template is running!",
            "OK"
        ); //this is just a variable, nothing to be scared about...
        alert->show(); // the remote with modifier of the variable, show means showing it basically.

        return true; // Initialized
    }
};
