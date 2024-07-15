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
void FUN1(long * data);
void FUN3(long * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(long * data);
void FUN4(long * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * data)
{
<START>
    delete [] data;
<END>
}
} 
