namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
        short data = dataRef;
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
} 
