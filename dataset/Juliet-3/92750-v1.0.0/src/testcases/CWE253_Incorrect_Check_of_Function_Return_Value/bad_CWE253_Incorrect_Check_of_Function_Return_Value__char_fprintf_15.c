void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (fprintf(stdout, "%s\n", "string") == 0)
<END>
        {
            printLine("fprintf failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
