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
    delete data;
}
void FUN2(long * &data)
{
    data = new long;
    delete data;
}
void FUN3()
{
    long * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
