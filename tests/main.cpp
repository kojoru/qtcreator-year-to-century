#include <converter.h>

#include <QString>
#include <QtTest>

class TestClass : public QObject
{
    Q_OBJECT

public:
    TestClass();

private Q_SLOTS:
    void yearToCentury_2000_returns20();
    void yearToCentury_2001_returns21();
};

TestClass::TestClass()
{
}

void TestClass::yearToCentury_2000_returns20()
{
    Converter* x = new Converter();

    QCOMPARE(x->yearToCentury(2000), 20);
}

void TestClass::yearToCentury_2001_returns21()
{
    Converter* x = new Converter();

    QCOMPARE(x->yearToCentury(2001), 21);
}

QTEST_APPLESS_MAIN(TestClass)

#include "main.moc"
