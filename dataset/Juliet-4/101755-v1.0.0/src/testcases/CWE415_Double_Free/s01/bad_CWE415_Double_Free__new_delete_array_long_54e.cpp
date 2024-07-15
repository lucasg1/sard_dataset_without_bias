namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(long * data);
void FUN0(long * data)
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
void FUN1(long * data);
void FUN7()
{
    long * data;
    data = NULL;
    data = new long[100];
    delete [] data;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data)
{
<START>
    delete [] data;
<END>
}
} 
