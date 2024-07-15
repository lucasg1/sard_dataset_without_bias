namespace NAMESPACE0
{
static long * FUN0(long * data)
{
    data = new long[100];
    return data;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
} 
