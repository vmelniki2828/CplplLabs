#ifndef TESTLABA_H
#define TESTLABA_H
#include <vector>
#include <questionlaba.h>
#include <QString>
#include <tsreader.h>

class TestLaba
{
public:
    Tsreader filetest;
    TestLaba();
    QuestionLaba Question;
    QString andirs[5];
    QString questdirs[5];
    void TestReadQuestion(QString andir, QString quesdir);
    QString TestReadResault(QString dir);
    QString resdir;
    void TestSaveResault(QString dir, QString rez);
};



#endif // TESTLABA_H
