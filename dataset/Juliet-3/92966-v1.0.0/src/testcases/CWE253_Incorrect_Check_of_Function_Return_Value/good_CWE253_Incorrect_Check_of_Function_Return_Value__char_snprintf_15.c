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
        if (SNPRINTF(data,100-strlen(SRC_STRING)-1, "%s\n", SRC_STRING) < 0)
        {
            printLine("snprintf failed!");
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
        if (SNPRINTF(data,100-strlen(SRC_STRING)-1, "%s\n", SRC_STRING) < 0)
        {
            printLine("snprintf failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
