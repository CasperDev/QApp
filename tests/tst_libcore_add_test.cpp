#include <QTest>

// add necessary includes here
#include "libcore.h"

class Libcore_add_test : public QObject
{
    Q_OBJECT

public:
    Libcore_add_test();
    ~Libcore_add_test() override;

private:
    Libcore core;
private slots:
    void test_case1();
};

Libcore_add_test::Libcore_add_test() {}

Libcore_add_test::~Libcore_add_test() = default;

void Libcore_add_test::test_case1() {
    QCOMPARE(core.add(10,20),30);
}

QTEST_APPLESS_MAIN(Libcore_add_test)

#include "tst_libcore_add_test.moc"
