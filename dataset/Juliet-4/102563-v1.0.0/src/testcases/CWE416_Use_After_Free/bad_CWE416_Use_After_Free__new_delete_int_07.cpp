static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticFive==5)
    {
<START>
        printIntLine(*data);
<END>
    }
}
} 
