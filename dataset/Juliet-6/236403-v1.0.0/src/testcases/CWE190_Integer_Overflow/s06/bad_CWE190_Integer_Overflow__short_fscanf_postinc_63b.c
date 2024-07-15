void FUN0(short * dataPtr);
void FUN1()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN0(&data);
}
void FUN0(short * dataPtr)
{
    short data = *dataPtr;
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}
