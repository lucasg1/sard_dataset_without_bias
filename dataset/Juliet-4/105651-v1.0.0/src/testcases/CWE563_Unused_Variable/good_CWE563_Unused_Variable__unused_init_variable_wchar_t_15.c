void FUN0()
{
    wchar_t data;
    data = L'W';
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        printWcharLine(data);
        break;
    }
}
void FUN1()
{
    wchar_t data;
    data = L'W';
    switch(6)
    {
    case 6:
        printWcharLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
