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
void FUN3(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
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
