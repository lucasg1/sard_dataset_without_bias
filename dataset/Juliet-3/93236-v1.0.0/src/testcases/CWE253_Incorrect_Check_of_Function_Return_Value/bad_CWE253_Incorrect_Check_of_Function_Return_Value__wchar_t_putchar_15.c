void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (putwchar((wchar_t)L'A') == 0)
<END>
        {
            printLine("putwchar failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
