void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            int i;
            for (i = 0; i < 10; i++)
            {
                printLine("Inside the for statement");
            }
        }
        printLine("Hello from good()");
    }
}
