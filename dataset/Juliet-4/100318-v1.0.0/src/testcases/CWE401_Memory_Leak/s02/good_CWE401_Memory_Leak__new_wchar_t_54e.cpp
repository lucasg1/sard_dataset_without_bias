namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    wchar_t VAR1;
    data = &VAR1;
    *data = L'A';
    printHexCharLine((char)*data);
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    *data = L'A';
    printHexCharLine((char)*data);
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN8(wchar_t * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN9(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN7(wchar_t * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN6(data);
}
void FUN8(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN9(wchar_t * data)
{
    ; 
}
void FUN11(wchar_t * data)
{
    delete data;
}
} 
