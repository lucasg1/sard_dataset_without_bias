void FUN0()
{
    int count;
    count = -1;
    goto source;
source:
    fscanf(stdin, "%d", &count);
    goto sink;
sink:
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
void FUN1()
{
    int count;
    count = -1;
    goto source;
source:
    count = 20;
    goto sink;
sink:
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
