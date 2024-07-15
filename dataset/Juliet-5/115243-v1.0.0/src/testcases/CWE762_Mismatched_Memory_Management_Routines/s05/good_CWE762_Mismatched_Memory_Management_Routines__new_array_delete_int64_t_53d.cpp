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
void FUN4(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    FUN4(data);
}
void FUN6(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int64_t * data);
void FUN4(int64_t * data)
{
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN6(int64_t * data)
{
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
    delete [] data;
}
} 
