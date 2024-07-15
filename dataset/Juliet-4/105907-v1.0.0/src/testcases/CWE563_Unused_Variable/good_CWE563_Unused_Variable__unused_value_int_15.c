void FUN0()
{
    int data;
    switch(6)
    {
    case 6:
        data = 5;
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
        printIntLine(data);
        break;
    }
}
void FUN1()
{
    int data;
    switch(6)
    {
    case 6:
        data = 5;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printIntLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    int data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 5;
        printIntLine(data);
        break;
    }
    switch(7)
    {
    case 7:
        data = 10;
        printIntLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int data;
    switch(6)
    {
    case 6:
        data = 5;
        printIntLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        data = 10;
        printIntLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
