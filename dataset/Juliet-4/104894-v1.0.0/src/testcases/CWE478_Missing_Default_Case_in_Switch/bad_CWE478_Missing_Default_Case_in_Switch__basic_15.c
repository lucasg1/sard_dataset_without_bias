void FUN0()
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
<START>
        }
<END>
        printLine(charString);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
