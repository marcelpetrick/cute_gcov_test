#include <QtTest/QtTest>

#include "testsuite.h"
#include "calculator.h"

class CalculatorTester : public TestSuite
{
    Q_OBJECT

private slots:
    void testAddition();
    void testSubtraction();
    void testDivision();
};

void CalculatorTester::testAddition()
{
   double result = Calculator::addition(2.5, 2.5);

   QCOMPARE(result, 5.0);
}

void CalculatorTester::testSubtraction()
{
   double result = Calculator::subtraction(2.5, 2.5);

   QCOMPARE(result, 0.0);
}

void CalculatorTester::testDivision()
{
   double result = Calculator::division(2.5, 2.5);

   QCOMPARE(result, 1.0);
}

static CalculatorTester calcInstance;

#include "calculatortester.moc"
