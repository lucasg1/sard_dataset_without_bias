namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(TwoIntsClass * data)
{
    free(data);
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(TwoIntsClass * data)
{
    delete data;
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(TwoIntsClass * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data);
};
}
