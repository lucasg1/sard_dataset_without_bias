namespace NAMESPACE0
{
void FUN0(long * data)
{
    delete [] data;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long[100];
    FUN0(data);
}
void FUN2(long * data)
{
    delete data;
}
void FUN3()
{
    long * data;
    data = NULL;
    data = new long;
    FUN2(data);
}
} 
