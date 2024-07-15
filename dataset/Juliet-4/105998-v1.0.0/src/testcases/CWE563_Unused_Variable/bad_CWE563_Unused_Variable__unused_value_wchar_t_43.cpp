namespace NAMESPACE0
{
void FUN0(wchar_t &data)
{
    data = L'W';
}
void FUN1()
{
    wchar_t data;
    FUN0(data);
<START>
    data = L'Z';
<END>
    printf("%02lx\n", data);
}
} 
