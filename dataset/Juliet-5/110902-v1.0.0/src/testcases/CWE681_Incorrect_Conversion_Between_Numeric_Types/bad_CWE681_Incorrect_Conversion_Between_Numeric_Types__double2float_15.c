void FUN0()
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
<START>
        printFloatLine((float)doubleNumber);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
