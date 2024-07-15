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
            int64_t data;
            data = 5LL;
            int64_t * pointer = new int64_t;
            *pointer = data; 
            {
                int64_t data = *pointer;
                printLongLongLine(data);
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
            int64_t data;
            data = 5LL;
            int64_t * pointer = new int64_t;
            *pointer = data; 
            {
                int64_t data = *pointer;
                printLongLongLine(data);
            }
            delete pointer;
        }
    }
}
} 
