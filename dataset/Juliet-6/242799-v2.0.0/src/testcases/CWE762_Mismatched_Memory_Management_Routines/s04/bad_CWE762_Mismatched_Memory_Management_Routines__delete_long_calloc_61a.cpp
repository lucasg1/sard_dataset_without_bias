namespace NAMESPACE0
{
long * FUN0(long * data)
{
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    return data;
}
} 
namespace NAMESPACE0
{
long * FUN0(long * data);
void FUN2()
{
    long * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete data;
<END>
}
} 
