namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
}
void FUN1(long * &data)
{
    data = new long[100];
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
    free(data);
}
void FUN1(long * &data);
void FUN5()
{
    long * data;
    data = NULL;
    FUN1(data);
    delete [] data;
}
} 
