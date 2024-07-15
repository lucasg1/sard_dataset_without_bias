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
void FUN5(int64_t * data)
{
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN7(int64_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int64_t * data);
void FUN9()
{
    int64_t * data;
    data = NULL;
    int64_t VAR3[100];
    data = VAR3;
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN5(data);
}
void FUN7(int64_t * data);
void FUN11()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    ; 
}
void FUN2(int64_t * data)
{
    delete[] data;
}
} 
