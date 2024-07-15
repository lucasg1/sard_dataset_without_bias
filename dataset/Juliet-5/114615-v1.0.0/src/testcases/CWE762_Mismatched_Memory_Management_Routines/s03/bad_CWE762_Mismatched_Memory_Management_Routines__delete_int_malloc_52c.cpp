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
void FUN1(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
    delete data;
<END>
}
} 
