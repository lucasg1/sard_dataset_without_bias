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
void FUN0(int * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int * data);
void FUN3(int * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int * data)
{
    printIntLine(*data);
    delete data;
}
} 
