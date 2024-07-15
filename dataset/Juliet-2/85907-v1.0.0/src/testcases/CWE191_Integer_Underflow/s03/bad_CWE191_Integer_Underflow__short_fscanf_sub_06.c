static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    short data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
