void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int VAR0 = 0;
        printIntLine(VAR0);
        VAR0 = 5;
        printIntLine(VAR0);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int VAR0 = 0;
        printIntLine(VAR0);
        VAR0 = 5;
        printIntLine(VAR0);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
