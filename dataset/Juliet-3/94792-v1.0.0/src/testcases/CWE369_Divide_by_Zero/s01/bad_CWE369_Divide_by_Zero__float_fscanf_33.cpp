namespace NAMESPACE0
{
void FUN0()
{
    float data;
    float &dataRef = data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    {
        float data = dataRef;
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
} 
