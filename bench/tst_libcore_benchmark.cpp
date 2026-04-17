#include <QTest>

// add necessary includes here
#include "libcore.h"

class Libcore_benchmark : public QObject
{
    Q_OBJECT

public:
    Libcore_benchmark();
    ~Libcore_benchmark() override;

private:
    Libcore core;

private slots:
    void benchmark_add_case();
};

Libcore_benchmark::Libcore_benchmark() {}

Libcore_benchmark::~Libcore_benchmark() = default;

void Libcore_benchmark::benchmark_add_case() {
    QBENCHMARK(core.add(17,3));
}

QTEST_APPLESS_MAIN(Libcore_benchmark)

#include "tst_libcore_benchmark.moc"
