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
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
        break;
    }
}
