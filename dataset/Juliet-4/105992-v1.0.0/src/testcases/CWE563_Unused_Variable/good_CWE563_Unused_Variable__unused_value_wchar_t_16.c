void FUN0()
{
    wchar_t data;
    while(1)
    {
        data = L'W';
        break;
    }
    while(1)
    {
        printf("%02lx\n", data);
        break;
    }
}
void FUN1()
{
    wchar_t data;
    while(1)
    {
        data = L'W';
        printf("%02lx\n", data);
        break;
    }
    while(1)
    {
        data = L'Z';
        printf("%02lx\n", data);
        break;
    }
}
