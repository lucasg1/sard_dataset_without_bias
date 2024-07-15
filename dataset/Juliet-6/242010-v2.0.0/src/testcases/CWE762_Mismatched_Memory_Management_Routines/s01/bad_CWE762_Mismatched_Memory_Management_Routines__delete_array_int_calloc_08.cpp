static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    int * data;
    data = NULL;
    if(FUN0())
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
<START>
        delete [] data;
<END>
    }
}
} 
