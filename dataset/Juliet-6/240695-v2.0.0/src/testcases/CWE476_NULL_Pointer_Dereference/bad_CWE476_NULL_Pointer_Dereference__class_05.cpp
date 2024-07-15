static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
    {
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
} 
