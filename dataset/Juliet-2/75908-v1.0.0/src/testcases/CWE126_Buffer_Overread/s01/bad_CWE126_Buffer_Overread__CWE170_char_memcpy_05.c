static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            char data[150], dest[100];
            memset(data, 'A', 149);
            data[149] = '\0';
            memcpy(dest, data, 99*sizeof(char));
<START>
            printLine(dest);
<END>
        }
    }
}
