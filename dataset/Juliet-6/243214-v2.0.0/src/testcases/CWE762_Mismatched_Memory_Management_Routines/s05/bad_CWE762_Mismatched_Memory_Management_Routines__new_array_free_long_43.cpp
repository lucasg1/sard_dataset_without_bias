namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = new long[100];
}
void FUN1()
{
    long * data;
    data = NULL;
    FUN0(data);
<START>
    free(data);
<END>
}
} 
