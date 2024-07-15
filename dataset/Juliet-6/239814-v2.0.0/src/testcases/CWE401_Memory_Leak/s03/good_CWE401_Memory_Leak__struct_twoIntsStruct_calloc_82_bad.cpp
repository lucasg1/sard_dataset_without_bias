namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(struct _twoIntsStruct * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(struct _twoIntsStruct * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(struct _twoIntsStruct * data);
};
}
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(struct _twoIntsStruct * data)
{
    ; 
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(struct _twoIntsStruct * data)
{
    free(data);
}
}
