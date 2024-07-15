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
    int64_t * data;
    data = NULL;
    if(FUN0())
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
<START>
        delete data;
<END>
    }
}
} 
