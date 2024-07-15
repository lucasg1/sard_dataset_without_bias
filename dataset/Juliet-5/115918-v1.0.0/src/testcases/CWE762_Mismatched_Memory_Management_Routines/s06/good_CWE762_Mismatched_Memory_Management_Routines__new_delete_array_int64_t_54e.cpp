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
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int64_t * data);
void FUN6(int64_t * data)
{
    FUN5(data);
}
void FUN7(int64_t * data);
void FUN8(int64_t * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int64_t * data);
void FUN10(int64_t * data)
{
    FUN6(data);
}
void FUN8(int64_t * data);
void FUN12(int64_t * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN10(int64_t * data);
void FUN0(int64_t * data)
{
    FUN10(data);
}
void FUN12(int64_t * data);
void FUN2(int64_t * data)
{
    FUN12(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int64_t * data)
{
    delete [] data;
}
void FUN7(int64_t * data)
{
    delete data;
}
} 
