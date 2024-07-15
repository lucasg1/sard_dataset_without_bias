void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            int i = 0;
            while(i++ < 10)
            {
                printLine("Inside the while statement");
            }
        }
        printLine("Hello from good()");
    }
}
