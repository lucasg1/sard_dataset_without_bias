static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
