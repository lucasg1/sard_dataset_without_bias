namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    FUN0(data);
<START>
    printWLine(data);
<END>
}
} 
