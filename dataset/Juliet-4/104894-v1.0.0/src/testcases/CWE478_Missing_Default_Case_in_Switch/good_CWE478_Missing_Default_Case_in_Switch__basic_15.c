void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
