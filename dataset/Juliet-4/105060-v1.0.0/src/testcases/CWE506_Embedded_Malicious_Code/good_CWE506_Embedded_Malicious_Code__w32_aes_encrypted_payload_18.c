void FUN0()
{
    goto sink;
sink:
    {
        char * payload = "calc.exe";
        if(system(payload) <= 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
