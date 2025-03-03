#include <QStateMachine>
#include <QState>
#include <QSignalTransition>
#include <QDebug>

#include "ConditionalTransition.h"

ConditionalTransition::ConditionalTransition(QObject *sender, const char *signal, int *var, int value, QState *target)
    : QSignalTransition(sender, signal), variable(var), expectedValue(value) {
    setTargetState(target);
}

bool ConditionalTransition::eventTest(QEvent *event) {
    return QSignalTransition::eventTest(event) && (*variable == expectedValue);
}



