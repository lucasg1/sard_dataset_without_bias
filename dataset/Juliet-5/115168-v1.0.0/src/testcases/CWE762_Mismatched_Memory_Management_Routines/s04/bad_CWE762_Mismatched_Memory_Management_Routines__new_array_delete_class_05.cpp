static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = new TwoIntsClass[100];
    }
    if(staticTrue)
    {
<START>
        delete data;
<END>
    }
}
} 
