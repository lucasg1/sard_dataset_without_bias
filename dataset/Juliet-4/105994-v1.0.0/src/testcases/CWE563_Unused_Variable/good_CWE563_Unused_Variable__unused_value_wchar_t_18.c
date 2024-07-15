void FUN0()
{
    wchar_t data;
    goto source;
source:
    data = L'W';
    goto sink;
sink:
    printf("%02lx\n", data);
}
void FUN1()
{
    wchar_t data;
    goto source;
source:
    data = L'W';
    printf("%02lx\n", data);
    goto sink;
sink:
    data = L'Z';
    printf("%02lx\n", data);
}
