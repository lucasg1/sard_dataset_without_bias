namespace NAMESPACE0
{
void FUN0()
{
    wchar_t data;
    wchar_t &dataRef = data;
    data = L'W';
    printf("%02lx\n", data);
    {
        wchar_t data = dataRef;
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN1()
{
    wchar_t data;
    wchar_t &dataRef = data;
    data = L'W';
    {
        wchar_t data = dataRef;
        printf("%02lx\n", data);
    }
}
} 
