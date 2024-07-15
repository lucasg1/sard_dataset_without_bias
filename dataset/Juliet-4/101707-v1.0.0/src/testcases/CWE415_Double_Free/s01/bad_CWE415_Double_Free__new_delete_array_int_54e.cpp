namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    delete [] data;
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
void FUN4(int * data);
void FUN2(int * data)
{
    FUN4(data);
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
void FUN4(int * data)
{
<START>
    delete [] data;
<END>
}
} 
