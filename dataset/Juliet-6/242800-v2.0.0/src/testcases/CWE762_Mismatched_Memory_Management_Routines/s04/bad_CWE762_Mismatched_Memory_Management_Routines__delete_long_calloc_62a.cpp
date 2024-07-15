namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
}
} 
namespace NAMESPACE0
{
void FUN0(long * &data);
void FUN2()
{
    long * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
