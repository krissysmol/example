#include "mainPanel.hpp"

bool mainPanel::setup() {
    this->setTitle("Macro Panel");

    auto winSize = CCDirector::get()->getWinSize();

    // Add a simple label to the center of the popup
    auto label = CCLabelBMFont::create("Macro System Ready", "bigFont.fnt");
    label->setScale(0.5f);
    label->setPosition(m_mainLayer->getContentSize() / 2);
    m_mainLayer->addChild(label);

    return true;
}

mainPanel* mainPanel::create() {
    auto ret = new mainPanel();
    // 250 is width, 180 is height
    if (ret && ret->initAnchored(250.f, 180.f)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
