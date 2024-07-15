namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = new long;
}
void FUN1(long * &data)
{
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
}
} 
namespace NAMESPACE0
{
void FUN0(long * &data);
void FUN3()
{
    long * data;
    data = NULL;
    FUN0(data);
    delete data;
}
void FUN1(long * &data);
void FUN5()
{
    long * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
