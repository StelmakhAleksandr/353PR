TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        sorthelper.cpp \
        strategy/behavior/fly/flyBehavior.cpp \
        strategy/behavior/fly/noFlyBehavior.cpp \
        strategy/behavior/fly/normalFlyBehavior.cpp \
        strategy/behavior/quack/exoticQuackBehavior.cpp \
        strategy/behavior/quack/noQuackBehavior.cpp \
        strategy/behavior/quack/normalQuackBehavior.cpp \
        strategy/behavior/quack/quackBehavior.cpp \
        strategy/duck.cpp \
        strategy/exoticDuck.cpp \
        strategy/flyDuck.cpp \
        strategy/lake.cpp \
        strategy/normalDuck.cpp \
        strategy/woodenDuck.cpp \
        timer.cpp

HEADERS += \
    sorthelper.h \
    strategy/behavior/fly/flyBehavior.h \
    strategy/behavior/fly/noFlyBehavior.h \
    strategy/behavior/fly/normalFlyBehavior.h \
    strategy/behavior/quack/exoticQuackBehavior.h \
    strategy/behavior/quack/noQuackBehavior.h \
    strategy/behavior/quack/normalQuackBehavior.h \
    strategy/behavior/quack/quackBehavior.h \
    strategy/duck.h \
    strategy/exoticDuck.h \
    strategy/flyDuck.h \
    strategy/lake.h \
    strategy/normalDuck.h \
    strategy/woodenDuck.h \
    timer.h
