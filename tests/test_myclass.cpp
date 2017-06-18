#include <QtTest>
#include "../myclass.h"

// Class for testing class MyClass
class Test_MyClass : public QObject
{
    Q_OBJECT

private slots:
    void compare_data();    // Table input for compare tests
    void compare();         // Tests for compare function
    void abs();             // Tests for abs function
};

void Test_MyClass::compare_data()
{
    // Arguments and return val of compare function
    QTest::addColumn<int>("first");
    QTest::addColumn<int>("second");
    QTest::addColumn<bool>("result");

    // Test table definitions
    QTest::newRow("compare_data_1") << 1 << 2 << false;
    QTest::newRow("compare_data_2") << 2 << 1 << false;
    QTest::newRow("compare_data_3") << 1 << 1 << true;
    QTest::newRow("compare_data_4") << 9999 << 9999 << true;
}

void Test_MyClass::compare()
{
    MyClass m;

    // Fill table with values
    QFETCH(int, first);
    QFETCH(int, second);
    QFETCH(bool, result);

    // Compare inputs/results with table
    QCOMPARE(m.compare(first, second), result);
}

void Test_MyClass::abs()
{
    MyClass m;

    // Direct compare using constants
    QCOMPARE(m.abs(1),1);
    QCOMPARE(m.abs(-1),1);
}

QTEST_APPLESS_MAIN(Test_MyClass)

#include "test_myclass.moc"
