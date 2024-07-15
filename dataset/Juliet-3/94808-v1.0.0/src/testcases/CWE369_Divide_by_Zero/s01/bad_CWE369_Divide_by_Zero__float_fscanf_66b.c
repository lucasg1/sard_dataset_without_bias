void FUN0(float dataArray[]);
void FUN1()
{
    float data;
    float dataArray[5];
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(float dataArray[])
{
    float data = dataArray[2];
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
