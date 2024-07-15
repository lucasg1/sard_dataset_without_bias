void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
