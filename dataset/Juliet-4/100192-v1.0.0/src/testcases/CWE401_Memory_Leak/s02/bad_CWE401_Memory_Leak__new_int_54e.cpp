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
void FUN3(int * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int * data);
void FUN0(int * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int * data)
{
<START>
<END>
    ; 
}
} 
