static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            strcpy(data, "abcdefghijklmnopqrstuvwxyz");
<START>
            memcpy(data + 6, data + 4, 10*sizeof(char));
<END>
            printLine(data);
        }
    }
}
