#include "ConditionalTransition.h"

class ConditionalTransition : public QSignalTransition {
public:
    int *variable;
    int expectedValue;

    ConditionalTransition(QObject *sender, const char *signal, int *var, QState *target)
        : QSignalTransition(sender, signal), variable(var), expectedValue(value) {
        setTargetState(target);
    }

protected:
    bool eventTest(QEvent *event) override {
        return QSignalTransition::eventTest(event) && (*variable == expectedValue);
    }
};

