namespace NAMESPACE0
{
static long * FUN0(long * data)
{
    data = new long;
    return data;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
