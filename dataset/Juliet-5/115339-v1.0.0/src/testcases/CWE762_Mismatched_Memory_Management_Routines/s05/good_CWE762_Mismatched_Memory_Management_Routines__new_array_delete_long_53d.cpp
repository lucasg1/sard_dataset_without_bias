namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN3(long * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    data = new long;
    FUN4(data);
}
void FUN6(long * data);
void FUN7()
{
    long * data;
    data = NULL;
    data = new long[100];
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(long * data);
void FUN4(long * data)
{
    FUN1(data);
}
void FUN3(long * data);
void FUN6(long * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * data)
{
    delete data;
}
void FUN2(long * data)
{
    delete [] data;
}
} 
