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
        if (doubleNumber > INT_MAX || doubleNumber < INT_MIN)
        {
            printLine("Value is too small or large to be represented as an int");
        }
        else
        {
            printIntLine((int)doubleNumber);
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
        if (doubleNumber > INT_MAX || doubleNumber < INT_MIN)
        {
            printLine("Value is too small or large to be represented as an int");
        }
        else
        {
            printIntLine((int)doubleNumber);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
