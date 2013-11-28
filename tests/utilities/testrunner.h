#ifndef TESTRUNNER_H
#define TESTRUNNER_H

#include <QObject>
#include <QList>
#include "test.h"

class TestRunner : public QObject
{
    Q_OBJECT
public:
    explicit TestRunner(QObject *parent = 0);
    ~TestRunner();

    void start();

    void setName(const char *name){this->name = name;}
signals:
    
public slots:
    void run();

private:
    QList<Test*> tests;
    const char *name;
};

#endif // TESTRUNNER_H