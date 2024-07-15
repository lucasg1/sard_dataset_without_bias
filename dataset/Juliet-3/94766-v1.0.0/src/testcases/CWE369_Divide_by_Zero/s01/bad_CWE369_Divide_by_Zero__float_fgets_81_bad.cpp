namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(float data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(float data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    float data;
    data = 0.0F;
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = (float)atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(float data) const
{
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
}
