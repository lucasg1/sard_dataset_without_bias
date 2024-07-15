namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int countCopy)
{
    count = countCopy;
    fscanf(stdin, "%d", &count);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
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
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int countCopy)
{
    count = countCopy;
    count = 20;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
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
    NAMESPACE0_FUN0 * VAR3 = new NAMESPACE0_FUN0(count);
    delete VAR3;
}
void FUN1()
{
    int count;
    count = -1;
    NAMESPACE0_FUN1 * VAR4 = new NAMESPACE0_FUN1(count);
    delete VAR4;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int countCopy);
    ~NAMESPACE0_FUN0();
private:
    int count;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(int countCopy);
    ~NAMESPACE0_FUN1();
private:
    int count;
};
}
