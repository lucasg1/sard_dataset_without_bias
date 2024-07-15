void FUN0()
{
    wchar_t data;
    data = L'W';
<START>
    data = L'Z';
<END>
    printf("%02lx\n", data);
}
