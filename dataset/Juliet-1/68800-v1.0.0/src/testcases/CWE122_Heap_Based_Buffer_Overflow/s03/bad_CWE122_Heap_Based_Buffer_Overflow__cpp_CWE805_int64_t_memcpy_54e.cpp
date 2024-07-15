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
void FUN1(int64_t * data);
void FUN3(int64_t * data)
{
    FUN1(data);
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
void FUN3(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[50];
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 
