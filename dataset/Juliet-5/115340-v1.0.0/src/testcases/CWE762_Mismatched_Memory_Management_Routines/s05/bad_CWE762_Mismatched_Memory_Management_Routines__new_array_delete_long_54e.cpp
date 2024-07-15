namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long[100];
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(long * data);
void FUN3(long * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data);
void FUN2(long * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(long * data);
void FUN0(long * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data)
{
<START>
    delete data;
<END>
}
} 
