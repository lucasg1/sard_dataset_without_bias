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
    {
        size_t i = 0;
        if (count > 0 && count <= 20)
        {
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int count)
{
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
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
