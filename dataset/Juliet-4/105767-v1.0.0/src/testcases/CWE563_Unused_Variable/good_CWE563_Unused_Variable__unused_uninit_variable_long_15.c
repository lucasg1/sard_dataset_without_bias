void FUN0()
{
    long data;
    ; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 5L;
        printLongLine(data);
        break;
    }
}
void FUN1()
{
    long data;
    ; 
    switch(6)
    {
    case 6:
        data = 5L;
        printLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
