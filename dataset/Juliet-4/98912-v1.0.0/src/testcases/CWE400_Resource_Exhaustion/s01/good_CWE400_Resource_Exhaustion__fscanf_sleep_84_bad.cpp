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
namespace NAMESPACE0
{
void FUN0()
{
    int count;
    count = -1;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(count);
    delete VAR2;
}
void FUN1()
{
    int count;
    count = -1;
    NAMESPACE0_FUN1 * VAR3 = new NAMESPACE0_FUN1(count);
    delete VAR3;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int countCopy)
{
    count = countCopy;
    fscanf(stdin, "%d", &count);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
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
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int countCopy)
{
    count = countCopy;
    count = 20;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
}
