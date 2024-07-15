namespace NAMESPACE0
{
void FUN0()
{
    wchar_t data;
    wchar_t &dataRef = data;
    data = L'W';
    {
        wchar_t data = dataRef;
<START>
<END>
        ; 
    }
}
} 
