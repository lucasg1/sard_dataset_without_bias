void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    fscanf (stdin, "%" SCNd64, &data);
    goto sink;
sink:
    if(data < 0) 
    {
        if (data > (LLONG_MIN/2))
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = -2;
    goto sink;
sink:
    if(data < 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
