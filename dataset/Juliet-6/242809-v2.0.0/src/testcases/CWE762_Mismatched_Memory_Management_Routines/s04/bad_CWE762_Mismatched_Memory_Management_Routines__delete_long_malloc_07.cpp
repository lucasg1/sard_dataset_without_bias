static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
<START>
        delete data;
<END>
    }
}
} 
