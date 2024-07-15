static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
<START>
        delete data;
<END>
    }
}
} 
