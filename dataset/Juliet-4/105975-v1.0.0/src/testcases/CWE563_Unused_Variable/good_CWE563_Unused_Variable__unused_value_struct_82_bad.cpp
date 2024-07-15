namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    twoIntsStruct data;
    data.intOne = 0;
    data.intTwo = 0;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(twoIntsStruct data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(twoIntsStruct data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(twoIntsStruct data)
{
    data.intOne = 1;
    data.intTwo = 1;
    printStructLine(&data);
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(twoIntsStruct data)
{
    printStructLine(&data);
}
}
