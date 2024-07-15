void FUN0()
{
    goto sink;
sink:
    {
        int i = 0;
        while(i++ < 10)
        {
            printLine("Inside the while statement");
        }
    }
    printLine("Hello from good()");
}
