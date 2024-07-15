namespace NAMESPACE0
{
void FUN0(int &count)
{
    count = 20;
}
void FUN1(int &count)
{
    count = RAND32();
}
} 
namespace NAMESPACE0
{
void FUN0(int &count);
void FUN3()
{
    int count;
    count = -1;
    FUN0(count);
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN1(int &count);
void FUN5()
{
    int count;
    count = -1;
    FUN1(count);
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
