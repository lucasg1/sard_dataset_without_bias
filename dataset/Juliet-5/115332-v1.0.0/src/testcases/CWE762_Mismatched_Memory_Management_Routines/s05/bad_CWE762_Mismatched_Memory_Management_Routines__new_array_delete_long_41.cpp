namespace NAMESPACE0
{
void FUN0(long * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long[100];
    FUN0(data);
}
} 
