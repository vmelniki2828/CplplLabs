#include "questionlaba.h"

QString Questionq;
QString Answer;

QuestionLaba::QuestionLaba()
{

}

bool QuestionLaba :: SetAnswer(QString answer){
    if(Answer == answer){
        return true;
    }else{
        return false;
    }
}

