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
    delete [] data;
}
static long * FUN2(long * data)
{
    data = new long;
    return data;
}
void FUN3()
{
    long * data;
    data = NULL;
    data = FUN2(data);
    delete data;
}
} 
