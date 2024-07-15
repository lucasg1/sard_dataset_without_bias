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
void FUN0(int64_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int64_t * data);
void FUN5(int64_t * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int64_t * data)
{
<START>
<END>
    ; 
}
} 
