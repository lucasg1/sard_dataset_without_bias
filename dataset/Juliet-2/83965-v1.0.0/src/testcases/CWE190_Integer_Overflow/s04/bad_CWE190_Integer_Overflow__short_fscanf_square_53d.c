void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN1(short data);
void FUN3()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN1(data);
}
void FUN4(short data);
void FUN0(short data)
{
    FUN4(data);
}
void FUN4(short data)
{
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}
