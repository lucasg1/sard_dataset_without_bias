namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = 0;
    data = SHRT_MAX;
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
