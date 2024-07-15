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
void FUN3()
{
    int * data;
    data = NULL;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int * data);
void FUN2(int * data)
{
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
