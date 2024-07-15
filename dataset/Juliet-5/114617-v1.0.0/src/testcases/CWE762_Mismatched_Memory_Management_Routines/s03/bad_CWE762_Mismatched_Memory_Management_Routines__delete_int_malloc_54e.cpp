namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int * data);
void FUN0(int * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int * data);
void FUN4(int * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int * data)
{
<START>
    delete data;
<END>
}
} 
