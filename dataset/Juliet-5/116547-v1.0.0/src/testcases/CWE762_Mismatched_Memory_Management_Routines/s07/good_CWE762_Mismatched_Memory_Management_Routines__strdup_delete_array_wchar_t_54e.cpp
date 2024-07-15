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
void FUN8(wchar_t * data);
void FUN9()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    FUN8(data);
}
void FUN10(wchar_t * data);
void FUN11()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    FUN10(data);
}
} 
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN8(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN10(wchar_t * data)
{
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
