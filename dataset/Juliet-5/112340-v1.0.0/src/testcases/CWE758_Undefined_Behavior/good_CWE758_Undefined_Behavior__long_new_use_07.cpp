static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            long data;
            data = 5L;
            long * pointer = new long;
            *pointer = data; 
            {
                long data = *pointer;
                printLongLine(data);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(staticFive==5)
    {
        {
            long data;
            data = 5L;
            long * pointer = new long;
            *pointer = data; 
            {
                long data = *pointer;
                printLongLine(data);
            }
            delete pointer;
        }
    }
}
} 
