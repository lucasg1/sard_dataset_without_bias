void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int intRand = rand();
        if(intRand == 5)
        {
            printLine("i was 5");
        }
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
        int intRand = rand();
        if(intRand == 5)
        {
            printLine("i was 5");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
