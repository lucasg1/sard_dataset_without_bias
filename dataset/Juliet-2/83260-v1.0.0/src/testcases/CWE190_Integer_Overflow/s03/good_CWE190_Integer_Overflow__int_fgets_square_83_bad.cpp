namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(int dataCopy);
    ~NAMESPACE0_FUN1();
private:
    int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int dataCopy)
{
    data = dataCopy;
    data = 2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int result = data * data;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int dataCopy)
{
    data = dataCopy;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if (abs((long)data) <= (long)sqrt((double)INT_MAX))
    {
        int result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = 0;
    NAMESPACE0_FUN0 VAR4(data);
}
void FUN1()
{
    int data;
    data = 0;
    NAMESPACE0_FUN1 VAR5(data);
}
} 
