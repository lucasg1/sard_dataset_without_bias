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
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    FUN4(data);
}
void FUN6(wchar_t * data);
void FUN7()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    delete [] data;
}
void FUN2(wchar_t * data)
{
    free(data);
}
} 
