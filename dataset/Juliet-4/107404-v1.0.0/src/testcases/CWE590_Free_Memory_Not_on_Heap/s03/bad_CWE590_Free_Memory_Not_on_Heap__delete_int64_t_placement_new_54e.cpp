namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int64_t * data);
void FUN3(int64_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int64_t * data);
void FUN0(int64_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL; 
    {
        char buffer[sizeof(int64_t)];
        int64_t * dataBuffer = new(buffer) int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int64_t * data)
{
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
