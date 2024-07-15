void FUN0()
{
    goto sink;
sink:
    {
        printLine("Inside the block");
    }
    printLine("Hello from good()");
}
