#include <QtTest>
#include "../myclass.h"

class Test_MyClass : public QObject
{
    Q_OBJECT

public:
    Test_MyClass();

private:


private slots:
    void compare_data();
    void compare();
    void abs();
};

Test_MyClass::Test_MyClass()
{
}

void Test_MyClass::compare_data()
{
    QTest::addColumn<int>("first");
    QTest::addColumn<int>("second");
    QTest::addColumn<bool>("result");

    QTest::newRow("compare_data_1") << 1 << 2 << false;
    QTest::newRow("compare_data_2") << 2 << 1 << false;
    QTest::newRow("compare_data_3") << 1 << 1 << true;
    QTest::newRow("compare_data_4") << 9999 << 9999 << true;

}

void Test_MyClass::compare()
{
    MyClass m;

    QFETCH(int, first);
    QFETCH(int, second);
    QFETCH(bool, result);

    QCOMPARE(m.compare(first, second),result);
}

void Test_MyClass::abs()
{
    MyClass m;
    QCOMPARE(m.abs(1),1);
    QCOMPARE(m.abs(-1),1);
}

QTEST_APPLESS_MAIN(Test_MyClass)

#include "test_myclass.moc"
