namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int count) const
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
void NAMESPACE0_FUN0::action(int count) const
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
void FUN0()
{
    int count;
    count = -1;
    count = 20;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(count);
}
void FUN1()
{
    int count;
    count = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(count);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int count) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int count) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int count) const;
};
}
