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
void FUN5()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN3(data);
}
void FUN0(short data)
{
    if(data > 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}