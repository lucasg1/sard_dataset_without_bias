void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        if (scanf("%99s\0", data) == EOF)
        {
            printLine("scanf failed!");
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
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        if (scanf("%99s\0", data) == EOF)
        {
            printLine("scanf failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
