static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
