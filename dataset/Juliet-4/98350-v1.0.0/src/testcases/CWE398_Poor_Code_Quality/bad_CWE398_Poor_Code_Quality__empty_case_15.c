void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int x = (rand() % 3);
        switch (x)
        {
<START>
        case 0:
<END>
            break;
        }
    }
    printLine("Hello from bad()");
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
