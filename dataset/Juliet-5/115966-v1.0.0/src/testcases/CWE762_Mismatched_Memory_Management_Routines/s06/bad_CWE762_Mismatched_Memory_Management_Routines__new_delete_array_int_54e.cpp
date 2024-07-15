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
    data = new int;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int * data);
void FUN0(int * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int * data);
void FUN4(int * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int * data)
{
<START>
    delete [] data;
<END>
}
} 
