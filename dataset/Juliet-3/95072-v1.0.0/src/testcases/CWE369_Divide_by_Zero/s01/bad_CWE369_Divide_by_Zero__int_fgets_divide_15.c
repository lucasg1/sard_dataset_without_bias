void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printIntLine(100 / data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
