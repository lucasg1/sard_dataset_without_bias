namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(struct _twoIntsStruct * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(struct _twoIntsStruct * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(struct _twoIntsStruct * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(struct _twoIntsStruct * data) const
{
    free(data);
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(struct _twoIntsStruct * data) const
{
    ; 
}
}
