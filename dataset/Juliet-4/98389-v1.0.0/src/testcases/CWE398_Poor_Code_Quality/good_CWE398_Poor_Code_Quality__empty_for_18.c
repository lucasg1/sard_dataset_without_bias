void FUN0()
{
    goto sink;
sink:
    {
        int i;
        for (i = 0; i < 10; i++)
        {
            printLine("Inside the for statement");
        }
    }
    printLine("Hello from good()");
}
