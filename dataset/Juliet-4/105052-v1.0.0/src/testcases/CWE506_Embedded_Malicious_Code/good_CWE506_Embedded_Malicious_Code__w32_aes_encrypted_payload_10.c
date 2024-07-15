void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * payload = "calc.exe";
            if(system(payload) <= 0)
            {
                printLine("command execution failed!");
                exit(1);
            }
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        {
            char * payload = "calc.exe";
            if(system(payload) <= 0)
            {
                printLine("command execution failed!");
                exit(1);
            }
        }
    }
}
