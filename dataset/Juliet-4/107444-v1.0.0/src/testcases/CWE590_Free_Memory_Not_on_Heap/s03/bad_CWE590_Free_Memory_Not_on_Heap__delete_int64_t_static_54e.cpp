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
void FUN3()
{
    int64_t * data;
    data = NULL; 
    {
        static int64_t dataBuffer;
        dataBuffer = 5LL;
        data = &dataBuffer;
    }
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int64_t * data);
void FUN0(int64_t * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int64_t * data);
void FUN2(int64_t * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int64_t * data)
{
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
