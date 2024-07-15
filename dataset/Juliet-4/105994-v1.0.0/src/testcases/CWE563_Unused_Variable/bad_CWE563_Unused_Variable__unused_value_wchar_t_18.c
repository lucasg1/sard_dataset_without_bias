void FUN0()
{
    wchar_t data;
    goto source;
source:
    data = L'W';
    goto sink;
sink:
<START>
    data = L'Z';
<END>
    printf("%02lx\n", data);
}
