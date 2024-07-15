void FUN0()
{
    char data;
    switch(6)
    {
    case 6:
        data = 'C';
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
        printHexCharLine(data);
        break;
    }
}
void FUN1()
{
    char data;
    switch(6)
    {
    case 6:
        data = 'C';
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printHexCharLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    char data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 'C';
        printHexCharLine(data);
        break;
    }
    switch(7)
    {
    case 7:
        data = 'Z';
        printHexCharLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    char data;
    switch(6)
    {
    case 6:
        data = 'C';
        printHexCharLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        data = 'Z';
        printHexCharLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
