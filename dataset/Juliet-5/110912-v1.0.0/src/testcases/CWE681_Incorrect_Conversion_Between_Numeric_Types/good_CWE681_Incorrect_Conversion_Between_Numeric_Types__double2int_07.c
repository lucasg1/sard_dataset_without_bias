static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(staticFive==5)
    {
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
    }
}
