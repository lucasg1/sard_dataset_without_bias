void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * decodedPayload = "calc.exe";
            if (system(decodedPayload) <= 0)
            {
                printLine("command execution failed!");
                exit(1);
            }
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            char * decodedPayload = "calc.exe";
            if (system(decodedPayload) <= 0)
            {
                printLine("command execution failed!");
                exit(1);
            }
        }
    }
}
