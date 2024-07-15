void FUN0()
{
    int data;
    data = 5;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        printIntLine(data);
        break;
    }
}
void FUN1()
{
    int data;
    data = 5;
    switch(6)
    {
    case 6:
        printIntLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
