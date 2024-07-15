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
    data = new int64_t;
    delete data;
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(int64_t * data);
void FUN0(int64_t * data)
{
    FUN9(data);
}
void FUN11(int64_t * data);
void FUN2(int64_t * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN9(int64_t * data)
{
    delete data;
}
void FUN11(int64_t * data)
{
    ; 
}
} 
