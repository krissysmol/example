#


#include <Geode/Geode.hpp> // The "Everything" file. Gives you access to Geode tools.
#include <Geode/modify/MenuLayer.hpp> // Tells Geode we want to change the Main Menu.

using namespace geode::prelude; // Saves you from typing 'geode::' before every command.

// This line tells Geode: "I want to add my own logic to the MenuLayer class."
class $modify(MenuLayer) {
    
    // 'init' is the function that runs when the menu is first created.
bool init() {
    if (!MenuLayer::init()) return false;

    // This creates a popup box right on your screen!
    auto alert = FLAlertLayer::create(
        "Acode Success!",    // Title
        "My mod is working!", // Message
        "OK"                 // Button text
    );
    alert->show();

    return true;
}

};
