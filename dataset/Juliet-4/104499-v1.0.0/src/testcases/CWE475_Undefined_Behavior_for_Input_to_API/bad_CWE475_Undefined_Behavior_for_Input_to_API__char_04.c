static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
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
