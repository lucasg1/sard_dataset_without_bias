namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(wchar_t * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
} 
