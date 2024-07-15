void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
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
    goto sink;
sink:
    if( data != 0 )
    {
        printIntLine(100 % data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
void FUN1()
{
    int data;
    data = -1;
    goto source;
source:
    data = 7;
    goto sink;
sink:
    printIntLine(100 % data);
}
