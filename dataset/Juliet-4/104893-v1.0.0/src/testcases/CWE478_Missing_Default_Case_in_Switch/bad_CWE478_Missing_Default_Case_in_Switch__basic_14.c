void FUN0()
{
    if(globalFive==5)
    {
        {
            const char *charString = "shouldn\'t see this value";
            int x;
            x = (rand() % 3);
            switch (x)
            {
            case 0:
                charString = "0";
                break;
            case 1:
                charString = "1";
                break;
<START>
            }
<END>
            printLine(charString);
        }
    }
}
