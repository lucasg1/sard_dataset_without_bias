namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1(int64_t * data);
void FUN2()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    FUN0(data);
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    delete data;
}
void FUN1(int64_t * data)
{
    delete [] data;
}
} 
