namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
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
void FUN2(int * data)
{
<START>
    free(data);
<END>
}
} 
