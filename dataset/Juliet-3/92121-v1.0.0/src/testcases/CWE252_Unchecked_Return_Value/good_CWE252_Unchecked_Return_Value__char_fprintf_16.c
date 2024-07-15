void FUN0()
{
    while(1)
    {
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
        break;
    }
}
