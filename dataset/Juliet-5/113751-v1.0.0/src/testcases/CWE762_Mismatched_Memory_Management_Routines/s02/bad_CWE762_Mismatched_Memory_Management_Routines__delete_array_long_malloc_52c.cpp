namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
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
void FUN2(long * data)
{
<START>
    delete [] data;
<END>
}
} 
