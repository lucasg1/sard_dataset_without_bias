namespace NAMESPACE0
{
void FUN0(wchar_t &data)
{
    data = L'W';
    printf("%02lx\n", data);
}
void FUN1()
{
    wchar_t data;
    FUN0(data);
    data = L'Z';
    printf("%02lx\n", data);
}
void FUN2(wchar_t &data)
{
    data = L'W';
}
void FUN3()
{
    wchar_t data;
    FUN2(data);
    printf("%02lx\n", data);
}
} 
