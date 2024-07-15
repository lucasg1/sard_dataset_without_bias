namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN4(data);
}
void FUN6(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN9()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN11()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data)
{
    delete [] data;
}
void FUN6(wchar_t * data)
{
    free(data);
}
} 
