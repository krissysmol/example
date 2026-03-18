#


#include <Geode/Geode.hpp> // The "Everything" file. Gives you access to Geode tools.
#include <Geode/modify/MenuLayer.hpp> // Tells Geode we want to change the Main Menu.

using namespace geode::prelude; // Saves you from typing 'geode::' before every command.

// This line tells Geode: "I want to add my own logic to the MenuLayer class."
class $modify(MyMenuClass, MenuLayer) {
    
    // 'init' is the function that runs when the menu is first created.
bool init() {
    if (!MenuLayer::init()) return false;

    // We use a "lambda" (a tiny function) to run the alert later
    this->scheduleOnce(schedule_selector(MyMenuClass::showMyAlert), 0.5f);

    return true;
}

// We need to define this function inside your $modify(MenuLayer) class
void showMyAlert(float dt) {
    auto alert = FLAlertLayer::create(
        "Acode Success!", 
        "My mod is working and staying open!", 
        "OK"
    );
    alert->show();
}

    void onMoreGames(CCObject* target) {
        FLAlertLayer::create(
            "Geode",
            "Hello World from my Custom Mod!",
            "OK"
        )->show(); 
    };
    
    return true;

};
