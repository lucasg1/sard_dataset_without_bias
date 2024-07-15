void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (putwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("putwc failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
