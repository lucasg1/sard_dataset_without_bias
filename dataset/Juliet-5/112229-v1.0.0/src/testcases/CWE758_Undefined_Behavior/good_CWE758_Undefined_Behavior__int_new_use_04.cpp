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
            int data;
            data = 5;
            int * pointer = new int;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
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
            int data;
            data = 5;
            int * pointer = new int;
            *pointer = data; 
            {
                int data = *pointer;
                printIntLine(data);
            }
            delete pointer;
        }
    }
}
} 
