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
void FUN0(int64_t * data)
{
    FUN4(data);
}
void FUN6(int64_t * data);
void FUN2(int64_t * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN8(int64_t * data);
void FUN9()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    FUN8(data);
}
void FUN10(int64_t * data);
void FUN11()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    FUN10(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int64_t * data);
void FUN8(int64_t * data)
{
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN10(int64_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int64_t * data)
{
    free(data);
}
void FUN6(int64_t * data)
{
    delete data;
}
} 
