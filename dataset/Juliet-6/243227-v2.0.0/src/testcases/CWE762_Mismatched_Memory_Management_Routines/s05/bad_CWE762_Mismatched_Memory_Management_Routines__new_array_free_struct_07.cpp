static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new twoIntsStruct[100];
    }
    if(staticFive==5)
    {
<START>
        free(data);
<END>
    }
}
} 
