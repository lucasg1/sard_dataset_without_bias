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
void FUN1(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    data = new long[100];
    FUN1(data);
}
void FUN3(long * data);
void FUN7()
{
    long * data;
    data = NULL;
    data = new long;
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(long * data);
void FUN0(long * data)
{
    FUN9(data);
}
void FUN11(long * data);
void FUN2(long * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN9(long * data)
{
    delete [] data;
}
void FUN11(long * data)
{
    delete data;
}
} 
