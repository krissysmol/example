#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

// Define the class here so other files can see it
class MainPanel : public Popup<> {
protected:
    // This is where will build the UI
    bool setup() override;

public:
    // The function call to open the menu
    static MainPanel* create();
};