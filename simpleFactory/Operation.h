//
// Created by Qingzi Lan on 7/14/19.
//

#ifndef DESIGNPATTERN_OPERATION_H
#define DESIGNPATTERN_OPERATION_H


class Operation {
public:
    virtual double getResult() = 0;
    void setNumberA(double num);
    double getNumberA();
    void setNumberB(double num);
    double getNumberB();
private:
    double NumberA = 0;
    double NumberB = 0;
};

class OperationAdd : public Operation {
    double getResult() override;
};

class OperationSubtract : public Operation {
    double getResult() override;
};

class OperationMulti : public Operation {
    double getResult() override;
};

class OperationDivide : public Operation {
    double getResult() override;
};
#endif //DESIGNPATTERN_OPERATION_H
