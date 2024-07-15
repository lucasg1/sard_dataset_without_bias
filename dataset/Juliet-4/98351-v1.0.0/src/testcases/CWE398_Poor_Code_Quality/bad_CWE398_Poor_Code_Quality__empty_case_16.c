void FUN0()
{
    while(1)
    {
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
    }
}
