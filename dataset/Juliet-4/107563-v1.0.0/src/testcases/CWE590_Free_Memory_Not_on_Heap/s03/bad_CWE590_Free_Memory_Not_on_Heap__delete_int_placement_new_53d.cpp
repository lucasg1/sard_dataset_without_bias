namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL; 
    {
        char buffer[sizeof(int)];
        int * dataBuffer = new(buffer) int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
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
void FUN2(int * data)
{
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
