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
            char data;
            data = 5;
            char * pointer = new char;
            *pointer = data; 
            {
                char data = *pointer;
                printHexCharLine(data);
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
            char data;
            data = 5;
            char * pointer = new char;
            *pointer = data; 
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            delete pointer;
        }
    }
}
} 
