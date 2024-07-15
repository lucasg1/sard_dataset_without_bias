static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
