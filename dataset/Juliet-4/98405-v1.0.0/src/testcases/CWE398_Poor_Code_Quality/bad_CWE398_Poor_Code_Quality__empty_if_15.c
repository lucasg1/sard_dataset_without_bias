void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int x;
        x = (rand() % 3);
<START>
        if (x == 0)
<END>
        {
        }
        else
        {
            printLine("Inside the else statement");
        }
    }
    printLine("Hello from bad()");
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
