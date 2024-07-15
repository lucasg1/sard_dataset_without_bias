namespace NAMESPACE0
{
void FUN0(short &data)
{
    fscanf (stdin, "%hd", &data);
}
void FUN1()
{
    short data;
    data = 0;
    FUN0(data);
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}
} 
