static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char data;
    data = ' ';
    if(STATIC_CONST_FIVE==5)
    {
        fscanf (stdin, "%c", &data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
<START>
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
    }
}
