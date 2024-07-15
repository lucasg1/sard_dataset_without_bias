namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int * data);
void FUN3(int * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int * data);
void FUN0(int * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int * data);
void FUN2(int * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int * data)
{
<START>
    free(data);
<END>
}
} 
