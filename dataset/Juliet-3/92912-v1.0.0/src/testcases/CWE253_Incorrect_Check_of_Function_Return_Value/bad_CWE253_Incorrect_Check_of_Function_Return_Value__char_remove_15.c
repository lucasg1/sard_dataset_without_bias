void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (REMOVE("removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
