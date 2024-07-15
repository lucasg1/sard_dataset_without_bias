void FUN0()
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
