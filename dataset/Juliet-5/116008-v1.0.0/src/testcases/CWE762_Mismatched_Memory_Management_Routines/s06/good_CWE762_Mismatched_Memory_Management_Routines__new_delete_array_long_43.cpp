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
    delete [] data;
}
void FUN2(long * &data)
{
    data = new long;
}
void FUN3()
{
    long * data;
    data = NULL;
    FUN2(data);
    delete data;
}
} 
