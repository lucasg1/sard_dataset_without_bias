namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    FUN0(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(long * data);
void FUN6(long * data)
{
    FUN5(data);
}
void FUN7(long * data);
void FUN8(long * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN6(long * data);
void FUN0(long * data)
{
    FUN6(data);
}
void FUN8(long * data);
void FUN2(long * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN5(long * data)
{
    delete data;
}
void FUN7(long * data)
{
    free(data);
}
} 
