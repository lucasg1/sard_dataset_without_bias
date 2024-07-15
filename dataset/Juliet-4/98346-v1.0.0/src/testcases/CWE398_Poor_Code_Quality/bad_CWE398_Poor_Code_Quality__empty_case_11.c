void FUN0()
{
    if(globalReturnsTrue())
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
    }
}
