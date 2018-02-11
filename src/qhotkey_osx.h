#ifndef QHOTKEY_OSX_H
#define QHOTKEY_OSX_H

#ifdef Q_OS_OSX
#include "qhotkey.h"
#include "helper.h"
#include <aqua>

struct Qt::QHotkey::PlatformData
{
    // TODO: PLATFORMDATA
};

Qt::QHotkey::~QHotkey()
{
    // TODO: OSX IMPLEMENTATION
}

void Qt::QHotkey::registerHotkey()
{
    qDebug() << _registered;
    if (_registered)
        throw std::runtime_error("This QHotkey instance is already registered!");

    // TODO: OSX IMPLEMENTATION
    _registered = result == 0;
    messageLoop();
}

void Qt::QHotkey::messageLoop() const
{
    // TODO: OSX IMPLEMENTATION
}
#endif // Q_OS_OSX

#endif // QHOTKEY_OSX_H
