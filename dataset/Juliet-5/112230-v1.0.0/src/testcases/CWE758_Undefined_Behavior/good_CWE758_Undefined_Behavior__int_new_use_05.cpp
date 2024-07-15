static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
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
