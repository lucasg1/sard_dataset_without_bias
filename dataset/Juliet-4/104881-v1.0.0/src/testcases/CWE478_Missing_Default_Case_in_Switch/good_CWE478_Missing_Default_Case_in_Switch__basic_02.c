void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
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
            default:
                return;
            }
            printLine(charString);
        }
    }
}
void FUN1()
{
    if(1)
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
            default:
                return;
            }
            printLine(charString);
        }
    }
}
