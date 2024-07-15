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
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN1(int &count);
void FUN5()
{
    int count;
    count = -1;
    FUN1(count);
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
