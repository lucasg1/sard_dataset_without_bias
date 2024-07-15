void FUN0()
{
    goto sink;
sink:
    {
        char * decodedPayload = "calc.exe";
        if (system(decodedPayload) <= 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
