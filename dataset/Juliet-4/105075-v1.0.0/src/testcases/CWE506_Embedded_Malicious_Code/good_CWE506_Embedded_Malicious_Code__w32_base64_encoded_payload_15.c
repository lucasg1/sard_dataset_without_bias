void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * decodedPayload = "calc.exe";
        if (system(decodedPayload) <= 0)
        {
            printLine("command execution failed!");
            exit(1);
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
        char * decodedPayload = "calc.exe";
        if (system(decodedPayload) <= 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
