namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = new int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int * data);
void FUN4(int * data)
{
    FUN3(data);
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
void FUN3(int * data)
{
    printIntLine(*data);
    delete data;
}
} 
