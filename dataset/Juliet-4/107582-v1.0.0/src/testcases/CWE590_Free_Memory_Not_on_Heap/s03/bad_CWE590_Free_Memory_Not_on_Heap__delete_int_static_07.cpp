static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    if(staticFive==5)
    {
        {
            static int dataBuffer;
            dataBuffer = 5;
            data = &dataBuffer;
        }
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
