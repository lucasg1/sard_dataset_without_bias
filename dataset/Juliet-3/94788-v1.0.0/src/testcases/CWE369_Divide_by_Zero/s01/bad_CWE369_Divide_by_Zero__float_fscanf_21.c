static int VAR0 = 0;
void FUN0(float data)
{
    if(VAR0)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
void FUN1()
{
    float data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    VAR0 = 1; 
    FUN0(data);
}
