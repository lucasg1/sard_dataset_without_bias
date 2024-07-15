void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
    fscanf(stdin, "%d", &data);
    goto sink;
sink:
    if (data < INT_MAX)
    {
        int result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN1()
{
    int data;
    data = 0;
    goto source;
source:
    data = 2;
    goto sink;
sink:
    {
        int result = data + 1;
        printIntLine(result);
    }
}
