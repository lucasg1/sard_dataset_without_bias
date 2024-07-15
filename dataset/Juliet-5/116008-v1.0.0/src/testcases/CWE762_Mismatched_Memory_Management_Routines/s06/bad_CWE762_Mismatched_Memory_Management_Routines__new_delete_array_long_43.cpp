namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = new long;
}
void FUN1()
{
    long * data;
    data = NULL;
    FUN0(data);
<START>
    delete [] data;
<END>
}
} 
