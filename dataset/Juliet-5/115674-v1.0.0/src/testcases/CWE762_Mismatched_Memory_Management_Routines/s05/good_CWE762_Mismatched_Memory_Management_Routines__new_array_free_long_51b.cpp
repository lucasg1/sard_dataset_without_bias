namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1(long * data);
void FUN2()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    FUN0(data);
}
void FUN3()
{
    long * data;
    data = NULL;
    data = new long[100];
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * data)
{
    free(data);
}
void FUN1(long * data)
{
    delete [] data;
}
} 
