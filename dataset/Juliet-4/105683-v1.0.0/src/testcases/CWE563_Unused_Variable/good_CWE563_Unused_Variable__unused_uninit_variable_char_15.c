void FUN0()
{
    char data;
    ; 
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
}
void FUN1()
{
    char data;
    ; 
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
}
