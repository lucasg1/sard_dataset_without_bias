void FUN0()
{
    wchar_t data;
    ; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = L'W';
        printWcharLine(data);
        break;
    }
}
void FUN1()
{
    wchar_t data;
    ; 
    switch(6)
    {
    case 6:
        data = L'W';
        printWcharLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
