void FUN0()
{
    wchar_t data;
    switch(6)
    {
    case 6:
        data = L'W';
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
