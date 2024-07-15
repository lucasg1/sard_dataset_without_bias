void FUN0()
{
    char data;
    data = 'C';
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        printHexCharLine(data);
        break;
    }
}
void FUN1()
{
    char data;
    data = 'C';
    switch(6)
    {
    case 6:
        printHexCharLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
