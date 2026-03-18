#include <Geode/Geode.hpp> // The "Everything" file. Gives you access to Geode tools.
#include <Geode/modify/MenuLayer.hpp> // Tells Geode we want to change the Main Menu.

using namespace geode::prelude; // Saves you from typing 'geode::' before every command.

// This line tells Geode: "I want to add my own logic to the MenuLayer class."
class $modify(MenuLayer) {
    
    // 'init' is the function that runs when the menu is first created.
    bool init() {
        // First, we let the REAL game run its original init code.
        // If the game fails to load the menu, we stop here.
        if (!MenuLayer::init()) return false;
        
        // This sends a message to the internal console (Logcat/DevTools).
        log::info("Hello from Acode and GitHub Actions!");
        
        // Return true so the game knows the menu loaded successfully.
        return true;
    }
};
