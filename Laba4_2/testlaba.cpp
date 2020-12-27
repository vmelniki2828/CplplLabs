#include "testlaba.h"
#include "questionlaba.h"
#include <vector>
#include <iostream>
TestLaba::TestLaba()
{
    andirs[0] = "D:\\test\\Answers\\Answer1.txt";
    andirs[1] = "D:\\test\\Answers\\Answer2.txt";
    andirs[2] = "D:\\test\\Answers\\Answer3.txt";
    andirs[3] = "D:\\test\\Answers\\Answer4.txt";
    andirs[4] = "D:\\test\\Answers\\Answer5.txt";

    questdirs[0] = "D:\\test\\Questions\\Question1.txt";
    questdirs[1] = "D:\\test\\Questions\\Question2.txt";
    questdirs[2] = "D:\\test\\Questions\\Question3.txt";
    questdirs[3] = "D:\\test\\Questions\\Question4.txt";
    questdirs[4] = "D:\\test\\Questions\\Question5.txt";

    resdir = "D:\\test\\Resault.txt";
}

QString andirs[5];
QString questdirs[5];
QString resdir;
Tsreader filetest;
QuestionLaba Question;
void TestLaba :: TestReadQuestion(QString andir, QString quesdir){
    Question = QuestionLaba();
    Question.Answer = filetest.ReadQuestion(andir);
    Question.Questionq = filetest.ReadQuestion(quesdir);
}

QString TestLaba :: TestReadResault(QString dir){
    return filetest.ReadResault(dir);
}

void TestLaba :: TestSaveResault(QString dir, QString rez){
    filetest.SaveResault(dir,rez);
}

