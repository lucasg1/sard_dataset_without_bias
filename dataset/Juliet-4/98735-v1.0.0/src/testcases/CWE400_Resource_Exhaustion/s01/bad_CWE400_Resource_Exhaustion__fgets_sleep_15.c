void FUN0()
{
    int count;
    count = -1;
    switch(6)
    {
    case 6:
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            count = atoi(inputBuffer);
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
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
