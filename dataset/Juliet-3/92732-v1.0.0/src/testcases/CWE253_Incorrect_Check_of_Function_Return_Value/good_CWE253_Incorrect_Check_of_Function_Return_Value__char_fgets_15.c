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
        printLine("Please enter a string: ");
        if (fgets(data, 100, stdin) == NULL)
        {
            printLine("fgets failed!");
            exit(1);
        }
        printLine(data);
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
        printLine("Please enter a string: ");
        if (fgets(data, 100, stdin) == NULL)
        {
            printLine("fgets failed!");
            exit(1);
        }
        printLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
