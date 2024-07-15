namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3(int64_t * data)
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
    data = new int64_t;
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    delete data;
}
void FUN2(int64_t * data)
{
    free(data);
}
} 
