void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int x = (rand() % 3);
            switch (x)
            {
            case 0:
                printLine("Inside the case statement");
                break;
            }
        }
        printLine("Hello from good()");
    }
}
void FUN1()
{
    if(1)
    {
        {
            int x = (rand() % 3);
            switch (x)
            {
            case 0:
                printLine("Inside the case statement");
                break;
            }
        }
        printLine("Hello from good()");
    }
}
