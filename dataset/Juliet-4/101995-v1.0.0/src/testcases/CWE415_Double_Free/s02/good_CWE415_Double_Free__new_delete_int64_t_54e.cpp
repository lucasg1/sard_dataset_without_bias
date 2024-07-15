namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    delete data;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int64_t * data);
void FUN0(int64_t * data)
{
    FUN5(data);
}
void FUN7(int64_t * data);
void FUN2(int64_t * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN9(int64_t * data);
void FUN5(int64_t * data)
{
    FUN9(data);
}
void FUN11(int64_t * data);
void FUN7(int64_t * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN13(int64_t * data);
void FUN9(int64_t * data)
{
    FUN13(data);
}
void FUN15(int64_t * data);
void FUN11(int64_t * data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(int64_t * data)
{
    delete data;
}
void FUN15(int64_t * data)
{
    ; 
}
} 
