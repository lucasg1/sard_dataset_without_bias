namespace NAMESPACE0
{
void FUN0()
{
    int count;
    count = -1;
    count = 20;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(count);
    delete baseObject;
}
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(count);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int count)
{
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int count)
{
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int count) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int count);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int count);
};
}
