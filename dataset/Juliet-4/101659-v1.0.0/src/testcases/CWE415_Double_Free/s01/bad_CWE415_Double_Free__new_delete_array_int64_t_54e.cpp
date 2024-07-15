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
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    delete [] data;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int64_t * data);
void FUN2(int64_t * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int64_t * data)
{
<START>
    delete [] data;
<END>
}
} 
