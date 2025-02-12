#ifndef CONDITIONALTRANSITION_H
#define CONDITIONALTRANSITION_H

#include <QSignalTransition>
#include <QState>

class ConditionalTransition : public QSignalTransition {
public:
    int *variable;
    int expectedValue;

    ConditionalTransition(QObject *sender, const char *signal, int *var, QState *target);

protected:
    bool eventTest(QEvent *event) override;
};


#endif // CONDITIONALTRANSITION_H
