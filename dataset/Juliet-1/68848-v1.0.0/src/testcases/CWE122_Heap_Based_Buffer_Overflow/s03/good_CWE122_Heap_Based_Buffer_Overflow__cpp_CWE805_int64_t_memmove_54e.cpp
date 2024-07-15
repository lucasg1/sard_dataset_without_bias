namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int64_t * data);
void FUN4(int64_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int64_t * data);
void FUN0(int64_t * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int64_t * data);
void FUN5(int64_t * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 
