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
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        printf("%02lx\n", data);
        break;
    }
}
void FUN1()
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
        printf("%02lx\n", data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    wchar_t data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = L'W';
        printf("%02lx\n", data);
        break;
    }
    switch(7)
    {
    case 7:
        data = L'Z';
        printf("%02lx\n", data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    wchar_t data;
    switch(6)
    {
    case 6:
        data = L'W';
        printf("%02lx\n", data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        data = L'Z';
        printf("%02lx\n", data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
