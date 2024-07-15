void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
