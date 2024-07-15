void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN1(short data);
void FUN3(short data)
{
    FUN1(data);
}
void FUN3(short data);
void FUN5(short data)
{
    FUN3(data);
}
void FUN5(short data);
void FUN7()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN5(data);
}
void FUN0(short data)
{
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
