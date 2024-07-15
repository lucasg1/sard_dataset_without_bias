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
void FUN4(int * data);
void FUN0(int * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int * data);
void FUN7()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = new int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int * data)
{
    printIntLine(*data);
    delete data;
}
} 
