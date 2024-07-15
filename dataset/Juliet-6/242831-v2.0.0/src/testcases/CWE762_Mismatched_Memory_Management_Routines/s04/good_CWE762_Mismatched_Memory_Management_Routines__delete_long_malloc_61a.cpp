namespace NAMESPACE0
{
long * FUN0(long * data)
{
    data = new long;
    return data;
}
long * FUN1(long * data)
{
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    return data;
}
} 
namespace NAMESPACE0
{
long * FUN0(long * data);
void FUN3()
{
    long * data;
    data = NULL;
    data = FUN0(data);
    delete data;
}
long * FUN1(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    data = FUN1(data);
    free(data);
}
} 
