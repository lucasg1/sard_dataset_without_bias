namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int dataCopy)
{
    data = dataCopy;
    data = RAND32();
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    {
        int i;
        int * buffer = new int[10];
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
        delete[] buffer;
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int dataCopy)
{
    data = dataCopy;
    data = 7;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int i;
        int * buffer = new int[10];
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0)
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    NAMESPACE0_FUN0 * VAR3 = new NAMESPACE0_FUN0(data);
    delete VAR3;
}
void FUN1()
{
    int data;
    data = -1;
    NAMESPACE0_FUN1 * VAR4 = new NAMESPACE0_FUN1(data);
    delete VAR4;
}
} 
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
