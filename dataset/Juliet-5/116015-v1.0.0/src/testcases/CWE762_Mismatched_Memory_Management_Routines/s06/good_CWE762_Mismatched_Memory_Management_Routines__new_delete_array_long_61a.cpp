namespace NAMESPACE0
{
long * FUN0(long * data)
{
    data = new long[100];
    return data;
}
long * FUN1(long * data)
{
    data = new long;
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
    delete [] data;
}
long * FUN1(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    data = FUN1(data);
    delete data;
}
} 
