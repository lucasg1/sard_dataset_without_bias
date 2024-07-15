void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
