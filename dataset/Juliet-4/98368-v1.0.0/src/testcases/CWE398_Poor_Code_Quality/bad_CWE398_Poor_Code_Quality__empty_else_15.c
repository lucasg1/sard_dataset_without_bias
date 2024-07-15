void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int x;
        x = (rand() % 3);
        if (x == 0)
        {
            printLine("Inside the else statement");
        }
<START>
        else
<END>
        {
        }
    }
    printLine("Hello from bad()");
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
