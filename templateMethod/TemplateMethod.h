//
// Created by Qingzi Lan on 7/23/19.
//

#ifndef DESIGNPATTERN_TEMPLATEMETHOD_H
#define DESIGNPATTERN_TEMPLATEMETHOD_H


class TemplateMethod {
public:
    void doMethod();

private:
    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;
};

class ConcreteMethod1 : public TemplateMethod {
private:
    void PrimitiveOperation1() override;
    void PrimitiveOperation2() override;
};

class ConcreteMethod2 : public TemplateMethod {
private:
    void PrimitiveOperation1() override;
    void PrimitiveOperation2() override;
};


#endif //DESIGNPATTERN_TEMPLATEMETHOD_H
