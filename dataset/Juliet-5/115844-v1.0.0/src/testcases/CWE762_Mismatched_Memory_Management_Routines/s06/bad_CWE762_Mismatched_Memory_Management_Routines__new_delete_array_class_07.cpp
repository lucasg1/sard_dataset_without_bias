static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass;
    }
    if(staticFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
