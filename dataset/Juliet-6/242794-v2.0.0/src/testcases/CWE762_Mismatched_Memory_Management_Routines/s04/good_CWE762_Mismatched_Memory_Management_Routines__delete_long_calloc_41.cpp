namespace NAMESPACE0
{
void FUN0(long * data)
{
    delete data;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    FUN0(data);
}
void FUN2(long * data)
{
    free(data);
}
void FUN3()
{
    long * data;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    FUN2(data);
}
} 
