int VAR0 = 0;
void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(short data)
{
    if(VAR0)
    {
        if(data > 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
