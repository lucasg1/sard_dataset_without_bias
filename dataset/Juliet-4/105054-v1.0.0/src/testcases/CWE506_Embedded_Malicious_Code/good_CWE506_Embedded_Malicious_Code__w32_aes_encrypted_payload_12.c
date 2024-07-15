void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
