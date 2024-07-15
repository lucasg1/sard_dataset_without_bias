namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(TwoIntsClass * data) const
{
    free(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(TwoIntsClass * data) const
{
    delete [] data;
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(TwoIntsClass * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data) const;
};
}
