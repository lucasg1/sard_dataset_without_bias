static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
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
