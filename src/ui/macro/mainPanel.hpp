#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

// We define the class here so other files can see it
class MainPanel : public Popup<> {
protected:
    // This is where we will build the UI
    bool setup() override;

public:
    // The function we call to open the menu
    static MainPanel* create();
};