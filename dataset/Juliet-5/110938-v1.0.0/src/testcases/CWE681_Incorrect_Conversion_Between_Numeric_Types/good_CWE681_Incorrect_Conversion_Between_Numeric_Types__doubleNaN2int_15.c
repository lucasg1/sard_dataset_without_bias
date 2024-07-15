void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        double doubleNumber = 0;
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            doubleNumber = atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
        if (doubleNumber < 0)
        {
            printLine("Value is negative");
        }
        else
        {
            printIntLine((int)(sqrt(doubleNumber)));
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
        char inputBuffer[CHAR_ARRAY_SIZE];
        double doubleNumber = 0;
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            doubleNumber = atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
        if (doubleNumber < 0)
        {
            printLine("Value is negative");
        }
        else
        {
            printIntLine((int)(sqrt(doubleNumber)));
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
