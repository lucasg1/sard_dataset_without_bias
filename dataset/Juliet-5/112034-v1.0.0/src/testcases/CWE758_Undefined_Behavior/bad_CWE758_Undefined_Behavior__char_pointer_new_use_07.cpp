static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFive==5)
    {
        {
            char * * pointer = new char *;
<START>
            char * data = *pointer; 
<END>
            delete pointer;
            printLine(data);
        }
    }
}
} 
