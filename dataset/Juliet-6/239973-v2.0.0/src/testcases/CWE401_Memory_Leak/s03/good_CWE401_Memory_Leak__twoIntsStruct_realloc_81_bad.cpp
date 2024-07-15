namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(twoIntsStruct * data) const
{
    free(data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(twoIntsStruct * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(twoIntsStruct * data) const
{
    ; 
}
}
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
