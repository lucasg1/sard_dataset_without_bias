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
void FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN7()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN13(wchar_t * data);
void FUN9(wchar_t * data)
{
    FUN13(data);
}
void FUN15(wchar_t * data);
void FUN11(wchar_t * data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(wchar_t * data)
{
    delete data;
}
void FUN15(wchar_t * data)
{
    delete [] data;
}
} 
