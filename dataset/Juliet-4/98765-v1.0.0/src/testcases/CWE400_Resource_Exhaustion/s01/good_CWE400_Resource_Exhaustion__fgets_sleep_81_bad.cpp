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
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int count) const
{
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int count) const
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
